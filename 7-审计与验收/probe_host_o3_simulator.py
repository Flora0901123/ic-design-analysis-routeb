from pathlib import Path
import sys,json,subprocess,os,time,re,hashlib,signal
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
from scripts.student_mini import compare_outputs
O=R/'8-本轮实验/GPU仿真器主机编译优化-20261108';build=json.loads((O/'build.json').read_text());assert build['status']=='HOST_O3_BUILD_PASS_NOT_YET_VALIDATED';Q=Path(build['work']);trace=json.loads((R/'9-GPU复现/整机DMA重建/trace-build/completion.json').read_text());W=Path(trace['work']);meta=json.loads((W/'build.json').read_text());gold=[json.loads(x) for x in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()];old=json.loads((R/'8-本轮实验/GPU同硬件全1000-20261108/status.json').read_text());prior={x['ordinal']:x for x in old['records']};dma=R/'9-GPU复现/整机DMA重建/whole-gpu-runs';command=(W/'run-command.sh').read_text().replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R));inputs=meta['input_directory'].replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R));state={'status':'RUNNING','no_target_RTL_or_kernel_change':True,'no_target_speedup_claim':True,'host_library_sha256':build['library_sha256'],'records':[]}
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save():state['resources']=snapshot();(O/'validation.json').write_text(json.dumps(state,indent=2))
try:
 assert sha(Q/'librtlsim.so')==build['library_sha256']
 for i in [0,100,330,660]:
  original=R/'8-本轮实验/GPU同硬件全1000-20261108'/f'{i:04d}.log'
  if i not in prior:original=dma/f'{i:04d}.log'
  text=original.read_text();m=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',text,re.M);assert len(m)==1;expected_instr,expected_cycles=map(int,m[0]);f=O/f'probe-{i:04d}.log';assert not f.exists()
  # Only prepend the independently built simulator library search directory.
  cmd=command.replace('LD_LIBRARY_PATH=','LD_LIBRARY_PATH='+str(Q)+':',1).replace('@OPTS@',f'{inputs}/inputs.bin {i} 1').replace('./student_mini',str(W/'student_mini'));t=time.monotonic()
  env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='180')
  if i==0:env['LD_DEBUG']='libs'
  with f.open('w') as log:
   p=subprocess.Popen(['bash','-c',cmd],cwd=W,env=env,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
   try:code=p.wait(timeout=240)
   except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();code='TIMEOUT'
  seconds=time.monotonic()-t;text=f.read_text(errors='replace');assert code==0,('probe failed',i,code)
  if i==0:assert 'calling init: '+str(Q/'librtlsim.so') in text,'optimized library was not loaded'
  lines=[x for x in text.splitlines() if x.startswith('STUDENT_GPU ')];assert len(lines)==1 and f'STUDENT_GPU_COMPLETE start={i} count=1' in text
  a=parse(lines[0].replace(f'ordinal={i} ','ordinal=0 ',1)+'\nSTUDENT_GPU_COMPLETE start=0 count=1\n',1)[0];e=gold[i]['golden'];assert a['actual_status']==e['expected_status'] and compare_outputs(e['output_values'],a['actual'],e['output_bits'],a['actual_bits'])['status']=='PASS'
  m=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',text,re.M);assert len(m)==1 and tuple(map(int,m[0]))==(expected_instr,expected_cycles),'target instruction/cycle counts changed'
  state['records'].append({'ordinal':i,'seconds':seconds,'parent_seconds':prior[i]['seconds'] if i in prior else None,'cycles':expected_cycles,'instructions':expected_instr,'outputs_match':True,'counts_identical_to_parent':True,'log_sha256':sha(f)});save();print(state['records'][-1],flush=True)
 assert all(sha(Path(p))==h for p,h in trace['new_bindings'].items())
 state['status']='HOST_O3_CONTROL_PROBES_PASS'
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps(state,indent=2))
