from pathlib import Path
import json,subprocess,shutil
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU地址常量兼容修正-20261107';h=R/'7-审计与验收/gpu_adapter_local_contract.sv';result={}
for name,path in [('before',O/'gpu_status_command_adapter-before.sv'),('after',R/'student-mini-v1-cpu-gpu/sources/integration/student-mini/gpu_status_command_adapter.sv')]:
 f=O/name;f.mkdir(exist_ok=True);shutil.copyfile(path,f/'adapter.sv');shutil.copyfile(h,f/'contract.sv')
 with (f/'elaboration.log').open('w') as log:subprocess.run(['yosys','-p','read -formal -sv adapter.sv contract.sv; prep -top cmd_contract -flatten; write_json design.json'],cwd=f,stdout=log,stderr=subprocess.STDOUT,check=True)
 d=json.loads((f/'design.json').read_text());m=d['modules']['cmd_contract'];eq=[v for k,v in m['cells'].items() if v['type']=='$eq' and len(v['connections'].get('A',[]))==12 and v['connections'].get('B')==(['1'] if name=='before' else ['1']*12)];assert len(eq)==1
 result[name]={'comparison_constant_bits_lsb_first':eq[0]['connections']['B'],'comparison_parameters':eq[0]['parameters']}
assert result['before']['comparison_constant_bits_lsb_first']==['1']
assert result['after']['comparison_constant_bits_lsb_first']==['1']*12
result['status']='ELABORATION_DIFFERENCE_CONFIRMED_AND_FIXED';(O/'elaboration-comparison.json').write_text(json.dumps(result,indent=2));print(json.dumps(result,indent=2))


