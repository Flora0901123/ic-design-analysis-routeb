from pathlib import Path
import json,subprocess,os,signal,time,hashlib
R=Path(__file__).resolve().parents[1];OUT=R/'9-GPU复现/rtlsim-optimization';OUT.mkdir(exist_ok=True)
BUILD=R/'student-mini-v1-cpu-gpu/sources/build/student-mini/native-gpu/a6e2b2f44258a0a7f694d57f18f00ea059d99b7767d103b29dbe9f2b4c5dac17/vortex-build'
env=dict(os.environ,PATH=str(R/'9-GPU复现/tools/verilator/bin')+':'+os.environ.get('PATH',''),MAKEFLAGS='-j2',THREADS='2')
alias=Path('/tmp/routeb-verilator')
if alias.exists():assert alias.resolve()==(R/'9-GPU复现/tools/verilator').resolve()
else:alias.symlink_to(R/'9-GPU复现/tools/verilator',target_is_directory=True)
env['VERILATOR_ROOT']=str(alias/'share/verilator')
version=subprocess.check_output([str(R/'9-GPU复现/tools/verilator/bin/verilator'),'--version'],env=env,text=True)
flags='-DVX_CFG_NUM_CORES=1 -DVX_CFG_NUM_WARPS=2 -DVX_CFG_NUM_THREADS=4 -DVX_CFG_FPU_TYPE=STD'
cmd=['make','-j2','-C',str(BUILD/'sw/runtime/rtlsim'),'DESTDIR='+str(OUT),'CONFIGS='+flags,'THREADS=2','PERF=1','VERILATOR_PATH='+str(alias)]
generated=OUT/'librtlsim.so.obj_dir/Vrtlsim_shim.mk'
if generated.exists() and '\\351' in generated.read_text():
 stamp_file=OUT/'librtlsim.so.obj_dir/Vrtlsim_shim__verFiles.dat'
 if stamp_file.exists():stamp_file.unlink()
state={'status':'BUILDING','verilator':version.strip(),'formal_eligible':False,'reason':'development RTL simulator; tool version differs from course lock; mapped physical/protocol qualification not yet established','command':cmd}
(OUT/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2));start=time.monotonic()
with (OUT/'build.log').open('w') as log:
 p=subprocess.Popen(cmd,cwd=BUILD,env=env,stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
 try:code=p.wait(timeout=3600)
 except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();code='timeout'
state.update(status='BUILT' if code==0 else 'FAILED',exit_code=code,elapsed_seconds=time.monotonic()-start)
if code==0:state['artifacts']={p.name:hashlib.sha256(p.read_bytes()).hexdigest() for p in OUT.glob('*.so')}
(OUT/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2));print(json.dumps(state,ensure_ascii=False,indent=2))
