from pathlib import Path
import json,subprocess,os,sys,time,re,signal,hashlib,shutil,concurrent.futures
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
from scripts.student_mini import compare_outputs
O=R/'8-本轮实验/GPU同硬件全1000-20261108';D=R/'9-GPU复现/整机DMA重建';trace=json.loads((D/'trace-build/completion.json').read_text());W=Path(trace['work']);sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
import fcntl
driver_lock=(O/'.numeric-run.lock').open('a+');fcntl.flock(driver_lock,fcntl.LOCK_EX|fcntl.LOCK_NB)
if (O/'验收结论.json').exists():
 receipt=json.loads((O/'验收结论.json').read_text());assert receipt['status']=='SAME_HARDWARE_1000_REPLAY_INDEPENDENTLY_SEALED';assert receipt['status_sha256']==hashlib.sha256((O/'status.json').read_bytes()).hexdigest();sealed_files=json.loads((O/'evidence-sha256.json').read_text());assert all(hashlib.sha256((O/n).read_bytes()).hexdigest()==h for n,h in sealed_files.items());print('Existing immutable numeric seal verified; no files rewritten');raise SystemExit(0)

for p,h in trace['new_bindings'].items():assert sha(Path(p))==h
for p in Path('/proc').iterdir():
 if not p.name.isdigit() or int(p.name)==os.getpid():continue
 try:
  cmd=(p/'cmdline').read_bytes()
  if b'python' in cmd.split(bytes([0]))[0] and b'/run_gpu_same_hardware_1000.py' in cmd:raise RuntimeError('original runner still active: '+p.name)
 except (FileNotFoundError,PermissionError):pass
cache_dir=R/'8-本轮实验/GPU锁定编译器内存缓存-20261108';cache=json.loads((cache_dir/'cache.json').read_text());assert json.loads((cache_dir/'measurement/validation.json').read_text())['status']=='BYTE_IDENTICAL_HOST_CACHE_4_CONTROL_PASS';C=__import__('restore_locked_host_cache').restore(cache,cache_dir);assert all(sha(C/x['name'])==x['sha256'] for x in cache['records']);assert json.loads((R/'8-本轮实验/GPU并行独立回归探针-20261108/completion.json').read_text())['status']=='TWO_INDEPENDENT_PROCESSES_CONTROL_PASS'
Gfile=S.parent/'data/golden/vectors.jsonl';G=[json.loads(s) for s in Gfile.read_text().splitlines()];assert len(G)==1000
meta=json.loads((W/'build.json').read_text());oldprefix='/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付';inputs=meta['input_directory'].replace(oldprefix,str(R));cmd0=(W/'run-command.sh').read_text().replace(oldprefix,str(R)).replace('LD_LIBRARY_PATH=','LD_LIBRARY_PATH='+str(C)+':',1)
previous=json.loads((O/'status.json').read_text());assert previous['bindings']==trace['new_bindings'];H=O/'resume-history';H.mkdir(exist_ok=True);(H/(str(time.time_ns())+'.json')).write_text(json.dumps(previous,indent=2));saved={x['ordinal']:x for x in previous['records']};prior={x['ordinal']:x for x in json.loads((D/'whole-gpu-runs/status.json').read_text())['records']}
state={k:previous[k] for k in ['goal_records','hardware_identity','formal_baseline','protocol_scope','bindings','golden_sha256']};assert sha(Gfile)==state['golden_sha256'];state.update(status='RUNNING',records=[],driver='isolated independent processes with unchanged target binary and byte-identical host compiler-library cache',workers=2,host_cache_manifest_sha256=sha(cache_dir/'cache.json'),host_cache_is_not_target_speedup=True);start=time.monotonic();records={}
def save():
 state['records']=[records[i] for i in sorted(records)];state['elapsed_seconds']=time.monotonic()-start;state['resource_snapshot']=snapshot();temp=O/'status-writing.tmp';temp.write_text(json.dumps(state,indent=2));os.replace(temp,O/'status.json')
def validate(i,f,seconds,reused,mode):
 text=f.read_text(errors='replace');lines=[x for x in text.splitlines() if x.startswith('STUDENT_GPU ')];assert len(lines)==1 and lines[0].startswith(f'STUDENT_GPU ordinal={i} ') and f'STUDENT_GPU_COMPLETE start={i} count=1' in text,('incomplete target transcript',i)
 a=parse(lines[0].replace(f'ordinal={i} ','ordinal=0 ',1)+'\nSTUDENT_GPU_COMPLETE start=0 count=1\n',1)[0];a['ordinal']=i;status=re.findall(r'STUDENT_GPU_DEVICE_STATUS fault=([01]) busy=([01])',text);assert status and all(b=='0' for fault,b in status),('status absent/still busy',i);fault=any(v=='1' for v,b in status)
 if fault:
  assert a['actual_status']=='UNSUPPORTED_BUS_INJECTION';a['actual_status']='BUS_ERROR'
 g=G[i];e=g['golden'];assert a['actual_status']==e['expected_status'],('status mismatch',i)
 if e['output_values']:
  assert compare_outputs(e['output_values'],a['actual'],e['output_bits'],a['actual_bits'])['status']=='PASS',('output mismatch',i)
  if g['case']['operator']=='p1':assert a['selected']==[n for ids in e['selected_token_ids'] for n in ids],('selected-token mismatch',i)
  if 'primitive_witness_result' in e:assert a['primitive']==e['primitive_witness_result']
 else:assert not a['actual_bits']
 perf=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',text,re.M);assert len(perf)==1 and int(perf[0][1])>0
 return {'ordinal':i,'case_id':g['case']['id'],'seed':g['seed'],'numeric_status_match':True,'observation':a,'device_fault':fault,'cycles':int(perf[0][1]),'instructions':int(perf[0][0]),'seconds':seconds,'reused_same_binary_log':reused,'host_execution':mode,'log_sha256':sha(f)}
def fresh(i):
 f=O/f'{i:04d}.log';assert not f.exists();cwd=O/'isolated-work'/f'{i:04d}';cwd.mkdir(parents=True,exist_ok=True);t=time.monotonic();cmd=cmd0.replace('@OPTS@',f'{inputs}/inputs.bin {i} 1').replace('./student_mini',str(W/'student_mini'))
 with f.open('w') as log:
  p=subprocess.Popen(['bash','-c',cmd],cwd=cwd,env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='120'),stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=180)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('case timeout '+str(i))
 assert code==0,('process failed',i,code)
 return validate(i,f,time.monotonic()-t,False,'same binary, isolated cwd, SHA-identical compiler library RAM cache')
try:
 for i in range(1000):
  f=O/f'{i:04d}.log'
  if i in saved:
   x=saved[i];assert sha(f)==x['log_sha256'];records[i]=validate(i,f,x['seconds'],True,x.get('host_execution','previous original host launch'));continue
  if f.exists():
   d=O/'interrupted-logs';d.mkdir(exist_ok=True);f.rename(d/(f.stem+'-'+str(time.time_ns())+'.log'))
  if i in prior:
   x=prior[i];old=D/'whole-gpu-runs'/f'{i:04d}.log';assert x['exit_code']==0 and sha(old)==x['log_sha256'];shutil.copyfile(old,f);records[i]=validate(i,f,x['seconds'],True,'original same binary DMA controls')
 save();print({'validated_existing':len(records)},flush=True)
 todo=iter(i for i in range(1000) if i not in records)
 with concurrent.futures.ThreadPoolExecutor(max_workers=2) as pool:
  pending={}
  for i in [next(todo,None),next(todo,None)]:
   if i is not None:pending[pool.submit(fresh,i)]=i
  while pending:
   done,_=concurrent.futures.wait(pending,return_when=concurrent.futures.FIRST_COMPLETED)
   for future in done:
    i=pending.pop(future);records[i]=future.result();save()
    if len(records)%10==0:print({'completed':len(records),'matches':len(records)},flush=True)
    if not (O/'STOP_AFTER_CURRENT').exists():
     nxt=next(todo,None)
     if nxt is not None:pending[pool.submit(fresh,nxt)]=nxt
 assert all(sha(Path(p))==h for p,h in trace['new_bindings'].items());assert all(sha(C/x['name'])==x['sha256'] for x in cache['records'])
 state['status']='SAME_HARDWARE_1000_NUMERIC_STATUS_PASS' if len(records)==1000 else 'CHECKPOINT_STOP_REQUESTED';save()
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}');save()
print(json.dumps({k:v for k,v in state.items() if k not in ['records','bindings','resource_snapshot']},indent=2))
if state["status"]=="FAILED":raise SystemExit(1)
