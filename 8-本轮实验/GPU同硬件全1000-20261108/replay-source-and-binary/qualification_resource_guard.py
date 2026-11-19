"""Course qualification resource group. Linux only; new children inherit limits.
Existing historic runs are never retroactively labelled compliant.
"""
from pathlib import Path
import os,json,time
GROUP=Path('/sys/fs/cgroup/routeb-course-qualification')
def prepare():
 root=GROUP.parent;active=(root/'cgroup.subtree_control').read_text().split();assert 'cpu' in active and 'memory' in active,'cgroup controllers must already be enabled'
 GROUP.mkdir(exist_ok=True)
 (GROUP/'cpu.max').write_text('200000 100000')
 (GROUP/'memory.max').write_text(str(8*1024**3))
 (GROUP/'memory.swap.max').write_text('0')
 assert (GROUP/'cpu.max').read_text().split()==['200000','100000']
 assert int((GROUP/'memory.max').read_text())==8*1024**3
 return snapshot()
def join():
 cpus=sorted(os.sched_getaffinity(0))[:2];assert len(cpus)==2
 os.sched_setaffinity(0,cpus)
 (GROUP/'cgroup.procs').write_text(str(os.getpid()))
def snapshot():
 names=['cpu.max','cpu.stat','memory.max','memory.current','memory.peak','memory.events','memory.swap.max','memory.swap.current','cgroup.procs']
 return {'path':str(GROUP),'observed_epoch':time.time(),'limits':{n:(GROUP/n).read_text().strip() for n in names if (GROUP/n).exists()}}
if __name__=='__main__':print(json.dumps(prepare(),indent=2))
