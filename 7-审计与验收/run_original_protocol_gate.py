from pathlib import Path
import subprocess,json,os,time,signal,hashlib
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';O=R/'8-本轮实验/GPU原协议门-20261108';O.mkdir(exist_ok=True);files=['shared/rtl/vortex_command_adapter.sv','shared/rtl/vortex_memory_adapter.sv','shared/formal/student_mini_gpu_adapters_harness.sv'];C=Path('/root/.cache/routeb-original-protocol');C.mkdir(exist_ok=True)
for name in files:(C/Path(name).name).write_bytes((S/name).read_bytes())
state={'status':'RUNNING','scope':'original full-width 2-port adapter harness, not Vortex core or physical signoff','bindings':{x:hashlib.sha256((S/x).read_bytes()).hexdigest() for x in files},'stages':[]};start=time.monotonic()
def run(name,script,timeout):
 (O/(name+'.ys')).write_text(script);t=time.monotonic()
 with (O/(name+'.log')).open('w') as log:
  p=subprocess.Popen(['yosys','-p',script],cwd=C,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=timeout)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();code='TIMEOUT'
 state['stages'].append({'stage':name,'exit_code':code,'seconds':time.monotonic()-t});(O/'completion.json').write_text(json.dumps(state,indent=2));return code,(O/(name+'.log')).read_text(errors='replace')
try:
 code,text=run('prepare','read -formal -sv '+' '.join(Path(x).name for x in files)+'; prep -top student_mini_gpu_adapters_harness -flatten; formalff -clk2ff; opt -full -keepdc; wreduce; opt -full -keepdc; write_json prepared.json; write_rtlil prepared.il',120);assert code==0
 code,text=run('induction','read_rtlil prepared.il; chformal -cover -remove; sat -tempinduct -seq 1 -prove-asserts -set-assumes -verify -maxsteps 6 -timeout 150',180);assert code==0 and 'Induction step proven: SUCCESS!' in text,'original safety not proved'
 state['safety']='INVARIANT_PROVED';design=json.loads((C/'prepared.json').read_text())['modules']['student_mini_gpu_adapters_harness'];names={tuple(v['bits']):k for k,v in design['netnames'].items()};covers=[]
 for k,v in design['cells'].items():
  if v['type']=='$cover':covers.append({'cell':k,'a':names[tuple(v['connections']['A'])],'en':names[tuple(v['connections']['EN'])]})
 assert covers,'no original covers'
 for i,cov in enumerate(covers):
  a=cov['a'];en=cov['en'];script=f'read_rtlil prepared.il; chformal -cover -remove; chformal -assert -remove; sat -seq 8 -set-assumes -set-at 8 {a} 1 -set-at 8 {en} 1 -show {a} -show {en} -timeout 40'
  code,text=run(f'cover-{i:02d}',script,55);assert code==0 and 'SAT solving finished - model found:' in text,'unreached cover '+str(i)
 state.update(status='ORIGINAL_HARNESS_SAFETY_AND_COVER_PASS',covers=covers,cover_witness_bound=8,course_bound=32,formal_baseline=False)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
state['elapsed_seconds']=time.monotonic()-start;(O/'completion.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
