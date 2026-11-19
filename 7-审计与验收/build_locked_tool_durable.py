from pathlib import Path
import json,os,sys,time,subprocess,hashlib,tarfile,shutil,signal
from datetime import datetime,timezone
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/locked-verilator-5.040';A=O/'verilator-v5.040.tar.gz';dest=R/'9-GPU复现/tools/verilator-5.040';cache=Path('/root/.cache/routeb-verilator-5.040');work=cache/'verilator-5.040';run=O/'attempt-20261107';run.mkdir(exist_ok=True)
expected='56c7c46314adfad06dd093b77823bfd9b49ebef72342549f790718199c3e8223'
assert hashlib.sha256(A.read_bytes()).hexdigest()==expected,'official archive integrity mismatch'
if not (run/'previous-status.json').exists():
 for p in [O/'status.json',O/'build.log']:
  if p.exists():shutil.copy2(p,run/('previous-'+p.name))
cache.mkdir(exist_ok=True)
if not (cache/'archive-sha256').exists():
 with tarfile.open(A) as t:t.extractall(cache,filter='data')
 (cache/'archive-sha256').write_text(expected)
state={'status':'BUILDING','started_at':datetime.now(timezone.utc).isoformat(),'source':json.loads((O/'source.json').read_text()),'prefix':str(dest),'build_directory':str(work),'pid':os.getpid(),'stages':[],'build_profile':'official optimized binary; debug and coverage binaries intentionally omitted to bound disk cost','scope':'locked tool build and standalone adapter regression; not whole GPU qualification'};start=time.monotonic()
def save():
 state['elapsed_seconds']=time.monotonic()-start;state['updated_at']=datetime.now(timezone.utc).isoformat()
 for p in [run/'status.json',O/'status.json']:p.write_text(json.dumps(state,indent=2))
env=dict(os.environ,MAKEFLAGS='-j2');env.pop('VERILATOR_ROOT',None)
try:
 stages=[]
 if not (work/'configure').exists():stages.append(('autoconf',['autoconf']))
 if not (work/'Makefile').exists():stages.append(('configure',['./configure','--prefix='+str(dest)]))
 stages.extend([('build-opt',['make','-C','src','-j2','opt']),('install-opt',['make','install-all','VL_INST_PUBLIC_BIN_FILES=verilator_bin'])])
 for name,cmd in stages:
  state['current_stage']=name;save();then=time.monotonic()
  with (run/(name+'.log')).open('a') as f:
   f.write('\nRESUME '+datetime.now(timezone.utc).isoformat()+' '+repr(cmd)+'\n');f.flush()
   p=subprocess.Popen(cmd,cwd=work,env=env,stdout=f,stderr=subprocess.STDOUT,start_new_session=True)
   while p.poll() is None:
    if time.monotonic()-then>3600:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError(name+' exceeded 3600s')
    state['stage_elapsed_seconds']=time.monotonic()-then;save();time.sleep(5)
  state['stages'].append({'stage':name,'exit_code':p.returncode,'seconds':time.monotonic()-then});save()
  if p.returncode:raise RuntimeError(name+' failed')
 toolenv=dict(env,VERILATOR_ROOT=str(dest/'share/verilator'))
 ver=subprocess.check_output([str(dest/'bin/verilator'),'--version'],env=toolenv,text=True).strip();assert 'Verilator 5.040' in ver
 state.update(status='INSTALLED',version=ver,binaries={n:hashlib.sha256((dest/'bin'/n).read_bytes()).hexdigest() for n in ['verilator','verilator_bin']});save()
 # The independent adapter producer records source bindings and rejects unsupported results.
 code=subprocess.call(['python3',str(R/'7-审计与验收/run_gpu_adapter_tb_locked.py')],env=toolenv)
 adapter=json.loads((R/'8-本轮实验/GPU锁定版适配器-20261107/status.json').read_text());state['adapter_producer_exit_code']=code;state['adapter_status']=adapter['status'];save()
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}');save()
print(json.dumps(state,indent=2),flush=True)
sys.exit(0 if state['status']=='INSTALLED' and state.get('adapter_producer_exit_code')==0 and state.get('adapter_status')=='ADAPTER_RTL_PASS' else 1)
