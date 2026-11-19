from pathlib import Path
import json,hashlib,subprocess,time,signal,os,shutil,re
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'8-本轮实验/GPU新身份物理输入准备-20261110';O=R/'8-本轮实验/GPU新FF标准单元映射-20261110';O.mkdir(exist_ok=False);W=O/'work';W.mkdir();sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();lib=R/'8-本轮实验/GPU物理依赖公开来源核对-20261109/sky130_fd_sc_hd__tt_025C_1v80.lib';assert sha(lib)=='ec0e1067a35c8bf20b11e58d1e8ac53326067e4dac84a125cc1b917a3518d0d9';pre=json.loads((R/'8-本轮实验/GPU新物理入口实测-20261110-v2/status.json').read_text());assert pre['status']=='FF_FOUR_STATE_4_SHAPES_AND_STRUCTURAL_PREFLIGHT_PASS'
for name in ['snapshot','rtl']:shutil.copytree(S/name,W/name)
tcl=(S/'ff-synthesis.tcl').read_text();tcl+='\nyosys tee -o synth-output/stat.json stat -json -liberty $::env(SKY130_LIB)\n';(W/'ff-synthesis.tcl').write_text(tcl);inputs={p.relative_to(R).as_posix():sha(p) for p in W.rglob('*') if p.is_file()};inputs[lib.relative_to(R).as_posix()]=sha(lib);state={'status':'RUNNING','scope':'new FF-backed GPU standard-cell synthesis only; not original physical identity or routed PPA','constraints':'shared2vCPU/8GiB; stop at6GiB group use or15min wall','formal_promotion':'HOLD','physical_signoff':False,'source_bindings':inputs};start=time.monotonic()
def save():state['seconds']=time.monotonic()-start;state['resources']=snapshot();(O/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
save()
try:
 with (O/'synthesis.log').open('w') as log:
  p=subprocess.Popen(['yosys','-c','ff-synthesis.tcl'],cwd=W,env=dict(os.environ,SKY130_LIB=str(lib),OMP_NUM_THREADS='2'),stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  reason=None
  while p.poll() is None:
   mem=int((Path('/sys/fs/cgroup/routeb-course-qualification')/'memory.current').read_text())
   if mem>6*1024**3:reason='conservative 6GiB group-use threshold reached';break
   if time.monotonic()-start>900:reason='15min bounded synthesis timeout';break
   time.sleep(2)
  if reason:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError(reason)
 assert p.returncode==0,('yosys exit',p.returncode);f=W/'synth-output/ff-mapped.v';assert f.is_file() and f.stat().st_size>0;stats=json.loads((W/'synth-output/stat.json').read_text());modules=stats['modules'];bad=[]
 for name,m in modules.items():
  for cell in m.get('num_cells_by_type',{}):
   if cell not in modules and '\\'+cell not in modules and not cell.startswith('sky130_fd_sc_hd__'):bad.append((name,cell))
 assert not bad,('unmapped/unresolved cell types',bad[:10]);assert all(sha(R/p)==h for p,h in inputs.items());state.update(status='FF_GPU_STANDARD_CELL_MAPPING_PASS_NOT_PHYSICAL_SIGNOFF',mapped_netlist_sha256=sha(f),mapped_netlist_bytes=f.stat().st_size,statistics=stats,STA_executed=False,place_route_executed=False,power_energy_measured=False)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k not in ['statistics','resources','source_bindings']},ensure_ascii=False,indent=2));raise SystemExit(0 if state['status']=='FF_GPU_STANDARD_CELL_MAPPING_PASS_NOT_PHYSICAL_SIGNOFF' else 1)