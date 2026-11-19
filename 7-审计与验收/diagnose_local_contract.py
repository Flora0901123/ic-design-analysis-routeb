from pathlib import Path
import subprocess,json,shutil,time
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU适配器局部契约-20261107/command-diagnosis';O.mkdir(exist_ok=True)
for a,b in [(R/'7-审计与验收/gpu_adapter_local_contract.sv',O/'contract.sv'),(R/'student-mini-v1-cpu-gpu/sources/integration/student-mini/gpu_status_command_adapter.sv',O/'adapter.sv')]:shutil.copyfile(a,b)
s='read -formal -sv adapter.sv contract.sv; prep -top cmd_contract -flatten; opt_clean; sat -seq 8 -prove-asserts -set-assumes -show rst,valid,kind,addr,ready,hv,hostready,he,hd,start,dv,busy,fault,pv,ppv -show-regs -dump_json witness.json -timeout 30'
with (O/'proof.log').open('w') as f:subprocess.run(['yosys','-p',s],cwd=O,stdout=f,stderr=subprocess.STDOUT,timeout=50)
print('diagnosis saved')
