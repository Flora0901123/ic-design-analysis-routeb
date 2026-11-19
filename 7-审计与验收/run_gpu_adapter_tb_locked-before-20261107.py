from pathlib import Path
import json,os,subprocess,hashlib,time
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';O=R/'8-本轮实验/GPU适配器协议-20261105'
alias=Path('/tmp/routeb-verilator-5040-install')
if not alias.exists():alias.symlink_to(R/'9-GPU复现/tools/verilator-5.040',target_is_directory=True)
V=R/'9-GPU复现/tools/verilator-5.040/bin/verilator';env=dict(os.environ,VERILATOR_ROOT='/tmp/routeb-verilator-5040-install/share/verilator');obj=Path('/tmp/routeb-gpu-adapter-5040');state={'status':'BUILDING','scope':'ADAPTER_ONLY','not_full_gpu_case_qualification':True,'verilator':subprocess.check_output([str(V),'--version'],env=env,text=True).strip()};sources=[O/'tb.sv',S/'integration/student-mini/gpu_fault_memory_adapter.sv',S/'integration/student-mini/gpu_status_command_adapter.sv'];state['bindings']={str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in sources};(O/'status-5.040.json').write_text(json.dumps(state,indent=2))
cmd=[str(V),'--binary','--timing','--assert','--top-module','tb','-Wno-fatal','-j','2','--Mdir',str(obj),'-o',str(O/'sim-adapter-5.040'),*map(str,sources)]
try:
 with (O/'build-5.040.log').open('w') as f:r=subprocess.run(cmd,env=env,cwd=O,stdout=f,stderr=subprocess.STDOUT,timeout=600)
 assert r.returncode==0,'build failed'
 with (O/'transcript-5.040.log').open('w') as f:r=subprocess.run([str(O/'sim-adapter-5.040')],cwd=O,stdout=f,stderr=subprocess.STDOUT,timeout=60)
 assert r.returncode==0,'RTL assertion failed'
 text=(O/'transcript-5.040.log').read_text();assert text.count('ADAPTER_CASE ')==120 and 'ADAPTER_COMPLETE cases=120' in text
 state.update(status='ADAPTER_RTL_PASS',cases=120,stability_violations=0)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(O/'status-5.040.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
