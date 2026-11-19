"""New FF identity mapping, native ASCII workspace; never mutates the production RTL."""
from pathlib import Path
import json, hashlib, subprocess, time, os, signal, shutil, re
from qualification_resource_guard import prepare, join, snapshot
prepare(); join()
R=Path(__file__).resolve().parents[1]
S=R/'8-本轮实验/GPU新身份物理输入准备-20261110'
O=R/'8-本轮实验/GPU新FF标准单元映射-20261110-v2'
O.mkdir(exist_ok=False)
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
lib=R/'8-本轮实验/GPU物理依赖公开来源核对-20261109/sky130_fd_sc_hd__tt_025C_1v80.lib'
assert sha(lib)=='ec0e1067a35c8bf20b11e58d1e8ac53326067e4dac84a125cc1b917a3518d0d9'
pre=R/'8-本轮实验/GPU新物理入口实测-20261110-v2/status.json'
assert json.loads(pre.read_text())['status']=='FF_FOUR_STATE_4_SHAPES_AND_STRUCTURAL_PREFLIGHT_PASS'
W=Path('/root/.cache/routeb-new-ff-mapping-20261110-v2');W.mkdir(exist_ok=False)
for name in ['snapshot','rtl']: shutil.copytree(S/name,W/name)
shutil.copy2(lib,W/'sky130.lib')
source={p.relative_to(S).as_posix():sha(p) for n in ['snapshot','rtl'] for p in (S/n).rglob('*') if p.is_file()}
source['sky130.lib']=sha(lib)
tcl='''yosys read_verilog -sv snapshot/project-physical.v snapshot/gpu_fault_physical_top.sv snapshot/gpu_status_command_adapter.sv snapshot/gpu_fault_memory_adapter.sv snapshot/vortex_banked_large_sram_wrappers.sv rtl/ff_memories.v
yosys hierarchy -check -top vortex_physical_top
yosys synth -top vortex_physical_top
yosys write_rtlil generic-checkpoint.il
yosys read_liberty -lib sky130.lib
yosys dfflibmap -liberty sky130.lib
yosys abc -liberty sky130.lib
yosys clean
yosys hierarchy -check -top vortex_physical_top
yosys check -assert
yosys tee -o stat.json stat -json -liberty sky130.lib
yosys write_verilog -noattr ff-mapped.v
'''
(W/'synthesis.tcl').write_text(tcl)
(O/'synthesis.tcl').write_text(tcl)
(O/'input-sha256.json').write_text(json.dumps(source,indent=2))
state={'status':'RUNNING','scope':'new FF-backed GPU standard-cell synthesis; no original physical identity or routed PPA','formal_promotion':'HOLD','physical_signoff':False,'native_workspace':str(W),'preflight_status_sha256':sha(pre),'constraints':'shared2vCPU/8GiB; stop at6GiB group use or30min wall','stage':'generic synthesis'}
start=time.monotonic()
def save():
 state['seconds']=time.monotonic()-start;state['resources']=snapshot()
 tmp=O/'status.tmp';tmp.write_text(json.dumps(state,ensure_ascii=False,indent=2));tmp.replace(O/'status.json')
save()
try:
 with (W/'synthesis.log').open('w') as log:
  p=subprocess.Popen(['yosys','-c','synthesis.tcl'],cwd=W,env=dict(os.environ,OMP_NUM_THREADS='2'),stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  reason=None;tick=0
  while p.poll() is None:
   mem=int(Path('/sys/fs/cgroup/routeb-course-qualification/memory.current').read_text())
   if mem>6*1024**3:reason='6GiB conservative group-use guard';break
   if time.monotonic()-start>1800:reason='30min bounded synthesis timeout';break
   if tick%5==0:
    shutil.copy2(W/'synthesis.log',O/'synthesis.log')
    state['stage']='technology mapping' if (W/'generic-checkpoint.il').exists() else 'generic synthesis';save()
   tick+=1;time.sleep(2)
  if reason:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError(reason)
 assert p.returncode==0,('yosys exit',p.returncode)
 stats=json.loads((W/'stat.json').read_text());modules=stats['modules'];bad=[]
 for name,m in modules.items():
  for cell in m.get('num_cells_by_type',{}):
   if cell not in modules and '\\'+cell not in modules and not cell.startswith('sky130_fd_sc_hd__'):bad.append((name,cell))
 assert not bad,('unresolved/internal cell types',bad[:10])
 assert all(sha(W/n)==h for n,h in source.items())
 for n in ['ff-mapped.v','stat.json','generic-checkpoint.il']:shutil.copy2(W/n,O/n)
 state.update(status='FF_GPU_STANDARD_CELL_MAPPING_PASS_NOT_PHYSICAL_SIGNOFF',stage='complete',mapped_netlist_sha256=sha(O/'ff-mapped.v'),mapped_netlist_bytes=(O/'ff-mapped.v').stat().st_size,statistics=stats,STA_executed=False,place_route_executed=False,power_energy_measured=False)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
finally:
 if (W/'synthesis.log').exists():shutil.copy2(W/'synthesis.log',O/'synthesis.log')
 if (W/'generic-checkpoint.il').exists() and not (O/'generic-checkpoint.il').exists():shutil.copy2(W/'generic-checkpoint.il',O/'generic-checkpoint.il')
save();print(json.dumps({k:v for k,v in state.items() if k not in ['statistics','resources']},ensure_ascii=False,indent=2))
raise SystemExit(0 if state['status']=='FF_GPU_STANDARD_CELL_MAPPING_PASS_NOT_PHYSICAL_SIGNOFF' else 1)