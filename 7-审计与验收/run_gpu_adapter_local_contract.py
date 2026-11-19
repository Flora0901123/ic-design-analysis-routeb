from pathlib import Path
import subprocess,time,json,hashlib,os,signal
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources/integration/student-mini';O=R/'8-本轮实验/GPU适配器局部契约-20261107';O.mkdir(exist_ok=True);h=R/'7-审计与验收/gpu_adapter_local_contract.sv';state={'status':'RUNNING','scope':'local adapter safety at full interface width; no core, no mapped SRAM, no whole-platform liveness or qualification','tools':subprocess.check_output(['yosys','-V'],text=True).strip(),'depth':2,'mode':'temporal induction, max 4 steps','assumptions':['initial sampled reset asserted; all other interface inputs unconstrained'],'records':[]}
for top,name in [('mem_contract','gpu_fault_memory_adapter.sv'),('cmd_contract','gpu_status_command_adapter.sv')]:
 f=O/top;f.mkdir(exist_ok=True);sources=[S/name,h];script='read -formal -sv '+' '.join(map(str,sources))+'; prep -top '+top+' -flatten; opt_clean; sat -tempinduct -seq 2 -maxsteps 4 -prove-asserts -set-assumes -verify -timeout 90'
 (f/'run.ys').write_text(script);then=time.monotonic()
 with (f/'proof.log').open('w') as log:
  p=subprocess.Popen(['yosys','-s',str(f/'run.ys')],stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=110)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();code='TIMEOUT'
 text=(f/'proof.log').read_text(errors='replace');ok=code==0 and 'Induction step proven: SUCCESS!' in text
 state['records'].append({'top':top,'result':'INDUCTIVE_LOCAL_SAFETY_PASS' if ok else 'FAILED','exit_code':code,'elapsed_seconds':time.monotonic()-then,'bindings':{str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in sources},'log_sha256':hashlib.sha256((f/'proof.log').read_bytes()).hexdigest()});(O/'completion.json').write_text(json.dumps(state,indent=2))
state['status']='LOCAL_INDUCTIVE_LOCAL_SAFETY_PASS' if all(x['result']=='INDUCTIVE_LOCAL_SAFETY_PASS' for x in state['records']) else 'FAILED';(O/'completion.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
