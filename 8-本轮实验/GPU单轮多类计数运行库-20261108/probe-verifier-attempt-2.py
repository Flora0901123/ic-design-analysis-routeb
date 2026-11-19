from pathlib import Path
import json,sys,os,subprocess,re,time,signal,hashlib
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
from scripts.student_mini import compare_outputs
O=R/'8-本轮实验/GPU单轮多类计数运行库-20261108';b=json.loads((O/'build.json').read_text());assert b['status']=='MULTICLASS_RUNTIME_BUILT_NOT_QUALIFIED';L=Path(b['runtime_directory']);trace=json.loads((R/'9-GPU复现/整机DMA重建/trace-build/completion.json').read_text());W=Path(trace['work']);meta=json.loads((W/'build.json').read_text());cmd0=(W/'run-command.sh').read_text().replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R));inputs=meta['input_directory'].replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R));gold=[json.loads(s) for s in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()];state={'status':'RUNNING','scope':'post-kernel report-only multi-class observation; target RTL/kernel unchanged','records':[]}
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save():state['resources']=snapshot();(O/'validation-v2.json').write_text(json.dumps(state,indent=2))
try:
 for i in [0,100,330,660]:
  parent=R/'8-本轮实验/GPU同硬件全1000-20261108'/f'{i:04d}.log'
  if not parent.exists():parent=R/'9-GPU复现/整机DMA重建/whole-gpu-runs'/f'{i:04d}.log'
  expected=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',parent.read_text(),re.M);assert len(expected)==1
  f=O/f'probe-v2-{i:04d}.log';assert not f.exists();cmd=cmd0.replace('LD_LIBRARY_PATH=','LD_LIBRARY_PATH='+str(L)+':',1).replace('@OPTS@',f'{inputs}/inputs.bin {i} 1').replace('./student_mini',str(W/'student_mini'));t=time.monotonic()
  with f.open('w') as log:
   child=subprocess.Popen(['bash','-c',cmd],cwd=W,env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='180',ROUTEB_MULTI_PERF='1'),stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
   try:code=child.wait(timeout=240)
   except subprocess.TimeoutExpired:os.killpg(child.pid,signal.SIGTERM);child.wait();code='TIMEOUT'
  text=f.read_text(errors='replace');assert code==0,('process failed',i,code)
  blocks=re.findall(r'ROUTEB_PERF_CLASS_BEGIN group=(\d+)\n(.*?)ROUTEB_PERF_CLASS_END group=\1 code=(-?\d+)',text,re.S);assert len(blocks)==3 and [x[0] for x in blocks]==['0','4','7'] and all(x[2]=='0' for x in blocks),'three real classes not captured'
  reports={x[0]:x[1] for x in blocks}
  for group,body in reports.items():assert re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',body,re.M)==expected,('measurement changed',group)
  assert 'dcache:' in reports['4'] and re.search(r'\breqs=[1-9]\d*',reports['4']),'vacuous dcache counters'
  assert any('mem' in line.lower() and re.search(r'\b(?:reads|reqs)=[1-9]\d*',line) for line in reports['7'].splitlines()),'vacuous memory counters'
  lines=[x for x in text.splitlines() if x.startswith('STUDENT_GPU ')];assert len(lines)==1 and f'STUDENT_GPU_COMPLETE start={i} count=1' in text;a=parse(lines[0].replace(f'ordinal={i} ','ordinal=0 ',1)+'\nSTUDENT_GPU_COMPLETE start=0 count=1\n',1)[0];e=gold[i]['golden'];assert a['selected']==e['selected_tokens'];assert a['actual_status']==e['expected_status'] and compare_outputs(e['output_values'],a['actual'],e['output_bits'],a['actual_bits'])['status']=='PASS'
  memory=re.findall(r'PERF: memory: reqs=(\d+) \(r=(\d+), w=(\d+)\)',reports['7']);assert len(memory)==1
  reqs,reads,writes=map(int,memory[0]);trace_reads=len(re.findall(r'^DMA_REQ .*write=0 ',text,re.M));trace_writes=len(re.findall(r'^DMA_REQ .*write=1 ',text,re.M));assert (reads,writes,reqs)==(trace_reads,trace_writes,trace_reads+trace_writes),'hardware counters differ from actual DMA handshakes'
  state['records'].append({'ordinal':i,'one_kernel_launch':True,'memory_requests':reqs,'memory_reads':reads,'memory_writes':writes,'dma_handshake_counts_match':True,'target_counts_identical':True,'raw_class_reports':reports,'seconds':time.monotonic()-t,'log_sha256':sha(f)});save();print({'ordinal':i,'three_classes_captured':True,'target_counts_identical':True},flush=True)
 assert sha(L/'libvortex.so')==b['library_sha256'];assert all(sha(Path(p))==h for p,h in trace['new_bindings'].items());state['status']='POST_KERNEL_MULTICLASS_4_CONTROL_PASS'
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k not in ['records','resources']},indent=2))
