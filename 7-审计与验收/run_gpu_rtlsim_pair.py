from pathlib import Path
import hashlib,json,os,re,shlex,signal,subprocess,sys,time,statistics
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import PATTERN
B=R/'8-本轮实验';O=B/'GPU-RTLSIM-TopK开发对照';O.mkdir(exist_ok=False);RT=R/'9-GPU复现/rtlsim-optimization'
assert json.loads((RT/'status.json').read_text())['status']=='BUILT','RTL simulator not built'
P=B/'全100案例双后端-20261104T134332Z/gpu-simx';C=B/'gpu-topk全100案例-20261104T140209Z/gpu-simx'
parent=json.loads((P/'status.json').read_text());candidate=json.loads((C/'status.json').read_text());works={'baseline':Path(parent['work']),'topk':Path(candidate['work'])}
line=next(x for x in (P/'execute.log').read_text().splitlines() if x.startswith('OCL_ICD_VENDORS=') and 'VORTEX_DRIVER=simx' in x)
gold=[json.loads(x) for x in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()];selected=[0,100,330,660]
inputs=next((P/'input-images').glob('*/inputs.bin'))
state={'status':'RUNNING','formal_eligible':False,'primary_operator':'p1','selected_ordinals':selected,'selection_rule':'predeclared development probe: P1 minimum and random-maximum, P2/P3 minimum controls; seed 1 each','measurement_boundary':'whole one-case process command including bootstrap and heap initialization; final per-device RTL MPM report; not frozen weighted performance board','variants':{},'records':[]}
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save(): (O/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
bindings={str(p):sha(p) for p in [inputs,RT/'librtlsim.so',RT/'libvortex-rtlsim.so',*[w/'student_mini' for w in works.values()],*[w/'student_mini.cu' for w in works.values()]]};(O/'bindings.json').write_text(json.dumps(bindings,indent=2));save()
try:
 for ordinal in selected:
  g=gold[ordinal]
  for variant,work in works.items():
   parts=shlex.split(line.replace(str(works['baseline']),str(work)));env=dict(os.environ)
   for token in parts:
    if '=' not in token or token.startswith('./'):break
    k,v=token.split('=',1);env[k]=v
   env.update(VORTEX_DRIVER='rtlsim',VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='120');env['LD_LIBRARY_PATH']=str(RT)+':'+env['LD_LIBRARY_PATH']
   logfile=O/f'{variant}-{ordinal:04d}.log';start=time.monotonic()
   with logfile.open('w') as f:
    f.write('VORTEX_DRIVER=rtlsim; VORTEX_PROFILING=0; one actual device case\n');f.flush()
    p=subprocess.Popen([str(work/'student_mini'),str(inputs),str(ordinal),'1'],cwd=work,env=env,stdout=f,stderr=subprocess.STDOUT,start_new_session=True)
    try:code=p.wait(timeout=300)
    except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('case timeout '+logfile.name)
   assert code==0,'exit '+str(code)+' '+logfile.name
   text=logfile.read_text(errors='replace');actual=[PATTERN.fullmatch(x) for x in text.splitlines() if x.startswith('STUDENT_GPU ')];assert len(actual)==1 and actual[0]
   n,status,primitive,bits,ids=actual[0].groups();assert int(n)==ordinal and int(status)==0 and f'STUDENT_GPU_COMPLETE start={ordinal} count=1' in text
   actualbits=[int(x,16) for x in bits.split(',') if x];actualids=[int(x) for x in ids.split(',') if x];assert actualbits==g['golden']['output_bits']
   if g['case']['operator']=='p1':assert actualids==[x for row in g['golden']['selected_token_ids'] for x in row]
   perf=re.findall(r'^PERF: instrs=(\d+), cycles=(\d+), IPC=',text,re.M);assert len(perf)==1 and int(perf[0][1])>0,'missing RTL counters'
   row={'variant':variant,'ordinal':ordinal,'case_id':g['case']['id'],'seed':g['seed'],'instructions':int(perf[0][0]),'cycles':int(perf[0][1]),'golden_match':True,'log':logfile.name,'log_sha256':sha(logfile),'wall_seconds_diagnostic_only':time.monotonic()-start};state['records'].append(row);save();print(json.dumps(row),flush=True)
 assert all(sha(Path(p))==d for p,d in bindings.items()),'target artifact changed'
 pairs=[]
 for ordinal in selected:
  a,b=[next(x for x in state['records'] if x['variant']==v and x['ordinal']==ordinal) for v in ['baseline','topk']];pairs.append({'case_id':a['case_id'],'seed':a['seed'],'baseline_cycles':a['cycles'],'topk_cycles':b['cycles'],'speedup':a['cycles']/b['cycles'],'cycle_reduction_pct':100*(1-b['cycles']/a['cycles']),'baseline_instructions':a['instructions'],'topk_instructions':b['instructions']})
 state.update(status='COMPLETE',comparison=pairs,promotion='HOLD: diagnostic subset, version/physical/protocol/weights gates pending')
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps(state,ensure_ascii=False,indent=2))
