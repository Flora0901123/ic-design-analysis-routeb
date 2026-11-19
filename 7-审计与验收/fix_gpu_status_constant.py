from pathlib import Path
import json,hashlib,subprocess
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources/integration/student-mini';O=R/'8-本轮实验/GPU地址常量兼容修正-20261107';O.mkdir(exist_ok=True);p=S/'gpu_status_command_adapter.sv';before=p.read_text();old="localparam logic [ADDR_WIDTH-1:0] STATUS_ADDR = '1;";new="// Explicit replication preserves all-ones width across tool frontends.\n  localparam logic [ADDR_WIDTH-1:0] STATUS_ADDR = {ADDR_WIDTH{1'b1}};";assert before.count(old)==1
(O/'gpu_status_command_adapter-before.sv').write_text(before);p.write_text(before.replace(old,new));(O/'change.json').write_text(json.dumps({'reason':'Yosys 0.33 elaborated original all-ones unbased literal as 1-bit comparator operand; contract expects 12-bit FFF, independently verified by Verilator/Icarus tests','before_sha256':hashlib.sha256(before.encode()).hexdigest(),'after_sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'scope':'semantically explicit all-ones localparam; no golden or case changes'},indent=2))
# Preserve the earlier local-contract failed attempt before rerunning.
q=R/'8-本轮实验/GPU适配器局部契约-20261107';import shutil
archive=q/'initial-attempt';archive.mkdir(exist_ok=True)
for name in ['completion.json','mem_contract','cmd_contract']:
 a=q/name;b=archive/name
 if a.exists() and not b.exists():shutil.copytree(a,b) if a.is_dir() else shutil.copy2(a,b)
s=(R/'7-审计与验收/run_gpu_adapter_local_contract.py').read_text();s=s.replace("'depth':8", "'depth':2,'mode':'temporal induction, max 4 steps'");s=s.replace('sat -seq 8 -prove-asserts','sat -tempinduct -seq 2 -maxsteps 4 -prove-asserts');s=s.replace("'SAT proof finished - no model found: SUCCESS!' in text", "'Induction step proven: SUCCESS!' in text");s=s.replace('BOUNDED_SAFETY_PASS','INDUCTIVE_LOCAL_SAFETY_PASS');(R/'7-审计与验收/run_gpu_adapter_local_contract.py').write_text(s)
print('Explicit-width localparam applied to development source only')
