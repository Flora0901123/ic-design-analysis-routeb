from pathlib import Path
import sys,json,os,subprocess,time,re,hashlib,signal
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
from scripts.student_mini import compare_outputs
O=R/'8-本轮实验/GPU单轮多类计数观察-20261108';trace=json.loads((R/'9-GPU复现/整机DMA重建/trace-build/completion.json').read_text());W=Path(trace['work']);b=json.loads((W/'build.json').read_text());command=(W/'run-command.sh').read_text().replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R));inputs=b['input_directory'].replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R));state={'status':'RUNNING','scope':'host-only post-completion MPM observation; target RTL and kernel unchanged'};f=O/'probe-0000.log';assert not f.exists()
try:
 old=(R/'8-本轮实验/GPU同硬件全1000-20261108/0000.log').read_text();expected=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',old,re.M);assert len(expected)==1
 cmd=command.replace('@OPTS@',f'{inputs}/inputs.bin 0 1').replace('./student_mini',str(W/'student_mini'));t=time.monotonic()
 env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='180',LD_PRELOAD=str(O/'counter-observer.so'),ROUTEB_VX_RUNTIME_LIB=str(W/'vortex-build/sw/runtime/libvortex.so'))
 with f.open('w') as log:
  child=subprocess.Popen(['bash','-c',cmd],cwd=W,env=env,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=child.wait(timeout=240)
  except subprocess.TimeoutExpired:os.killpg(child.pid,signal.SIGTERM);child.wait();code='TIMEOUT'
 text=f.read_text(errors='replace');assert code==0,('process failed',code);assert text.count('ROUTEB_MPM_BEGIN')==text.count('ROUTEB_MPM_END')==1,'observer was not called exactly once'
 values=re.findall(r'^ROUTEB_MPM group=(\d+) csr=(\d+) name=(\w+) value=(\d+) code=(-?\d+)$',text,re.M);assert len(values)==8 and all(x[4]=='0' for x in values),'counter query failed';c={x[2]:int(x[3]) for x in values}
 assert c['memory_reads']>0 and c['memory_writes']>0 and c['dcache_reads']>0 and c['dcache_writes']>0,'vacuous counters'
 actual=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',text,re.M);assert actual==expected and c['instructions']==int(expected[0][0]) and c['cycles']==int(expected[0][1]),'observer perturbed measurement boundary'
 a=parse('\n'.join(x for x in text.splitlines() if x.startswith('STUDENT_GPU '))+'\nSTUDENT_GPU_COMPLETE start=0 count=1\n',1)[0];g=json.loads((S.parent/'data/golden/vectors.jsonl').read_text().splitlines()[0])['golden'];assert a['actual_status']==g['expected_status'] and compare_outputs(g['output_values'],a['actual'],g['output_bits'],a['actual_bits'])['status']=='PASS'
 state.update(status='POST_KERNEL_MULTICLASS_COUNTER_PROBE_PASS',seconds=time.monotonic()-t,counters=c,target_counts_identical=True,one_kernel_launch=True,source_sha256=hashlib.sha256((R/'7-审计与验收/gpu_counter_observer.cpp').read_bytes()).hexdigest(),observer_sha256=hashlib.sha256((O/'counter-observer.so').read_bytes()).hexdigest(),log_sha256=hashlib.sha256(f.read_bytes()).hexdigest(),additional_case_qualification_required=True)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
state['resources']=snapshot();(O/'completion.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
