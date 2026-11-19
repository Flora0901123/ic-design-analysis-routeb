from pathlib import Path
import json,shutil,subprocess,os,time,hashlib,signal
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];D=R/'9-GPU复现/整机DMA重建';receipt=json.loads((D/'trace-build/completion.json').read_text());W=Path(receipt['work']);P=R/'9-GPU复现/host-simulation-o3/build-source';O=R/'8-本轮实验/GPU仿真器主机编译优化-20261108';O.mkdir(exist_ok=True);Q=Path('/root/.cache/routeb-host-o3-20261108');start=time.monotonic();state={'status':'PREPARING','purpose':'host simulator throughput only; no target speedup claim','target_RTL_changed':False,'target_kernel_changed':False,'parent_bindings':receipt['new_bindings'],'work':str(Q)}
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save():state['elapsed_seconds']=time.monotonic()-start;state['resources']=snapshot();(O/'build.json').write_text(json.dumps(state,indent=2))
try:
 assert not P.exists() and not Q.exists(),'new isolated host build required'
 assert all(sha(Path(p))==h for p,h in receipt['new_bindings'].items())
 P.mkdir(parents=True);Q.symlink_to(P,target_is_directory=True);old=W/'vortex-build/sw/runtime/librtlsim.so.obj_dir';obj=Q/'obj'
 shutil.copytree(old,obj,symlinks=False,ignore=shutil.ignore_patterns('*.o','*.a','*.gch','*.d','*.so'))
 checked={}
 for f in obj.iterdir():
  if f.is_file() and f.suffix in ['.cpp','.h']:assert sha(f)==sha(old/f.name);checked[f.name]=sha(f)
 for f in obj.glob('*.mk'):
  s=f.read_text();f.write_text(s.replace(str(old),str(obj)).replace(str(W/'vortex-build/sw/runtime/librtlsim.so'),str(Q/'librtlsim.so')))
 state.update(status='BUILDING',generated_source_bindings=checked,compiler=subprocess.check_output(['g++','--version'],text=True).splitlines()[0]);save()
 tool=Path('/root/.cache/routeb-protocol-tools/verilator-5.040/share/verilator');assert tool.exists();cmd=['make','-j1','-C',str(obj),'-f','Vrtlsim_shim.mk','OPT_FAST=-O3','OPT_SLOW=-O3','OPT_GLOBAL=-O3','VERILATOR_ROOT='+str(tool)];state['command']=cmd;save()
 with (O/'build.log').open('w') as log:
  child=subprocess.Popen(cmd,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
  try:code=child.wait(timeout=2400)
  except subprocess.TimeoutExpired:os.killpg(child.pid,signal.SIGTERM);child.wait();code='TIMEOUT'
 assert code==0 and (Q/'librtlsim.so').exists(),('host build failed',code)
 assert all(sha(Path(p))==h for p,h in receipt['new_bindings'].items()),'production parent modified'
 shutil.copy2(Q/'librtlsim.so',O/'librtlsim.so');state.update(status='HOST_O3_BUILD_PASS_NOT_YET_VALIDATED',library_sha256=sha(Q/'librtlsim.so'))
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k not in ['generated_source_bindings','parent_bindings','resources']},indent=2))
