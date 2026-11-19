from pathlib import Path
import json,os,re,shlex,signal,subprocess,sys,time,hashlib
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S))
from scripts.assemble_student_mini_gpu_results import parse,join
out=R/'8-本轮实验/全100案例双后端-20261104T134332Z/gpu-simx';state=json.loads((out/'status.json').read_text());work=Path(state['work'])
prior=R/'8-本轮实验/全100案例双后端-20261104T134332Z/gpu-simx';ps=json.loads((prior/'status.json').read_text());old=ps['work']
line=next(x for x in (prior/'execute.log').read_text().splitlines() if x.startswith('OCL_ICD_VENDORS=') and 'VORTEX_DRIVER=simx' in x)
parts=shlex.split(line.replace(old,str(work)));env=dict(os.environ)
for token in parts:
 if '=' not in token or token.startswith('./'):break
 k,v=token.split('=',1);env[k]=v
inputs=next((out/'input-images').glob('*/inputs.bin'));lib=work/'vortex-build/sw/runtime'
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
bind={str(p):sha(p) for p in [work/'student_mini',work/'student_mini.cu',S/'software/student_mini_scalar.c',inputs,*[lib/n for n in ['libsimx.so','libvortex-simx.so','libvortex.so']]]}
(out/'direct-execution-bindings.json').write_text(json.dumps(bind,indent=2))
state.update(status='RUNNING',stage='direct-execution',previous_error=state.pop('error',None));(out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
try:
 start=time.monotonic()
 with (out/'execute-runtime-confirmed.log').open('w') as log:
  log.write('VORTEX_DRIVER=simx; direct compiled candidate execution; environment from completed baseline command\n');log.flush()
  p=subprocess.Popen([str(work/'student_mini'),str(inputs),'0','1000'],cwd=work,env=env,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=900)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('timeout')
 assert code==0,'exit '+str(code)
 text=(out/'execute-runtime-confirmed.log').read_text(errors='replace');rows=parse(text,1000)
 gold=[json.loads(x) for x in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()];report=join(gold,rows)
 (out/'official-results.json').write_text(json.dumps(report,ensure_ascii=False,indent=2))
 assert all(sha(Path(n))==d for n,d in bind.items()),'execution artifacts changed'
 state.update(status='TARGET_EXECUTED',records_observed=1000,numeric_matches=report['numeric_matches'],numeric_failures=sum(x['observation']['numeric_match'] is False for x in report['records']),unsupported_records=sum(x['observation']['numeric_match'] is None for x in report['records']),elapsed_seconds=time.monotonic()-start,actual_log='execute-runtime-confirmed.log')
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(out/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2));print(json.dumps(state,ensure_ascii=False,indent=2))
