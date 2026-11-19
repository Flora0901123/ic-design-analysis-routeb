"""Build an explicitly pinned STA tool, not timing acceptance of the GPU."""
from pathlib import Path
import subprocess,time,json,hashlib,os,signal,shutil
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/OpenSTA工具搭建-20261110-v2';O.mkdir(exist_ok=False)
W=Path('/root/.cache/routeb-opensta-20261110');S=W/'source';assert subprocess.check_output(['git','rev-parse','HEAD'],cwd=S,text=True).strip()=='f8e13cbf12d02a07a2d1ec4a64f3e6985b747eab'
state=dict(status='RUNNING',scope='STA tool source and build qualification only; no GPU timing acceptance',opensta_source_url='https://github.com/The-OpenROAD-Project/OpenSTA.git',opensta_commit='f8e13cbf12d02a07a2d1ec4a64f3e6985b747eab',records=[],formal_promotion='HOLD',PPA_signoff=False)
start=time.monotonic();sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
def save():
 state['seconds']=time.monotonic()-start;state['resources']=snapshot();tmp=O/'status.tmp';tmp.write_text(json.dumps(state,ensure_ascii=False,indent=2));tmp.replace(O/'status.json')
def run(cmd,name,cwd=W,timeout=1500):
 state['stage']=name;save();t=time.monotonic()
 with (O/(name+'.log')).open('w') as f:
  p=subprocess.Popen(cmd,cwd=cwd,stdout=f,stderr=subprocess.STDOUT,start_new_session=True,env=dict(os.environ,DEBIAN_FRONTEND='noninteractive',OMP_NUM_THREADS='2'))
  while p.poll() is None:
   if time.monotonic()-t>timeout or int(Path('/sys/fs/cgroup/routeb-course-qualification/memory.current').read_text())>6*1024**3:
    os.killpg(p.pid,signal.SIGTERM);p.wait();raise RuntimeError('bounded build guard '+name)
   time.sleep(2)
 assert p.returncode==0,(name,p.returncode)
 state['records'].append(dict(stage=name,command=cmd,seconds=time.monotonic()-t,log_sha256=sha(O/(name+'.log'))));save()
try:
 # Existing Ubuntu package index was refreshed and preserved by the first attempt.
 run(['apt-get','install','-y','--no-install-recommends','tcl-dev','swig','libeigen3-dev','libfmt-dev','autoconf','automake','libtool'],'build-dependencies',timeout=180)
 run(['autoreconf','-fi'],'cudd-autoreconf',W/'cudd',180)
 state['cudd_commit']=subprocess.check_output(['git','rev-parse','HEAD'],cwd=W/'cudd',text=True).strip();state['cudd_source_url']='https://github.com/cuddorg/cudd.git'
 run(['./configure','--enable-shared=no','--enable-dddmp=no','--enable-obj=no','--prefix='+str(W/'cudd-install')],'cudd-configure',W/'cudd',180)
 run(['make','-j2'],'cudd-build',W/'cudd',600)
 run(['make','install'],'cudd-install',W/'cudd',180)
 run(['cmake','-S',str(S),'-B',str(W/'build'),'-DCMAKE_BUILD_TYPE=Release','-DUSE_TCL_READLINE=OFF','-DCUDD_DIR='+str(W/'cudd-install')],'opensta-configure',timeout=180)
 run(['cmake','--build',str(W/'build'),'--parallel','2'],'opensta-build',timeout=1500)
 binary=W/'build/sta';run([str(binary),'-version'],'opensta-version',timeout=30)
 tools=R/'9-GPU复现/tools/opensta-f8e13cb';tools.mkdir(exist_ok=False);shutil.copy2(binary,tools/'sta');shutil.copy2(S/'LICENSE',tools/'LICENSE')
 run(['git','archive','--format=tar.gz','-o',str(O/'OpenSTA-source.tar.gz'),'HEAD'],'source-archive',S,60)
 run(['git','archive','--format=tar.gz','-o',str(O/'CUDD-source.tar.gz'),'HEAD'],'cudd-archive',W/'cudd',60)
 run(['dpkg-query','-W','tcl-dev','swig','libeigen3-dev','libfmt-dev','zlib1g-dev'],'dependency-versions',timeout=30)
 state.update(status='PINNED_OPENSTA_BUILD_PASS_NOT_GPU_STA',binary_relative=(tools/'sta').relative_to(R).as_posix(),binary_sha256=sha(binary),gpu_STA_executed=False)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k not in ['records','resources']},ensure_ascii=False,indent=2));raise SystemExit(0 if state['status']=='PINNED_OPENSTA_BUILD_PASS_NOT_GPU_STA' else 1)