from pathlib import Path
import json,subprocess,os,sys,time,re,signal,hashlib
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S))
from scripts.assemble_student_mini_gpu_results import parse
from scripts.student_mini import compare_outputs
from scripts.student_mini_gpu_protocol_sources import protocol_env,protocol_events
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
O=R/'8-本轮实验/GPU整机协议-20261108';B=json.loads((O/'build.json').read_text());assert B['status']=='PROTOCOL_BUILD_AND_CONTROL_PASS';W=Path(B['work']);v=S.parent/'data/golden/vectors.jsonl';gold=[json.loads(s) for s in v.read_text().splitlines()];bindings=B['binary_bindings'];state={'status':'RUNNING','goal_records':90,'scope':'MINI-31/32/33 on fresh macro-bound actual-fault-adapter GPU under locked Verilator5.040; no original physical signoff claim','bindings':bindings,'golden_sha256':hashlib.sha256(v.read_bytes()).hexdigest(),'records':[]};start=time.monotonic()
previous=json.loads((O/'status.json').read_text()) if (O/'status.json').exists() else None
prior={x['ordinal']:x for x in previous.get('records',[])} if previous else {}
assert not previous or previous['bindings']==bindings
if previous:
 history=O/'resume-history';history.mkdir(exist_ok=True);(history/(str(time.time_ns())+'.json')).write_text(json.dumps(previous,indent=2))
state['resumed_validated_records']=len(prior)
B['run_command']=B['run_command'].replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R))
B['input_directory']=B['input_directory'].replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R))
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save():
 state['elapsed_seconds']=time.monotonic()-start;state['resource_snapshot']=snapshot();(O/'status.json').write_text(json.dumps(state,indent=2))
try:
 assert all(sha(Path(p))==h for p,h in bindings.items())
 selected=[i for i,g in enumerate(gold) if g['case']['id'].endswith(('MINI-31','MINI-32','MINI-33'))];assert len(selected)==90
 # Smoke all nine case families before spending time on remaining seeds.
 selected=sorted(selected,key=lambda i:(gold[i]['seed']!=1,i))
 for i in selected:
  g=gold[i];f=O/f'{i:04d}.log';params=protocol_env(g);cmd=B['run_command'].replace('@OPTS@',f"{B['input_directory']}/inputs.bin {i} 1").replace('./student_mini',str(W/'student_mini'));t=time.monotonic()
  if i in prior:
   assert sha(f)==prior[i]['log_sha256'],'saved protocol log changed'
   text=f.read_text(errors='replace');code=0
  else:
   if f.exists():
    h=O/'interrupted-logs';h.mkdir(exist_ok=True);f.rename(h/(f.stem+'-'+str(time.time_ns())+'.log'))
   with f.open('w') as log:
    child=subprocess.Popen(['bash','-c',cmd],cwd=W,env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='150',STUDENT_MINI_PROTOCOL=params),stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
    try:code=child.wait(timeout=210)
    except subprocess.TimeoutExpired:os.killpg(child.pid,signal.SIGTERM);child.wait();code='TIMEOUT'
   text=f.read_text(errors='replace');assert code==0,'process failed '+str(i)
  lines=[x for x in text.splitlines() if x.startswith('STUDENT_GPU ')];assert len(lines)==1 and lines[0].startswith(f'STUDENT_GPU ordinal={i} ') and f'STUDENT_GPU_COMPLETE start={i} count=1' in text
  a=parse(lines[0].replace(f'ordinal={i} ','ordinal=0 ',1)+'\nSTUDENT_GPU_COMPLETE start=0 count=1\n',1)[0];e=g['golden'];assert a['actual_status']==e['expected_status'];assert compare_outputs(e['output_values'],a['actual'],e['output_bits'],a['actual_bits'])['status']=='PASS'
  if g['case']['operator']=='p1':assert a['selected']==[n for ids in e['selected_token_ids'] for n in ids]
  events=protocol_events(text);p=g['inputs']['protocol'];assert events['complete'] and events['stability_violations']==0 and events['commands']==events['responses'] and events['commands']>0
  assert [events['bp_prob'],events['bp_seed'],events['hold']]==[int(x) for x in params.split(',')[:3]]
  if p['backpressure_probability']>0:assert events['stalled_req_cycles']>0 and events['stalled_rsp_cycles']>0
  if p['response_hold_cycles']>0:assert events['held_rsp_cycles']>=p['response_hold_cycles']
  if p['reset_and_reissue']:
   assert len(events['resets'])==len(events['reissues'])==1 and events['resets'][0]=={'busy_cycles':64,'busy_at_reset':1} and events['reissues'][0]['busy_after_start']==1 and events['reissues'][0]['dcr_writes']>0
  else:assert not events['resets'] and not events['reissues']
  status=re.findall(r'STUDENT_GPU_DEVICE_STATUS fault=([01]) busy=([01])',text);assert status and all(x==('0','0') for x in status)
  state['records'].append({'ordinal':i,'case_id':g['case']['id'],'seed':g['seed'],'pass':True,'protocol_parameters':params,'protocol_events':events,'actual':a,'seconds':prior[i]['seconds'] if i in prior else time.monotonic()-t,'reused_validated_record':i in prior,'log_sha256':sha(f)});save();print(json.dumps({'case_id':g['case']['id'],'seed':g['seed'],'passed':len(state['records'])}),flush=True)
 assert all(sha(Path(p))==h for p,h in bindings.items());state.update(status='WHOLE_GPU_PROTOCOL_90_PASS',formal_baseline=False,physical_signoff=False)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k not in ['records','bindings']},indent=2))
