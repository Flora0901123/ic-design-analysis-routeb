"""One active continuation job, not a recurring automation."""
from pathlib import Path
import json,subprocess,time,datetime,os,hashlib,fcntl
from qualification_resource_guard import prepare,join
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU验收接续-20261109';O.mkdir(exist_ok=True);lock=(O/'.coordinator.lock').open('a+');fcntl.flock(lock,fcntl.LOCK_EX|fcntl.LOCK_NB);state={'status':'WAITING_FOR_BASELINE','started_at':datetime.datetime.now(datetime.timezone(datetime.timedelta(hours=8))).isoformat(),'stages':[]}
def save():state['updated_at']=datetime.datetime.now(datetime.timezone(datetime.timedelta(hours=8))).isoformat();(O/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
def run(name):
 if (O/'STOP_AFTER_STAGE').exists():state['status']='CHECKPOINT_STOP_REQUESTED';save();raise SystemExit(0)
 save();f=O/(name+'.log');start=time.monotonic()
 with f.open('a') as log:p=subprocess.run(['python3',str(R/'7-审计与验收'/name)],stdout=log,stderr=subprocess.STDOUT)
 state['stages'].append({'script':name,'exit_code':p.returncode,'seconds':time.monotonic()-start});save();assert p.returncode==0,(name,p.returncode)
def numeric_writer_active():
 with (R/'8-本轮实验/GPU同硬件全1000-20261108/.numeric-run.lock').open('a+') as fd:
  try:fcntl.flock(fd,fcntl.LOCK_EX|fcntl.LOCK_NB)
  except BlockingIOError:return True
  fcntl.flock(fd,fcntl.LOCK_UN);return False
last_progress=time.monotonic();last_count=None;without_owner_since=None
try:
 while True:
  if (O/'STOP_AFTER_STAGE').exists():state['status']='CHECKPOINT_STOP_REQUESTED';save();raise SystemExit(0)
  base=json.loads((R/'8-本轮实验/GPU同硬件全1000-20261108/status.json').read_text());state['baseline_records']=len(base['records']);state['baseline_status']=base['status'];save()
  if base['status']=='SAME_HARDWARE_1000_NUMERIC_STATUS_PASS':break
  if base['status']!='RUNNING':raise RuntimeError('baseline is not running/pass: '+base['status'])
  now=time.monotonic();owner=numeric_writer_active();state['baseline_writer_lock_owned']=owner
  if len(base['records'])!=last_count:last_progress=now;last_count=len(base['records'])
  if owner:without_owner_since=None
  elif without_owner_since is None:without_owner_since=now
  elif now-without_owner_since>60:raise RuntimeError('Stale RUNNING checkpoint: numeric writer has no lock owner; resume it explicitly')
  if owner and now-last_progress>1800:raise RuntimeError('Numeric writer lock alive but no committed progress for 30 minutes; review logs')
  save();time.sleep(10)
 state['status']='INDEPENDENT_BASELINE_SEAL';run('seal_gpu_same_hardware_1000.py');q=json.loads((R/'8-本轮实验/GPU同硬件全1000-20261108/验收结论.json').read_text());assert q['status']=='SAME_HARDWARE_1000_REPLAY_INDEPENDENTLY_SEALED'
 state['status']='UPDATING_BASELINE_REPORT';run('build_project_panorama.py');run('build_achievements_html.py');state['status']='FULL_CANDIDATE_BOARD_RUNNING';run('run_gpu_full_candidate_board.py');q=json.loads((R/'8-本轮实验/GPU完整候选板-20261109/status.json').read_text());assert q['status']=='FULL_1000_CANDIDATE_BOARD_COLLECTED_NOT_PROMOTED';state['status']='INDEPENDENT_CANDIDATE_SEAL';run('seal_gpu_full_candidate_board.py');q=json.loads((R/'8-本轮实验/GPU完整候选板-20261109/验收结论.json').read_text());assert q['status']=='FULL_1000_CANDIDATE_BOARD_INDEPENDENTLY_SEALED';run('build_project_panorama.py');run('build_achievements_html.py');state['status']='BASELINE_AND_CANDIDATE_DATA_SEALED_STILL_HOLD'
except Exception as e:state.update(status='FAILED_REQUIRES_REVIEW',error=f'{type(e).__name__}: {e}')
save();print(json.dumps(state,ensure_ascii=False,indent=2))
if state['status']=='FAILED_REQUIRES_REVIEW':raise SystemExit(1)
