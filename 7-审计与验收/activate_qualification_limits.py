from pathlib import Path
import json,os,time,sys
from qualification_resource_guard import prepare,GROUP,snapshot
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/资源限制-20261108';O.mkdir(exist_ok=True);prepare()
targets={'run_gpu_same_hardware_1000.py','build_fresh_gpu_protocol.py'};roots=[]
for p in Path('/proc').iterdir():
 if not p.name.isdigit():continue
 try:
  a=(p/'cmdline').read_bytes().split(b'\0')
  if len(a)>1 and Path(os.fsdecode(a[1])).name in targets and Path(os.fsdecode(a[0])).name.startswith('python'):roots.append(int(p.name))
 except (FileNotFoundError,PermissionError,ValueError):pass
assert roots,'no authorized running validation processes found'
records=[];seen=set()
for round in range(3):
 parent={}
 for p in Path('/proc').iterdir():
  try:
   if p.name.isdigit():parent[int(p.name)]=int((p/'stat').read_text().rsplit(')',1)[1].split()[1])
  except (FileNotFoundError,PermissionError,ValueError):pass
 selected=set(roots)
 while True:
  after=selected|{p for p,q in parent.items() if q in selected}
  if after==selected:break
  selected=after
 for pid in sorted(selected,key=lambda p:p not in roots):
  try:
   if pid in seen:continue
   before=sorted(os.sched_getaffinity(pid));(GROUP/'cgroup.procs').write_text(str(pid))
   for tid in (Path('/proc')/str(pid)/'task').iterdir():os.sched_setaffinity(int(tid.name),{0,1})
   records.append({'pid':pid,'command':(Path('/proc')/str(pid)/'cmdline').read_bytes().replace(b'\0',b' ').decode(errors='replace')[:400],'prior_affinity':before,'new_affinity':sorted(os.sched_getaffinity(pid))});seen.add(pid)
  except (FileNotFoundError,ProcessLookupError):pass
status=R/'8-本轮实验/GPU同硬件全1000-20261108/status.json';s=json.loads(status.read_text());d={'status':'LIMITS_ACTIVE_FOR_ONGOING_AND_FUTURE_CHILDREN','effective_epoch':time.time(),'roots':roots,'moved_processes':records,'numeric_records_completed_before_activation':len(s['records']),'historic_resource_compliance_retroactively_claimed':False,'snapshot':snapshot()};(O/'activation.json').write_text(json.dumps(d,indent=2));print(json.dumps({'status':d['status'],'processes':len(records),'records_before_activation':len(s['records']),'snapshot':snapshot()},indent=2))
