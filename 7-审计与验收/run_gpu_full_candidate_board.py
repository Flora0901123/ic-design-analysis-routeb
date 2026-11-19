"""Full 100x10 candidate board. No invented official weights or promotion."""
from pathlib import Path
import json,hashlib,os,sys,time,re,subprocess,signal,concurrent.futures,fcntl,shlex
from qualification_resource_guard import prepare,join,snapshot
from restore_locked_host_cache import restore
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU完整候选板-20261109';O.mkdir(exist_ok=True);lock=(O/'.driver.lock').open('a+');fcntl.flock(lock,fcntl.LOCK_EX|fcntl.LOCK_NB)
if (O/'验收结论.json').exists():
 sealed=json.loads((O/'验收结论.json').read_text());assert sealed['status']=='FULL_1000_CANDIDATE_BOARD_INDEPENDENTLY_SEALED' and sealed['status_sha256']==hashlib.sha256((O/'status.json').read_bytes()).hexdigest();assert all(hashlib.sha256((O/n).read_bytes()).hexdigest()==h for n,h in json.loads((O/'evidence-sha256.json').read_text()).items());print('Existing immutable candidate seal verified; no rewrite');raise SystemExit(0)
BASE=R/'8-本轮实验/GPU同硬件全1000-20261108';qualified=json.loads((BASE/'验收结论.json').read_text());assert qualified['status']=='SAME_HARDWARE_1000_REPLAY_INDEPENDENTLY_SEALED';sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();assert sha(BASE/'status.json')==qualified['status_sha256'];parent=json.loads((BASE/'status.json').read_text());parent={x['ordinal']:x for x in parent['records']}
A=R/'8-本轮实验/GPU锁定硬件四组候选-20261109';control=json.loads((A/'routed-control-status-v2.json').read_text());assert control['status']=='OPERATOR_DISPATCH_8_CONTROL_PASS';assert all(sha(Path(p))==h for p,h in control['bindings'].items());route=R/'7-审计与验收/route_locked_gpu_candidate.py';T=json.loads((R/'9-GPU复现/整机DMA重建/trace-build/completion.json').read_text());W=Path(T['work']);MC=R/'8-本轮实验/GPU单轮多类计数运行库-20261108/runtime';cache_dir=R/'8-本轮实验/GPU锁定编译器内存缓存-20261108';C=restore(json.loads((cache_dir/'cache.json').read_text()),cache_dir);S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
Gfile=S.parent/'data/golden/vectors.jsonl';G=[json.loads(t) for t in Gfile.read_text().splitlines()];meta=json.loads((W/'build.json').read_text());old='/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付';I=Path(meta['input_directory'].replace(old,str(R)));blob=(I/'inputs.bin').read_bytes();assert len(blob)==1936*1000
bindings=dict(T['new_bindings']);bindings[str(Path(__file__).resolve())]=sha(Path(__file__).resolve());bindings[str(BASE/'status.json')]=sha(BASE/'status.json');bindings.update({str(route):sha(route),str(Gfile):sha(Gfile),str(I/'inputs.bin'):sha(I/'inputs.bin'),str(BASE/'验收结论.json'):sha(BASE/'验收结论.json')})
for row in json.loads((A/'build.json').read_text())['records']:
 for name in ['student_mini','student_mini.cu']:p=Path(row['work'])/name;bindings[str(p)]=sha(p)
for name in ['libvortex.so','librtlsim.so','libvortex-rtlsim.so']:bindings[str(MC/name)]=sha(MC/name)
assert all(sha(Path(p))==h for p,h in bindings.items());command=(W/'run-command.sh').read_text().replace(old,str(R)).replace('LD_LIBRARY_PATH=','LD_LIBRARY_PATH='+str(C)+':'+str(MC)+':',1).replace('./student_mini',shlex.join([sys.executable,str(route),'combined']))
previous=json.loads((O/'status.json').read_text()) if (O/'status.json').exists() else None;saved={x['ordinal']:x for x in previous.get('records',[])} if previous else {};assert not previous or previous['bindings']==bindings
if previous:h=O/'resume-history';h.mkdir(exist_ok=True);(h/(str(time.time_ns())+'.json')).write_text(json.dumps(previous,indent=2))
state={'status':'RUNNING','variant':'descriptor-dispatched combined candidate','expected_records':1000,'official_weights':None,'formal_promotion':'HOLD','formal_score_eligible':False,'teacher_physical_identity':False,'bindings':bindings,'records':[]};records={};start=time.monotonic()
def save():
 state['records']=[records[i] for i in sorted(records)];state['elapsed_seconds']=time.monotonic()-start;state['resources']=snapshot();t=O/'status-writing.tmp';t.write_text(json.dumps(state,ensure_ascii=False,indent=2));os.replace(t,O/'status.json')
def validate(i,f,seconds,reused):
 text=f.read_text(errors='replace');lines=[l for l in text.splitlines() if l.startswith('STUDENT_GPU ')];assert len(lines)==1 and lines[0].startswith(f'STUDENT_GPU ordinal={i} ') and f'STUDENT_GPU_COMPLETE start={i} count=1' in text;a=parse(lines[0].replace(f'ordinal={i} ','ordinal=0 ',1)+'\nSTUDENT_GPU_COMPLETE start=0 count=1\n',1)[0];dcr=re.findall(r'STUDENT_GPU_DEVICE_STATUS fault=([01]) busy=([01])',text);assert dcr and all(b=='0' for fault,b in dcr);fault=any(v=='1' for v,b in dcr)
 if fault:assert a['actual_status']=='UNSUPPORTED_BUS_INJECTION';a['actual_status']='BUS_ERROR'
 e=G[i]['golden'];assert a['actual_status']==e['expected_status'] and a['actual_bits']==e['output_bits'],('numeric mismatch',i)
 if e['output_values'] and G[i]['case']['operator']=='p1':assert a['selected']==[v for ids in e['selected_token_ids'] for v in ids]
 if 'primitive_witness_result' in e:assert a['primitive']==e['primitive_witness_result']
 classes=re.findall(r'ROUTEB_PERF_CLASS_BEGIN group=(\d+)\n(.*?)ROUTEB_PERF_CLASS_END group=\1 code=0',text,re.S);assert [x[0] for x in classes]==['0','4','7'];perf=[re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',body,re.M) for group,body in classes];assert len(perf[0])==1 and all(x==perf[0] for x in perf);instructions,cycles=map(int,perf[0][0]);assert cycles>0
 dispatch=re.findall(r'ROUTEB_DISPATCH requested=combined op=(\d+) selected=(\w+) reason=operator-only-no-oracle',text);assert len(dispatch)==1;selected=dispatch[0][1];assert selected in ['baseline','rne','combined'];reads=len(re.findall(r'^DMA_REQ .*write=0 ',text,re.M));writes=len(re.findall(r'^DMA_REQ .*write=1 ',text,re.M));mem=re.findall(r'PERF: memory: reqs=(\d+) \(r=(\d+), w=(\d+)\)',text);assert len(mem)==1 and tuple(map(int,mem[0]))==(reads+writes,reads,writes)
 if selected=='baseline':assert (cycles,instructions)==(parent[i]['cycles'],parent[i]['instructions']),'same baseline path changed target counts'
 ptext=(BASE/f'{i:04d}.log').read_text();pr=len(re.findall(r'^DMA_REQ .*write=0 ',ptext,re.M));pw=len(re.findall(r'^DMA_REQ .*write=1 ',ptext,re.M));pc=parent[i]['cycles'];ratio=cycles/pc
 return {'ordinal':i,'case_id':G[i]['case']['id'],'seed':G[i]['seed'],'source':'rtlsim','selected_implementation':selected,'exact_numeric_status_selected_primitive_pass':True,'device_fault':fault,'cycles':cycles,'instructions':instructions,'parent_cycles':pc,'parent_instructions':parent[i]['instructions'],'speedup':pc/cycles,'cycle_reduction_pct':100*(1-ratio),'cycles_regress_over_5_percent':ratio>1.05,'external_read_beats':reads,'external_write_beats':writes,'parent_read_beats':pr,'parent_write_beats':pw,'external_total_beat_change_pct':100*((reads+writes)/(pr+pw)-1) if pr+pw else None,'external_read_change_pct':100*(reads/pr-1) if pr else None,'input_record_sha256':hashlib.sha256(blob[i*1936:(i+1)*1936]).hexdigest(),'measurement_boundary':'whole single-case kernel command including bootstrap and heap initialization; device MPM, excludes host JIT/dispatch','seconds':seconds,'reused_validated_candidate_log':reused,'log_sha256':sha(f)}
def run(i):
 f=O/f'{i:04d}.log';cwd=O/'isolated-work'/f'{i:04d}';cwd.mkdir(parents=True,exist_ok=True);t=time.monotonic();cmd=command.replace('@OPTS@',shlex.join([str(I/'inputs.bin'),str(i),'1']))
 with f.open('w') as log:
  p=subprocess.Popen(['bash','-c',cmd],cwd=cwd,env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='180',ROUTEB_MULTI_PERF='1'),stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=300)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('timeout '+str(i))
 assert code==0,('process failed',i,code);return validate(i,f,time.monotonic()-t,False)
try:
 for i in range(1000):
  f=O/f'{i:04d}.log'
  if i in saved:assert sha(f)==saved[i]['log_sha256'];records[i]=validate(i,f,saved[i]['seconds'],True)
  elif f.exists():h=O/'interrupted-logs';h.mkdir(exist_ok=True);f.rename(h/(f.stem+'-'+str(time.time_ns())+'.log'))
 save();print({'validated_saved':len(records)},flush=True);todo=iter(i for i in range(1000) if i not in records)
 with concurrent.futures.ThreadPoolExecutor(max_workers=2) as pool:
  pending={}
  for i in [next(todo,None),next(todo,None)]:
   if i is not None:pending[pool.submit(run,i)]=i
  while pending:
   done,_=concurrent.futures.wait(pending,return_when=concurrent.futures.FIRST_COMPLETED)
   for future in done:
    i=pending.pop(future);records[i]=future.result();save()
    if len(records)%10==0:print({'candidate_records':len(records)},flush=True)
    if not (O/'STOP_AFTER_CURRENT').exists():
     n=next(todo,None)
     if n is not None:pending[pool.submit(run,n)]=n
 assert all(sha(Path(p))==h for p,h in bindings.items());state['status']='FULL_1000_CANDIDATE_BOARD_COLLECTED_NOT_PROMOTED' if len(records)==1000 else 'CHECKPOINT_STOP_REQUESTED';state['cycle_regressions_over_5_percent']=[{'case_id':x['case_id'],'seed':x['seed']} for x in records.values() if x['cycles_regress_over_5_percent']];state['official_weighted_gain']=None;state['official_weighted_gain_reason']='Actual frozen weights not provided; no fabricated equal-weight score';save()
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}');save()
print(json.dumps({k:v for k,v in state.items() if k not in ['records','bindings','resources']},indent=2))
if state["status"]=="FAILED":raise SystemExit(1)
