"""Fresh target execution of all 100 frozen cases x 10 seeds; no host oracle in targets."""
from pathlib import Path
import concurrent.futures,datetime,hashlib,json,os,re,signal,subprocess,sys,time,traceback
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources'
sys.path.insert(0,str(S))
from scripts.export_student_mini_input import encode
from scripts.assemble_student_mini_cpu_results import parse as cpu_parse,join as cpu_join
from scripts.assemble_student_mini_gpu_results import parse as gpu_parse,join as gpu_join
stamp=datetime.datetime.now(datetime.timezone.utc).strftime('%Y%m%dT%H%M%SZ')
OUT=R/'8-本轮实验'/('全100案例双后端-'+stamp);OUT.mkdir()
GOLD=S.parent/'data/golden/vectors.jsonl';gold=[json.loads(x) for x in GOLD.read_text().splitlines()];image=b''.join(encode(x,i) for i,x in enumerate(gold))
assert len(gold)==1000 and len({x['case']['id'] for x in gold})==100
TOOLS=R/'9-GPU复现/tools'
ENV=dict(os.environ,PATH=str(TOOLS/'llvm-vortex/bin')+':'+os.environ.get('PATH',''),HIP_CLANG_PATH=str(TOOLS/'llvm-vortex/bin'),MAKEFLAGS='-j2',THREADS='2',CUDA_VISIBLE_DEVICES='',HIP_VISIBLE_DEVICES='',CHIP_BE='opencl')
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save(p,d):p.write_text(json.dumps(d,ensure_ascii=False,indent=2)+'\n')
def run(cmd,cwd,log,timeout=1800):
 with log.open('w') as f:
  p=subprocess.Popen([str(x) for x in cmd],cwd=cwd,env=ENV,stdout=f,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=timeout)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('timeout: '+str(log))
 if code:raise RuntimeError('exit '+str(code)+': '+str(log))
def cpu():
 out=OUT/'cpu-rtl';out.mkdir();state={'status':'RUNNING','backend':'vexriscv-rtl','fresh_execution':True,'records_expected':1000};save(out/'status.json',state)
 try:
  prior=R/'8-本轮实验/20261029T053512179194Z-cpu-baseline';completion=json.loads((prior/'completion.json').read_text());work=S/'build/student-mini/cpu'/completion['input_sha256']
  verified={}
  for name,digest in completion['artifacts'].items():
   if name in ['inputs.bin','inputs.json','soc/software/bios/bios.bin','soc/gateware/obj_dir/Vsim','soc/gateware/sim.v','soc/csr.csv']:
    assert sha(work/name)==digest,'cached artifact changed: '+name;verified[str(work/name)]=digest
  assert (work/'inputs.bin').read_bytes()==image
  assert (prior/'student_mini_scalar.c').read_bytes()==(S/'software/student_mini_scalar.c').read_bytes()
  gate=work/'soc/gateware';sim=gate/'obj_dir/Vsim';initializers={str(p):sha(p) for p in gate.glob('*.init')}
  save(out/'bindings.json',{'compiled_artifacts':verified,'memory_initializers':initializers,'golden_sha256':sha(GOLD),'scalar_sha256':sha(S/'software/student_mini_scalar.c'),'build_reused':True})
  start=time.monotonic()
  import queue,threading
  messages=queue.Queue()
  p=subprocess.Popen([str(sim)],cwd=gate,env=ENV,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,errors='replace',bufsize=1,start_new_session=True)
  def drain():
   for line in p.stdout:messages.put(line)
   messages.put(None)
  threading.Thread(target=drain,daemon=True).start()
  complete=False
  with (out/'console.log').open('w',buffering=1) as log:
   try:
    while time.monotonic()-start<1800:
     try:line=messages.get(timeout=1)
     except queue.Empty:continue
     if line is None:break
     log.write(line)
     if line.startswith('STUDENT_CPU_COMPLETE '):complete=True;break
   finally:
    if p.poll() is None:os.killpg(p.pid,signal.SIGTERM);p.wait(timeout=10)
  assert complete,'missing CPU completion'
  text=(out/'console.log').read_text(errors='replace');rows=cpu_parse(text,1000);report=cpu_join(gold,rows);save(out/'official-results.json',report)
  assert all(sha(Path(n))==d for n,d in {**verified,**initializers}.items()),'artifact changed during execution'
  state.update(status='TARGET_EXECUTED',records_observed=len(rows),numeric_matches=report.get('numeric_matches'),elapsed_seconds=time.monotonic()-start,protocol_qualification='PENDING_SEPARATE_RTL_ADAPTER_CHECKS',formal_baseline=False)
 except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}');(out/'error.txt').write_text(traceback.format_exc())
 save(out/'status.json',state);return state

def gpu():
 out=OUT/'gpu-simx';out.mkdir();state={'status':'RUNNING','backend':'vortex-simx','fresh_execution':True,'records_expected':1000,'performance_eligible':False};save(out/'status.json',state)
 try:
  py=S/'.venv/bin/python';vectors=S/'vectors.jsonl'
  assert vectors.read_bytes()==GOLD.read_bytes(),'vectors differ'
  run([py,S/'scripts/export_student_mini_input.py','--vectors',vectors,'--output',out/'input-images'],S,out/'export.log')
  inputs=Path(json.loads((out/'export.log').read_text().strip().splitlines()[-1])['work']);assert (inputs/'inputs.bin').read_bytes()==image
  run([py,S/'scripts/prepare_student_mini_gpu.py','--input-dir',inputs],S,out/'prepare.log')
  work=Path(json.loads((out/'prepare.log').read_text().strip().splitlines()[-1])['work']);state['work']=str(work);save(out/'status.json',state)
  cached=S/'build/student-mini/native-gpu/a6e2b2f44258a0a7f694d57f18f00ea059d99b7767d103b29dbe9f2b4c5dac17/vortex-build'
  (work/'vortex-build').symlink_to(cached,target_is_directory=True)
  make=work/'Makefile';make.write_text(make.read_text().replace('-DVX_CFG_NUM_THREADS=4\n','-DVX_CFG_NUM_THREADS=4 -DVX_CFG_FPU_TYPE=STD\n'))
  bound=[GOLD,S/'software/student_mini_scalar.c',S/'software/include/student_mini_scalar.h',S/'integration/vortex/student_mini_host.inc',work/'student_mini.cu',make,inputs/'inputs.bin',cached/'sw/runtime/libsimx.so',cached/'sw/runtime/libvortex-simx.so',cached/'sw/runtime/libvortex.so']
  bindings={str(p):sha(p) for p in bound};save(out/'bindings.json',bindings)
  run(['make','-j2','-C',work,'all','THREADS=2'],work,out/'compile.log')
  state['stage']='execute';save(out/'status.json',state);start=time.monotonic()
  run(['make','-j2','-C',work,'run-simx','THREADS=2','OPTS='+str(inputs/'inputs.bin')+' 0 1000'],work,out/'execute.log',3600)
  text=(out/'execute.log').read_text(errors='replace');assert 'VORTEX_DRIVER=simx' in text
  rows=gpu_parse(text,1000);report=gpu_join(gold,rows);save(out/'official-results.json',report)
  assert all(sha(Path(n))==d for n,d in bindings.items()),'GPU artifact changed during run'
  state.update(status='TARGET_EXECUTED',records_observed=len(rows),numeric_matches=report['numeric_matches'],numeric_failures=sum(x['observation']['numeric_match'] is False for x in report['records']),unsupported_records=sum(x['observation']['numeric_match'] is None for x in report['records']),elapsed_seconds=time.monotonic()-start,formal_baseline=False,qualification=report['reason'])
 except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}');(out/'error.txt').write_text(traceback.format_exc())
 save(out/'status.json',state);return state


print(json.dumps({'out':str(OUT),'status':'RUNNING'},ensure_ascii=False),flush=True)
state=cpu()
save(OUT/'summary.json',{'cpu':state})
print(json.dumps({'out':str(OUT),'cpu':state},ensure_ascii=False),flush=True)
