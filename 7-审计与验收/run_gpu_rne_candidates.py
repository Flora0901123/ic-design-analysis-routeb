from pathlib import Path
import json,hashlib,shlex,subprocess,sys,os,time,difflib,importlib.util,signal
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S))
from scripts.export_student_mini_input import build as export
from scripts.prepare_student_mini_gpu import prepare
from scripts.assemble_student_mini_gpu_results import parse,join
OUT=R/'8-本轮实验/GPU-RNE与组合候选';OUT.mkdir(exist_ok=False)
BASE=R/'8-本轮实验/全100案例双后端-20261104T134332Z/gpu-simx';base_state=json.loads((BASE/'status.json').read_text());old_work=base_state['work'];gold=[json.loads(x) for x in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()]
line=next(x for x in (BASE/'execute.log').read_text().splitlines() if x.startswith('OCL_ICD_VENDORS=') and 'VORTEX_DRIVER=simx' in x)
original=(S/'software/student_mini_scalar.c').read_bytes();baseline=original.decode();spec=importlib.util.spec_from_file_location('topk',R/'3-优化链-P1/optimize_p1.py');m=importlib.util.module_from_spec(spec);spec.loader.exec_module(m)
helper='''static int64_t rne15(int64_t n) {
    uint64_t m=n<0 ? (uint64_t)(-(n+1))+1u : (uint64_t)n;
    uint64_t q=m>>15,r=m&0x7fffu;
    if(r>0x4000u || (r==0x4000u && (q&1u))) ++q;
    return n<0 ? -(int64_t)q : (int64_t)q;
}
'''
exprs=['(int64_t)s->sum*a','s->value[j]*a','(int64_t)a->sum*x','(int64_t)b->sum*y','a->value[j]*x','b->value[j]*y']
def save(p,d):p.write_text(json.dumps(d,ensure_ascii=False,indent=2)+'\n')
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def run(cmd,cwd,env,log):
 with log.open('w') as f:
  p=subprocess.Popen([str(x) for x in cmd],cwd=cwd,env=env,stdout=f,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=900)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('timeout '+str(log))
 assert code==0,'exit '+str(code)+' '+str(log)
results={}
for variant in ['rne','combined']:
 out=OUT/variant;out.mkdir();state={'status':'PREPARING','variant':variant,'backend':'vortex-simx','formal_eligible':False,'records_expected':1000};save(out/'status.json',state)
 try:
  parent=baseline if variant=='rne' else baseline.replace(m.OLD_SORT,m.NEW_SORT)
  assert parent.count('typedef struct {int32_t max,sum;')==1
  candidate=parent.replace('typedef struct {int32_t max,sum;',helper+'\ntypedef struct {int32_t max,sum;')
  for expr in exprs:
   old='rne('+expr+',32768)';assert candidate.count(old)==1,old;candidate=candidate.replace(old,'rne15('+expr+')')
  snapshot=out/'student_mini_scalar.c';snapshot.write_text(candidate);(out/'source.diff').write_text(''.join(difflib.unified_diff(parent.splitlines(True),candidate.splitlines(True),fromfile='baseline' if variant=='rne' else 'topk',tofile=variant)))
  save(out/'experiment.json',{'parent_source_sha256':hashlib.sha256(parent.encode()).hexdigest(),'candidate_sha256':sha(snapshot),'change':'six fixed-32768 RNE calls replaced; final dynamic denominator and primitive witness unchanged','primary_operator':'p1','rtlsim_probe_ordinals':[0,100,330,660],'formal_eligible':False})
  try:
   (S/'software/student_mini_scalar.c').write_text(candidate)
   inputs=export(S/'vectors.jsonl',out/'input-images');work=prepare(inputs)
  finally:(S/'software/student_mini_scalar.c').write_bytes(original)
  cached=Path(old_work)/'vortex-build';(work/'vortex-build').symlink_to(cached,target_is_directory=True)
  make=work/'Makefile';make.write_text(make.read_text().replace('-DVX_CFG_NUM_THREADS=4\n','-DVX_CFG_NUM_THREADS=4 -DVX_CFG_FPU_TYPE=STD\n'))
  env=dict(os.environ,PATH=str(R/'9-GPU复现/tools/llvm-vortex/bin')+':'+os.environ.get('PATH',''),HIP_CLANG_PATH=str(R/'9-GPU复现/tools/llvm-vortex/bin'),MAKEFLAGS='-j2',THREADS='2')
  state.update(status='COMPILING',work=str(work));save(out/'status.json',state);run(['make','-j2','-C',work,'all','THREADS=2'],work,env,out/'compile.log')
  for token in shlex.split(line.replace(old_work,str(work))):
   if '=' not in token or token.startswith('./'):break
   k,v=token.split('=',1);env[k]=v
  bound=[snapshot,work/'student_mini',work/'student_mini.cu',inputs/'inputs.bin',*[cached/'sw/runtime'/n for n in ['libsimx.so','libvortex-simx.so','libvortex.so']]];bindings={str(p):sha(p) for p in bound};save(out/'bindings.json',bindings)
  state.update(status='RUNNING');save(out/'status.json',state);run([work/'student_mini',inputs/'inputs.bin','0','1000'],work,env,out/'execute.log')
  rows=parse((out/'execute.log').read_text(errors='replace'),1000);report=join(gold,rows);save(out/'official-results.json',report)
  assert all(sha(Path(p))==d for p,d in bindings.items())
  state.update(status='TARGET_EXECUTED',records_observed=1000,numeric_matches=report['numeric_matches'],numeric_failures=sum(x['observation']['numeric_match'] is False for x in report['records']),unsupported=sum(x['observation']['numeric_match'] is None for x in report['records']))
 except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
 save(out/'status.json',state);results[variant]=state;save(OUT/'summary.json',results);print(json.dumps(state,ensure_ascii=False),flush=True)
assert (S/'software/student_mini_scalar.c').read_bytes()==original
