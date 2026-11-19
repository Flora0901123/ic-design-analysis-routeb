from pathlib import Path
import json,subprocess,time,hashlib,os,signal,sys
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'8-本轮实验/GPU新身份物理输入准备-20261110';O=R/'8-本轮实验/GPU新物理入口实测-20261110-v2';O.mkdir(exist_ok=True);state={'status':'RUNNING','scope':'new FF semantic and hierarchy/process preflight only; no physical mapping or PPA signoff','formal_promotion':'HOLD','records':[]};sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();bindings={p.relative_to(R).as_posix():sha(p) for folder in ['rtl','snapshot','verification'] for p in (S/folder).rglob('*') if p.is_file()};bindings[(S/'ff-preflight.ys').relative_to(R).as_posix()]=sha(S/'ff-preflight.ys')
def save():state['resources']=snapshot();(O/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
def run(cmd,name,timeout):
 f=O/name;assert not f.exists();t=time.monotonic()
 with f.open('w') as log:
  p=subprocess.Popen(list(map(str,cmd)),cwd=S,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=p.wait(timeout=timeout)
  except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('timeout '+name)
 assert code==0,('command failed',name,code);return {'log':f.name,'seconds':time.monotonic()-t,'log_sha256':sha(f)}
try:
 for tb in sorted((S/'verification').glob('tb_*_ff.sv')):
  name=tb.stem.removeprefix('tb_').removesuffix('_ff');exe=O/(name+'.vvp');compile_info=run(['iverilog','-g2012','-s','tb','-o',exe,S/'rtl/ff_memories.v',tb],name+'-compile.log',90);result=run(['vvp',exe],name+'-run.log',90);text=(O/result['log']).read_text();assert 'PASS' in text and 'FATAL' not in text;state['records'].append({'shape':name,'four_state_memory_semantics':'PASS','compile':compile_info,'run':result});save()
 state['structural_preflight']=run(['yosys','-s','ff-preflight.ys'],'yosys-hierarchy-proc-check.log',240);assert all(sha(R/p)==h for p,h in bindings.items());state.update(status='FF_FOUR_STATE_4_SHAPES_AND_STRUCTURAL_PREFLIGHT_PASS',physical_mapping_executed=False,STA_executed=False,PPA_signoff=False,teacher_physical_identity=False)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(O/'input-sha256.json').write_text(json.dumps(bindings,ensure_ascii=False,indent=2));save();print(json.dumps({k:v for k,v in state.items() if k not in ['records','resources']},ensure_ascii=False,indent=2));raise SystemExit(0 if state['status']=='FF_FOUR_STATE_4_SHAPES_AND_STRUCTURAL_PREFLIGHT_PASS' else 1)