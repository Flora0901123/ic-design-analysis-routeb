from pathlib import Path
import subprocess,json
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU适配器局部契约-20261107/command-diagnosis';
with (O/'elaboration.log').open('w') as f:subprocess.run(['yosys','-p','read -formal -sv adapter.sv contract.sv; prep -top cmd_contract -flatten; write_json design.json'],cwd=O,stdout=f,stderr=subprocess.STDOUT,check=True)
d=json.loads((O/'design.json').read_text());m=d['modules']['cmd_contract'];print({k:v for k,v in m['netnames'].items() if 'STATUS_ADDR' in k})
print('Comparators for addr:')
for k,v in m['cells'].items():
 if v['type']=='$eq' and any('1'==x for x in v['connections'].get('B',[])) and len(v['connections'].get('A',[]))==12:print(k,v['connections'])
