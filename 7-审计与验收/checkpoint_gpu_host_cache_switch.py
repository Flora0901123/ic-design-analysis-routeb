from pathlib import Path
import ast,json,hashlib,sys,re,os,signal,time
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU同硬件全1000-20261108';S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
from scripts.student_mini import compare_outputs
G=[json.loads(s) for s in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()];sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();tree=ast.parse((R/'7-审计与验收/run_gpu_same_hardware_1000_parallel.py').read_text());node=next(n for n in tree.body if isinstance(n,ast.FunctionDef) and n.name=='validate');exec(compile(ast.Module(body=[node],type_ignores=[]),'<preflight-validator>','exec'))
state=json.loads((O/'status.json').read_text());checked=[]
for x in state['records']:
 i=x['ordinal'];f=O/f'{i:04d}.log';assert sha(f)==x['log_sha256'];v=validate(i,f,x['seconds'],True,'offline validator preflight');assert v['numeric_status_match'];checked.append(i)
# The exact original runner process must still be the only legacy numeric runner.
pids=[]
for p in Path('/proc').iterdir():
 if p.name.isdigit():
  try:
   cmd=(p/'cmdline').read_bytes();first=cmd.split(bytes([0]))[0]
   if b'python' in first and b'/run_gpu_same_hardware_1000.py' in cmd:pids.append(int(p.name))
  except (FileNotFoundError,PermissionError):pass
assert len(pids)==1,pids;pid=pids[0];os.kill(pid,signal.SIGSTOP);children=(Path('/proc')/str(pid)/'task'/str(pid)/'children').read_text().split();state=json.loads((O/'status.json').read_text());history=O/'resume-history';history.mkdir(exist_ok=True);(history/'before-host-cache-switch.json').write_text(json.dumps(state,indent=2))
for c in children:
 try:os.killpg(int(c),signal.SIGTERM)
 except ProcessLookupError:pass
os.kill(pid,signal.SIGTERM);os.kill(pid,signal.SIGCONT)
for n in range(50):
 if not (Path('/proc')/str(pid)).exists():break
 time.sleep(.1)
assert not (Path('/proc')/str(pid)).exists(),'legacy runner did not terminate'
result={'status':'VALIDATED_CHECKPOINT_FOR_IDENTICAL_BINARY_HOST_CACHE_SWITCH','committed_records':len(state['records']),'offline_new_validator_records_passed':len(checked),'stopped_original_pid':pid,'interrupted_child_process_groups':children,'partial_logs':'next runner archives every uncommitted log and reruns it','target_bindings':state['bindings'],'no_target_speedup_claim':True};(history/'host-cache-switch.json').write_text(json.dumps(result,indent=2));print(json.dumps(result,indent=2))