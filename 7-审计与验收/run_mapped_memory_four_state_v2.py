"""Four-state replay of the actual technology-mapped memory shapes, not whole-GPU equivalence."""
from pathlib import Path
import subprocess,time,json,hashlib,os,signal,shutil,re
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'8-本轮实验/GPU新身份物理输入准备-20261110';M=R/'8-本轮实验/GPU新FF标准单元映射-20261110-v2';O=R/'8-本轮实验/GPU映射存储四态复验-20261110-v2';O.mkdir(exist_ok=False)
W=Path('/root/.cache/routeb-mapped-memory-check-20261110-v2');W.mkdir(exist_ok=False)
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();receipt=json.loads((M/'验收结论.json').read_text());assert sha(M/'ff-mapped.v')==receipt['mapped_netlist_sha256']
shutil.copy2(M/'ff-mapped.v',W/'mapped.v');lib=R/'8-本轮实验/GPU物理依赖公开来源核对-20261109/sky130_fd_sc_hd__tt_025C_1v80.lib';shutil.copy2(lib,W/'sky130.lib');shutil.copytree(S/'verification',W/'verification')
state=dict(status='RUNNING',scope='4 mapped memory shapes; zero-delay behavioral models derived from the bound Liberty, not transistor signoff or whole-GPU mapped equivalence',physical_signoff=False,formal_promotion='HOLD',records=[]);start=time.monotonic()
bindings={p.relative_to(R).as_posix():sha(p) for p in [M/'ff-mapped.v',M/'验收结论.json',lib,Path(__file__).resolve(),*list((S/'verification').glob('*.vectors')),*list((S/'verification').glob('tb_*_ff.sv'))]}
def save():
 state['seconds']=time.monotonic()-start;state['resources']=snapshot();(O/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
def run(cmd,name,timeout):
 t=time.monotonic();state['stage']=name;save()
 with (O/(name+'.log')).open('w') as f:
  p=subprocess.Popen([str(x) for x in cmd],cwd=W,stdout=f,stderr=subprocess.STDOUT,start_new_session=True)
  reason=None
  while p.poll() is None:
   if time.monotonic()-t>timeout:reason='bounded operation timeout';break
   if int(Path('/sys/fs/cgroup/routeb-course-qualification/memory.current').read_text())>6*1024**3:reason='shared6GiB conservative resource stop';break
   time.sleep(1)
  if reason:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError(name+': '+reason)
 assert p.returncode==0,(name,p.returncode)
 return dict(log=name+'.log',log_sha256=sha(O/(name+'.log')),seconds=time.monotonic()-t)
try:
 ys='read_liberty -ignore_miss_func sky130.lib\nwrite_verilog -noattr cell-functional.v\n';(W/'lib-model.ys').write_text(ys);(O/'lib-model.ys').write_text(ys)
 state['library_model_generation']=run(['yosys','-s','lib-model.ys'],'library-model',60);shutil.copy2(W/'cell-functional.v',O/'cell-functional.v')
 for tb in sorted((W/'verification').glob('tb_*_ff.sv')):
  shape=tb.stem.removeprefix('tb_').removesuffix('_ff');exe=W/(shape+'.vvp');compile=run(['iverilog','-g2012','-s','tb','-o',exe,W/'cell-functional.v',W/'mapped.v',tb],shape+'-compile',180);execute=run(['vvp',exe],shape+'-run',180)
  raw=(O/execute['log']).read_text();count=len((W/'verification'/(shape+'.vectors')).read_text().splitlines());assert re.search(r'^PASS ff '+re.escape(shape)+': '+str(count)+r' records$',raw,re.M) and 'FATAL' not in raw
  state['records'].append(dict(shape=shape,records=count,compile=compile,run=execute,compiled_simulation_sha256=sha(exe)));save()
 assert len(state['records'])==4 and sum(x['records'] for x in state['records'])==5326
 assert all(sha(R/p)==h for p,h in bindings.items());state.update(status='FOUR_MAPPED_MEMORY_SHAPES_5326_FOUR_STATE_PASS',whole_gpu_mapped_equivalence=False,timing_qualified=False)
except Exception as e:state.update(status='FAILED_NOT_QUALIFIED',error=f'{type(e).__name__}: {e}')
save();(O/'evidence-sha256.json').write_text(json.dumps({**bindings,**{p.relative_to(R).as_posix():sha(p) for p in O.iterdir() if p.is_file() and p.name!='evidence-sha256.json'}},ensure_ascii=False,indent=2));print(json.dumps({k:v for k,v in state.items() if k not in ['records','resources']},ensure_ascii=False,indent=2));raise SystemExit(0 if state['status']=='FOUR_MAPPED_MEMORY_SHAPES_5326_FOUR_STATE_PASS' else 1)