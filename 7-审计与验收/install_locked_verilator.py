from pathlib import Path
import os,json,tarfile,subprocess,signal,time,hashlib
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/locked-verilator-5.040';src=Path('/tmp/routeb-verilator-5040-source');src.mkdir(exist_ok=True)
with tarfile.open(O/'verilator-v5.040.tar.gz') as t:t.extractall(src,filter='data')
work=src/'verilator-5.040';dest=R/'9-GPU复现/tools/verilator-5.040';alias=Path('/tmp/routeb-verilator-5040-install')
if not alias.exists():alias.symlink_to(dest,target_is_directory=True)
env=dict(os.environ,MAKEFLAGS='-j2');state={'status':'BUILDING','prefix':str(dest),'source':json.loads((O/'source.json').read_text()),'stages':[]};(O/'status.json').write_text(json.dumps(state,indent=2))
try:
 for name,cmd in [('autoconf',['autoconf']),('configure',['./configure','--prefix='+str(alias)]),('build',['make','-j2']),('install',['make','install'])]:
  with (O/(name+'.log')).open('w') as f:
   p=subprocess.Popen(cmd,cwd=work,env=env,stdout=f,stderr=subprocess.STDOUT,start_new_session=True)
   try:code=p.wait(timeout=2400)
   except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError(name+' timeout')
  state['stages'].append({'stage':name,'exit_code':code});(O/'status.json').write_text(json.dumps(state,indent=2));assert code==0,name
 ver=subprocess.check_output([str(dest/'bin/verilator'),'--version'],text=True);assert 'Verilator 5.040' in ver
 state.update(status='INSTALLED',version=ver.strip(),binaries={n:hashlib.sha256((dest/'bin'/n).read_bytes()).hexdigest() for n in ['verilator','verilator_bin']})
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(O/'status.json').write_text(json.dumps(state,indent=2));print(json.dumps(state,indent=2))
