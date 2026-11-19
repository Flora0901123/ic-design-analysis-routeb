from pathlib import Path
import os,json,subprocess,hashlib,time,shutil,sys
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources/integration/student-mini';O=R/'8-本轮实验/GPU锁定版适配器-20261107';O.mkdir(exist_ok=True);cache=Path('/root/.cache/routeb-adapter-5040');cache.mkdir(exist_ok=True);alias=Path('/tmp/routeb-verilator-5040-install');dest=R/'9-GPU复现/tools/verilator-5.040'
if alias.is_symlink():assert alias.resolve()==dest.resolve()
elif alias.exists():raise RuntimeError('tool alias occupied by another path')
else:alias.symlink_to(dest,target_is_directory=True)
env=dict(os.environ,VERILATOR_ROOT=str(alias/'share/verilator'));V=alias/'bin/verilator';inputs=[R/'8-本轮实验/GPU适配器协议-20261105/tb.sv',S/'gpu_fault_memory_adapter.sv',S/'gpu_status_command_adapter.sv'];sources=[]
for p in inputs:
 q=cache/p.name;shutil.copyfile(p,q);assert q.read_bytes()==p.read_bytes();sources.append(q)
state={'status':'BUILDING','scope':'ADAPTER_ONLY','not_full_gpu_case_qualification':True,'verilator':subprocess.check_output([str(V),'--version'],env=env,text=True).strip(),'bindings':{str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in inputs},'tool_bindings':{n:hashlib.sha256((dest/'bin'/n).read_bytes()).hexdigest() for n in ['verilator','verilator_bin']},'path_workaround':'ASCII compiler root symlink and exact-byte copies in generated WSL build cache; inputs and binary hashes recorded','stages':[]};then=time.monotonic();(O/'status.json').write_text(json.dumps(state,indent=2))
try:
 for name,cmd,timeout in [('build',[str(V),'--binary','--timing','--assert','--top-module','tb','-Wno-fatal','-j','2','--Mdir',str(cache/'obj'),'-o',str(cache/'sim-adapter'),*map(str,sources)],600),('run',[str(cache/'sim-adapter')],60)]:
  start=time.monotonic()
  with (O/(name+'.log')).open('w') as f:p=subprocess.run(cmd,cwd=cache,env=env,stdout=f,stderr=subprocess.STDOUT,timeout=timeout)
  state['stages'].append({'stage':name,'exit_code':p.returncode,'elapsed_seconds':time.monotonic()-start});assert p.returncode==0,name+' failed'
 text=(O/'run.log').read_text();assert text.count('ADAPTER_CASE ')==120 and 'ADAPTER_COMPLETE cases=120' in text
 assert all(hashlib.sha256(p.read_bytes()).hexdigest()==state['bindings'][str(p)] for p in inputs),'source changed during test'
 shutil.copyfile(cache/'sim-adapter',O/'sim-adapter');state.update(status='ADAPTER_RTL_PASS',cases=120,stability_violations=0,binary_sha256=hashlib.sha256((O/'sim-adapter').read_bytes()).hexdigest(),run_log_sha256=hashlib.sha256((O/'run.log').read_bytes()).hexdigest())
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
state['elapsed_seconds']=time.monotonic()-then;(O/'status.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2));sys.exit(0 if state['status']=='ADAPTER_RTL_PASS' else 1)
