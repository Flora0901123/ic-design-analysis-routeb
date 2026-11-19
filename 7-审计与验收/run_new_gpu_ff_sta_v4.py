"""Bounded whole-new-FF GPU STA exploration: real cell delays, zero routed parasitics."""
from pathlib import Path
import json,subprocess,hashlib,time,os,signal,shutil,re,datetime
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];M=R/'8-本轮实验/GPU新FF标准单元映射-20261110-v2'
T=R/'8-本轮实验/OpenSTA工具搭建-20261110-v4';O=R/'8-本轮实验/GPU新FF综合后STA-20261110-v4'
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
def read(p):return json.loads(p.read_text(encoding='utf-8-sig'))
assert read(M/'验收结论.json')['status']=='NEW_FF_GPU_STANDARD_CELL_MAPPING_INDEPENDENTLY_SEALED_NOT_PPA'
tool=read(T/'status.json');assert tool['status']=='PINNED_OPENSTA_BUILD_PASS_NOT_GPU_STA'
binary=R/tool['binary_relative'];assert sha(binary)==tool['binary_sha256']
assert sha(M/'ff-mapped.v')==read(M/'验收结论.json')['mapped_netlist_sha256']
O.mkdir(exist_ok=False);W=Path('/root/.cache/routeb-new-ff-sta-20261110-v4');W.mkdir(exist_ok=False)
lib=R/'8-本轮实验/GPU物理依赖公开来源核对-20261109/sky130_fd_sc_hd__tt_025C_1v80.lib'
shutil.copy2(lib,W/'sky130.lib');shutil.copy2(M/'ff-mapped.v',W/'mapped.v')
constraints='''create_clock -name core_clock -period 10.000 [get_ports clk_i]
set data_inputs [all_inputs]
set clock_index [lsearch -exact $data_inputs [get_ports clk_i]]
if {$clock_index < 0} {error "clock port not in all_inputs"}
set data_inputs [lreplace $data_inputs $clock_index $clock_index]
set_input_delay 0.5 -clock core_clock $data_inputs
set_output_delay 0.5 -clock core_clock [all_outputs]
'''
script='''if {[catch {

read_liberty sky130.lib
read_verilog mapped.v
link_design vortex_physical_top
read_sdc constraints.sdc
puts "ROUTEB_STA_CONSTRAINTS_LOADED"
check_setup -verbose
report_worst_slack -max
report_worst_slack -min
report_tns

report_checks -path_delay max -group_path_count 1 -format full_clock_expanded

write_sdc actual-constraints.sdc
puts "ROUTEB_STA_ANALYSIS_COMPLETE"
} msg]} {puts stderr "ROUTEB_STA_FAILED: $msg";exit 1}
exit 0
'''
for name,content in [('constraints.sdc',constraints),('run.tcl',script)]:
 (W/name).write_text(content);(O/name).write_text(content)
inputs={p.relative_to(R).as_posix():sha(p) for p in [lib,M/'ff-mapped.v',M/'验收结论.json',binary,T/'status.json',Path(__file__).resolve(),O/'constraints.sdc',O/'run.tcl']}
state=dict(status='RUNNING',scope='Whole new FF mapping, cell-delay STA exploration at10ns; no wire RC/SPEF/CTS or post-route signoff',physical_signoff=False,formal_promotion='HOLD',source_bindings=inputs,tool_commit=tool['opensta_commit'],target_period_ns=10,interconnect_parasitics='not extracted; no wire delay qualification',power_energy_measured=False)
start=time.monotonic()
def save():
 state['seconds']=time.monotonic()-start;state['resources']=snapshot();temp=O/'status.tmp';temp.write_text(json.dumps(state,ensure_ascii=False,indent=2));temp.replace(O/'status.json')
save()
try:
 with (W/'sta.log').open('w') as f:
  p=subprocess.Popen([str(binary),'-no_init','-no_splash','-exit','run.tcl'],cwd=W,stdout=f,stderr=subprocess.STDOUT,start_new_session=True)
  reason=None;tick=0
  while p.poll() is None:
   if int(Path('/sys/fs/cgroup/routeb-course-qualification/memory.current').read_text())>6*1024**3:reason='conservative shared6GiB stop threshold';break
   if time.monotonic()-start>600:reason='10min bounded exploratory STA timeout';break
   if tick%5==0:shutil.copy2(W/'sta.log',O/'sta.log');save()
   tick+=1;time.sleep(2)
  if reason:os.killpg(p.pid,signal.SIGTERM);p.wait();state['resource_stop_reason']=reason;raise RuntimeError(reason)
 assert p.returncode==0,('STA exit',p.returncode)
 raw=(W/'sta.log').read_text();assert 'ROUTEB_STA_ANALYSIS_COMPLETE' in raw and 'ROUTEB_STA_FAILED:' not in raw
 errors=re.findall(r'^Error:.*$',raw,re.M);assert not errors,errors[:5]
 slacks=[float(x) for x in re.findall(r'worst slack\s+(?:max|min)\s+(-?[0-9]+(?:\.[0-9]+)?)',raw)]
 assert len(slacks)==2,('missing max/min slack report',slacks)
 assert all(sha(R/name)==h for name,h in inputs.items())
 shutil.copy2(W/'actual-constraints.sdc',O/'actual-constraints.sdc')
 state.update(status='EXPLORATORY_CELL_DELAY_STA_COMPLETED_NOT_PHYSICAL_SIGNOFF',setup_worst_slack_ns=slacks[0],hold_worst_slack_ns=slacks[1],setup_nonnegative=slacks[0]>=0,hold_nonnegative=slacks[1]>=0,full_physical_timing_pass=False)
except Exception as e:state.update(status='FAILED_NOT_QUALIFIED',error=f'{type(e).__name__}: {e}')
finally:
 if (W/'sta.log').exists():shutil.copy2(W/'sta.log',O/'sta.log')
save();(O/'evidence-sha256.json').write_text(json.dumps({**inputs,**{p.relative_to(R).as_posix():sha(p) for p in O.iterdir() if p.is_file() and p.name!='evidence-sha256.json'}},ensure_ascii=False,indent=2))
print(json.dumps({k:v for k,v in state.items() if k not in ['source_bindings','resources']},ensure_ascii=False,indent=2));raise SystemExit(0 if state['status']=='EXPLORATORY_CELL_DELAY_STA_COMPLETED_NOT_PHYSICAL_SIGNOFF' else 1)