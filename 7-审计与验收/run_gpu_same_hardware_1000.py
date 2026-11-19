from pathlib import Path
import json,subprocess,os,sys,time,re,signal,hashlib,shutil
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
from scripts.student_mini import compare_outputs
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
O=R/'8-本轮实验/GPU同硬件全1000-20261108';O.mkdir(exist_ok=True);
import fcntl
driver_lock=(O/'.numeric-run.lock').open('a+');fcntl.flock(driver_lock,fcntl.LOCK_EX|fcntl.LOCK_NB)
if (O/'验收结论.json').exists():
 receipt=json.loads((O/'验收结论.json').read_text());assert receipt['status']=='SAME_HARDWARE_1000_REPLAY_INDEPENDENTLY_SEALED';assert receipt['status_sha256']==hashlib.sha256((O/'status.json').read_bytes()).hexdigest();sealed_files=json.loads((O/'evidence-sha256.json').read_text());assert all(hashlib.sha256((O/n).read_bytes()).hexdigest()==h for n,h in sealed_files.items());print('Existing immutable numeric seal verified; no files rewritten');raise SystemExit(0)
D=R/'9-GPU复现/整机DMA重建';trace=json.loads((D/'trace-build/completion.json').read_text());W=Path(trace['work']);assert trace['status']=='TRACE_BUILD_AND_CONTROL_PASS'
for p,h in trace['new_bindings'].items():assert hashlib.sha256(Path(p).read_bytes()).hexdigest()==h
v=S.parent/'data/golden/vectors.jsonl';gold=[json.loads(x) for x in v.read_text().splitlines()];b=json.loads((W/'build.json').read_text());command=(W/'run-command.sh').read_text().strip();prior=json.loads((D/'whole-gpu-runs/status.json').read_text());prior={x['ordinal']:x for x in prior['records']};state={'status':'RUNNING','goal_records':1000,'hardware_identity':'fresh macro-bound Vortex + actual fault adapters + reconstructed functional SRAM','formal_baseline':False,'protocol_scope':'numeric/status replay; full seeded handshake/reset qualification remains separate','bindings':trace['new_bindings'],'golden_sha256':hashlib.sha256(v.read_bytes()).hexdigest(),'records':[]};start=time.monotonic()
previous=json.loads((O/'status.json').read_text()) if (O/'status.json').exists() else None
saved={x['ordinal']:x for x in previous.get('records',[])} if previous else {}
assert not previous or previous['bindings']==trace['new_bindings']
if previous:
 h=O/'resume-history';h.mkdir(exist_ok=True);(h/(str(time.time_ns())+'.json')).write_text(json.dumps(previous,indent=2))
command=command.replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R))
b['input_directory']=b['input_directory'].replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R))
def save():
 state['elapsed_seconds']=time.monotonic()-start;state['resource_snapshot']=snapshot();(O/'status.json').write_text(json.dumps(state,indent=2))
try:
 for i,g in enumerate(gold):
  f=O/f'{i:04d}.log';reused=False
  if f.exists() and i not in saved:
   h=O/'interrupted-logs';h.mkdir(exist_ok=True);f.rename(h/(f.stem+'-'+str(time.time_ns())+'.log'))
  if i in saved:
   assert hashlib.sha256(f.read_bytes()).hexdigest()==saved[i]['log_sha256'],'saved log changed'
   text=f.read_text(errors='replace');code=0;seconds=saved[i]['seconds'];reused=True
  elif i in prior:
   old=D/'whole-gpu-runs'/f'{i:04d}.log';assert hashlib.sha256(old.read_bytes()).hexdigest()==prior[i]['log_sha256'];shutil.copyfile(old,f);text=f.read_text(errors='replace');code=prior[i]['exit_code'];seconds=prior[i]['seconds'];reused=True
  else:
   t=time.monotonic();cmd=command.replace('@OPTS@',f"{b['input_directory']}/inputs.bin {i} 1").replace('./student_mini',str(W/'student_mini'))
   with f.open('w') as log:
    p=subprocess.Popen(['bash','-c',cmd],cwd=W,env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='120'),stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
    try:code=p.wait(timeout=180)
    except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();code='TIMEOUT'
   seconds=time.monotonic()-t;text=f.read_text(errors='replace')
  assert code==0,'process failed '+str(i)
  lines=[x for x in text.splitlines() if x.startswith('STUDENT_GPU ')];assert len(lines)==1 and lines[0].startswith(f'STUDENT_GPU ordinal={i} ') and f'STUDENT_GPU_COMPLETE start={i} count=1' in text
  a=parse(lines[0].replace(f'ordinal={i} ','ordinal=0 ',1)+'\nSTUDENT_GPU_COMPLETE start=0 count=1\n',1)[0];a['ordinal']=i;status_reads=re.findall(r'STUDENT_GPU_DEVICE_STATUS fault=([01]) busy=([01])',text);assert status_reads;fault=any(x=='1' for x,y in status_reads)
  if fault:
   assert a['actual_status']=='UNSUPPORTED_BUS_INJECTION','unexpected device fault';a['actual_status']='BUS_ERROR'
  e=g['golden'];ok=a['actual_status']==e['expected_status']
  if e['output_values']:
   c=compare_outputs(e['output_values'],a['actual'],e['output_bits'],a['actual_bits']);ok=ok and c['status']=='PASS'
   if g['case']['operator']=='p1':ok=ok and a['selected']==[n for ids in e['selected_token_ids'] for n in ids]
   if 'primitive_witness_result' in e:ok=ok and a['primitive']==e['primitive_witness_result']
  else:ok=ok and not a['actual_bits']
  perf=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',text,re.M);assert len(perf)==1 and int(perf[0][1])>0
  state['records'].append({'ordinal':i,'case_id':g['case']['id'],'seed':g['seed'],'numeric_status_match':ok,'observation':a,'device_fault':fault,'cycles':int(perf[0][1]),'instructions':int(perf[0][0]),'seconds':seconds,'reused_same_binary_log':reused,'log_sha256':hashlib.sha256(f.read_bytes()).hexdigest()});save()
  if not ok:raise RuntimeError('golden mismatch at '+str(i))
  if (i+1)%10==0:print(json.dumps({'completed':i+1,'matches':sum(x['numeric_status_match'] for x in state['records'])}),flush=True)
 assert all(hashlib.sha256(Path(p).read_bytes()).hexdigest()==h for p,h in trace['new_bindings'].items());state['status']='SAME_HARDWARE_1000_NUMERIC_STATUS_PASS';save()
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}');save()
print(json.dumps({k:v for k,v in state.items() if k not in ['records','bindings']},indent=2))

if state["status"]=="FAILED":raise SystemExit(1)
