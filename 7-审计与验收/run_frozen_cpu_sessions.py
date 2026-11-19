from pathlib import Path
import subprocess,sys,json,os,hashlib,re,time,signal,shutil,threading,queue
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/Nano冻结问题CPU目标-20261108';O.mkdir(exist_ok=True);S=R/'student-mini-v1-cpu-gpu/sources';sessions=json.loads((S.parent/'data/nano/sessions.json').read_text())['cpu']['sessions'];state={'status':'RUNNING','backend':'VexRiscv RTL','scope':'12 frozen questions, rebuilt BIOS/input and fresh target reset, guarded reuse of unchanged RTL','records':[]};start=time.monotonic()
previous=json.loads((O/'status.json').read_text()) if (O/'status.json').exists() else None
prior={x['index']:x for x in previous.get('records',[])} if previous else {}
if previous:
 history=O/'resume-history';history.mkdir(exist_ok=True);(history/(str(time.time_ns())+'.json')).write_text(json.dumps(previous,ensure_ascii=False,indent=2))
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save():state['elapsed_seconds']=time.monotonic()-start;state['resources']=snapshot();(O/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
try:
 for index,case in enumerate(sessions):
  q=O/f'{index:02d}'
  if index in prior:
   row=dict(prior[index])
   for field in ['work','log']:row[field]=row[field].replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R))
   assert sha(Path(row['log']))==row['log_sha256'] and row['tokens']==case['expected_tokens']
   assert sha(Path(row['work'])/'image/image.bin')==row['image_sha256']
   assert sha(Path(row['work'])/'rtl-reuse.json')==row['rtl_reuse_receipt_sha256']
   state['records'].append(row);save();continue
  if q.exists():
   h=O/'interrupted-cases';h.mkdir(exist_ok=True);q.rename(h/(f'{index:02d}-'+str(time.time_ns())))
  q.mkdir(exist_ok=False)
  if index==0:
   W=R/'8-本轮实验/nano-baseline-1794142281175779126';gate=W/'soc/gateware';receipt=json.loads((W/'rtl-reuse.json').read_text());reference=Path(receipt['parent_simulator']).parents[1]
   for name,h in receipt['guard_files'].items():assert sha(gate/name)==h
   for name,h in receipt['reference_runtime_modules'].items():
    f=reference/name;assert sha(f)==h;target=gate/name;target.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(f,target);assert sha(target)==h
   assert sha(gate/'obj_dir/Vsim')==receipt['simulator_sha256']
   f=q/'execute.log';child=subprocess.Popen([str(gate/'obj_dir/Vsim')],cwd=gate,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,errors='replace',start_new_session=True);messages=queue.Queue()
   def drain():
    for line in child.stdout:messages.put(line)
    messages.put(None)
   threading.Thread(target=drain,daemon=True).start();deadline=time.monotonic()+600;complete=False
   try:
    with f.open('w',buffering=1) as log:
     while time.monotonic()<deadline:
      try:line=messages.get(timeout=1)
      except queue.Empty:continue
      if line is None:break
      log.write(line)
      if line.startswith('STUDENT_NATIVE_CPU_COMPLETE '):complete=True;break
   finally:
    if child.poll() is None:os.killpg(child.pid,signal.SIGTERM);child.wait(timeout=10)
   assert complete,'prepared CPU run did not complete';text=f.read_text()
  else:
   with (q/'runner.log').open('w') as log:code=subprocess.call([sys.executable,str(R/'7-审计与验收/run_frozen_cpu_nano_reuse.py'),'--question',case['question'],'--variant','baseline'],stdout=log,stderr=subprocess.STDOUT)
   assert code==0,'CPU runner failed '+str(index)
   answer=json.loads((q/'runner.log').read_text());W=Path(answer['out']);f=W/'console-000.log';text=f.read_text()
  tokens=re.findall(r'STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+)',text);summary=re.findall(r'STUDENT_NATIVE_CPU status=(\d+) count=(\d+) cycles=(\d+):(\d+)',text);actual=[int(x[1]) for x in tokens];assert actual==case['expected_tokens'] and len(summary)==1 and summary[0][:2]==('0',str(len(actual))) and [int(x[0]) for x in tokens]==list(range(len(actual))) and 'STUDENT_NATIVE_CPU_COMPLETE ' in text,'frozen CPU reply mismatch'
  m=json.loads((W/'image/manifest.json').read_text());assert m['contains_expected_tokens'] is False and sha(W/'image/image.bin')==m['image_sha256']
  state['records'].append({'index':index,'question':case['question'],'domain':case['domain'],'tokens':actual,'expected_tokens':case['expected_tokens'],'expected_text':case['expected_text'],'pass':True,'work':str(W),'log':str(f),'log_sha256':sha(f),'image_sha256':m['image_sha256'],'checkpoint_sha256':m['checkpoint_sha256'],'rtl_reuse_receipt_sha256':sha(W/'rtl-reuse.json')});save();print(json.dumps({'CPU_frozen_passed':len(state['records']),'question':case['question']},ensure_ascii=False),flush=True)
 state['status']='FROZEN_CPU_RTL_12_PASS'
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k!='records'},ensure_ascii=False,indent=2))
