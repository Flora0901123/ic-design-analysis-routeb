from pathlib import Path
import subprocess,json,sys
R=Path(__file__).resolve().parents[1]
code=subprocess.call(['python3',str(R/'7-审计与验收/install_locked_verilator.py')])
state=json.loads((R/'9-GPU复现/locked-verilator-5.040/status.json').read_text())
if state['status']!='INSTALLED':raise SystemExit('locked tool still not installed')
raise SystemExit(subprocess.call(['python3',str(R/'7-审计与验收/run_gpu_adapter_tb_locked.py')]))
