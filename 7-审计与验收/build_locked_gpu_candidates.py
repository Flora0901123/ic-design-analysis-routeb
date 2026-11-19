from pathlib import Path
import json,hashlib,ast,shutil,subprocess,time,os,difflib
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU锁定硬件四组候选-20261109';O.mkdir(exist_ok=True);trace=json.loads((R/'9-GPU复现/整机DMA重建/trace-build/completion.json').read_text());W=Path(trace['work']);sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();assert all(sha(Path(p))==h for p,h in trace['new_bindings'].items());base=(W/'student_mini.cu').read_text();sorts={}
for n in ast.parse((R/'3-优化链-P1/optimize_p1.py').read_text()).body:
 if isinstance(n,ast.Assign) and isinstance(n.targets[0],ast.Name) and n.targets[0].id in ['OLD_SORT','NEW_SORT']:sorts[n.targets[0].id]=ast.literal_eval(n.value)
assert base.count(sorts['OLD_SORT'])==1
helper='''__device__ static int64_t rne15(int64_t n) {
    uint64_t m=gpu_signed_magnitude_i64(n);
    uint64_t q=m>>15,r=m&0x7fffu;
    if(r>0x4000u || (r==0x4000u && (q&1u))) ++q;
    return n<0 ? -(int64_t)q : (int64_t)q;
}
''';exprs=['(int64_t)s->sum*a','s->value[j]*a','(int64_t)a->sum*x','(int64_t)b->sum*y','a->value[j]*x','b->value[j]*y'];state={'status':'BUILDING','hardware_scope':'same macro-bound functional RTL and same production librtlsim.so','hardware_changed':False,'teacher_physical_identity':False,'formal_performance_board':False,'formal_promotion':'HOLD','probe_ordinals_registered_before_this_build':[0,100,330,660],'full_board_scope_proposed':'all 100 original cases x seeds1-10; no cases dropped','official_frozen_weights':'not supplied; no official weighted score claimed','records':[]};start=time.monotonic()
def save():state['elapsed_seconds']=time.monotonic()-start;state['resources']=snapshot();(O/'build.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
try:
 for variant in ['baseline','topk','rne','combined']:
  d=O/variant;d.mkdir(exist_ok=True);text=base
  if variant in ['topk','combined']:text=text.replace(sorts['OLD_SORT'],sorts['NEW_SORT'])
  if variant in ['rne','combined']:
   anchor='typedef struct {int32_t max,sum;';assert text.count(anchor)==1;text=text.replace(anchor,helper+'\n'+anchor)
   for expr in exprs:
    old='rne('+expr+',32768)';assert text.count(old)==1;text=text.replace(old,'rne15('+expr+')')
  (d/'student_mini.cu').write_text(text);(d/'source.diff').write_text(''.join(difflib.unified_diff(base.splitlines(True),text.splitlines(True),fromfile='baseline',tofile=variant)))
  for name in ['Makefile','common.h','device_compat.o','device_compat.cc']:shutil.copy2(W/name,d/name)
  shutil.copytree(W/'kernel_compat',d/'kernel_compat',dirs_exist_ok=True)
  env=dict(os.environ,MAKEFLAGS='-j2',THREADS='2',LD_LIBRARY_PATH='/dev/shm/routeb-llvm-libs-20261108:'+os.environ.get('LD_LIBRARY_PATH',''))
  if (d/'build.log').exists():shutil.copy2(d/'build.log',d/('build-attempt-'+str(time.time_ns())+'.log'))
  with (d/'build.log').open('w') as log:p=subprocess.run(['make','-j2','all'],cwd=d,env=env,stdout=log,stderr=subprocess.STDOUT,timeout=600)
  assert p.returncode==0,('candidate build failed',variant)
  state['records'].append({'variant':variant,'source_sha256':sha(d/'student_mini.cu'),'executable_sha256':sha(d/'student_mini'),'parent_baseline_sha256':sha(W/'student_mini.cu'),'direct_parent': 'topk' if variant=='combined' else 'baseline','build_exit_code':0,'work':str(d)});save();print({'candidate_built':variant},flush=True)
 assert all(sha(Path(p))==h for p,h in trace['new_bindings'].items());state.update(status='FOUR_LOCKED_HARDWARE_APPS_BUILT_NOT_QUALIFIED',target_bindings=trace['new_bindings'])
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k not in ['records','resources','target_bindings']},ensure_ascii=False,indent=2))