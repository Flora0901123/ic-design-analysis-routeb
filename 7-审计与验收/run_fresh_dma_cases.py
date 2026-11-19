from pathlib import Path
import subprocess,os,json,time,re,signal,hashlib
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';C=Path('/root/.cache/routeb-dma-rebuild/platform-build');works=[p for p in C.iterdir() if (p/'build.json').is_file() and json.loads((p/'build.json').read_text())['status']=='GPU_PLATFORM_RTL_BUILD_STAGE_PASS'];assert works,'no accepted build';W=max(works,key=lambda p:p.stat().st_mtime);built=json.loads((W/'build.json').read_text());trace=json.loads((O/'trace-build/completion.json').read_text());assert trace['status']=='TRACE_BUILD_AND_CONTROL_PASS' and trace['work']==str(W);assert all(hashlib.sha256(Path(p).read_bytes()).hexdigest()==v for p,v in trace['new_bindings'].items());cmd=(W/'run-command.sh').read_text().strip();gold=[json.loads(x) for x in (R/'student-mini-v1-cpu-gpu/data/golden/vectors.jsonl').read_text().splitlines()];selected=[i for i,x in enumerate(gold) if x['case']['scenario']=='dma-error' or x['case']['id'].endswith('-01') and x['seed']==1];out=O/'whole-gpu-runs';out.mkdir(exist_ok=True);state={'status':'RUNNING','scope':'fresh reconstructed macro-bound GPU functional observation; post-error traffic/commit witnesses must be qualified separately','physical_reference_identity':False,'formal_eligible':False,'records':[]}
try:
 for i in selected:
  g=gold[i];f=out/f'{i:04d}.log';command=cmd.replace('@OPTS@',f"{built['input_directory']}/inputs.bin {i} 1").replace('./student_mini',str(W/'student_mini'));then=time.monotonic()
  with f.open('w') as log:
   p=subprocess.Popen(['bash','-c',command],cwd=W,env=dict(os.environ,VORTEX_PROFILING='0',VORTEX_CP_POLL_TIMEOUT_S='120'),stdout=log,stderr=subprocess.STDOUT,start_new_session=True)
   try:code=p.wait(timeout=180)
   except subprocess.TimeoutExpired:os.killpg(p.pid,signal.SIGTERM);p.wait();code='TIMEOUT'
  t=f.read_text(errors='replace');faults=re.findall(r'STUDENT_GPU_DEVICE_STATUS fault=([01]) busy=([01])',t);lines=[x for x in t.splitlines() if x.startswith('STUDENT_GPU ordinal=')];fault=bool(faults) and any(a=='1' for a,b in faults);isfault=g['case']['scenario']=='dma-error';observed=code==0 and len(lines)==1 and f'STUDENT_GPU_COMPLETE start={i} count=1' in t and (fault if isfault else not fault)
  match=re.fullmatch(r'STUDENT_GPU ordinal=(\d+) status=(\d+) primitive=(-?\d+) bits=([a-fA-F0-9,]*) selected=([0-9,]*)',lines[0]) if len(lines)==1 else None
  if match:
   actual_bits=[int(x,16) for x in match[4].split(',') if x];actual_ids=[int(x) for x in match[5].split(',') if x]
   if isfault:observed=observed and int(match[2])==6 and not actual_bits and not actual_ids
   else:
    expected_ids=[v for row in g['golden'].get('selected_token_ids',[]) for v in row]
    observed=observed and int(match[2])==0 and actual_bits==g['golden']['output_bits'] and (actual_ids==expected_ids if g['case']['operator']=='p1' else True)
  else:observed=False
  row={'ordinal':i,'case_id':g['case']['id'],'seed':g['seed'],'exit_code':code,'device_fault_observed':fault,'status_observation_ok':observed,'post_error_payload_and_commit_qualified':False,'seconds':time.monotonic()-then,'output':lines,'device_status_reads':faults,'log_sha256':hashlib.sha256(f.read_bytes()).hexdigest()};state['records'].append(row);(out/'status.json').write_text(json.dumps(state,indent=2));print(json.dumps(row),flush=True)
  if not observed:raise RuntimeError('actual GPU observation failed at '+str(i))
 state['status']='FUNCTIONAL_STATUS_OBSERVED_FULL_DMA_EVENTS_PENDING'
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
(out/'status.json').write_text(json.dumps(state,indent=2));print(state['status'])
