from pathlib import Path
import concurrent.futures,hashlib,json,os,queue,re,signal,statistics,subprocess,threading,time
R=Path(__file__).resolve().parents[1];B=R/'8-本轮实验';OUT=B/'Nano基线组合100次重复';OUT.mkdir(exist_ok=False)
NAMES={'baseline':'nano-baseline-1793253668984369265','combined':'nano-combined-1793254628177918766'}
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def save(p,d):
 tmp=p.with_suffix('.tmp');tmp.write_text(json.dumps(d,ensure_ascii=False,indent=2));tmp.replace(p)
def trial(name,folder):
 work=B/folder;out=OUT/name;out.mkdir();st=json.loads((work/'status.json').read_text());expected=st['runs'][0]['tokens']
 reference=(work/'console-000.log').read_text();pat=r'STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+).*?hidden=([0-9a-f,]+) logits=([0-9a-f,]+)';frozen=re.findall(pat,reference)
 sim=work/'soc/gateware/obj_dir/Vsim';gate=sim.parent.parent;bindings={str(p):sha(p) for p in [sim,work/'soc/software/bios/bios.elf',work/'student_mini_native_nano.c',work/'image/image.bin',*gate.glob('*.init')]};save(out/'bindings.json',bindings)
 state={'status':'RUNNING','variant':name,'source_run':folder,'requested':100,'completed':0,'primary_metric':'ttft_cycles','build_reused':True,'runs':[]};save(out/'status.json',state)
 try:
  for i in range(100):
   log=out/f'console-{i:03d}.log';p=subprocess.Popen([str(sim)],cwd=gate,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,errors='replace',bufsize=1,start_new_session=True);messages=queue.Queue()
   def drain(proc,q):
    for line in proc.stdout:q.put(line)
    q.put(None)
   threading.Thread(target=drain,args=(p,messages),daemon=True).start();lines=[];complete=False;start=time.monotonic()
   try:
    with log.open('w',buffering=1) as f:
     while time.monotonic()-start<300:
      try:line=messages.get(timeout=1)
      except queue.Empty:continue
      if line is None:break
      f.write(line);lines.append(line)
      if line.startswith('STUDENT_NATIVE_CPU_COMPLETE '):complete=True;break
   finally:
    if p.poll() is None:os.killpg(p.pid,signal.SIGTERM);p.wait(timeout=10)
   text=''.join(lines);assert complete and re.findall(pat,text)==frozen,'missing completion or full-tensor mismatch'
   tokens=re.findall(r'STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+) elapsed_cycles=(\d+):(\d+)',text);actual=[int(x[1]) for x in tokens];assert actual==expected and [int(x[0]) for x in tokens]==list(range(len(expected)))
   sm=re.findall(r'STUDENT_NATIVE_CPU status=(\d+) count=(\d+) cycles=(\d+):(\d+)',text);assert len(sm)==1 and int(sm[0][0])==0 and int(sm[0][1])==len(expected)
   elapsed=[(int(x[2])<<32)|int(x[3]) for x in tokens];intervals=[b-a for a,b in zip(elapsed,elapsed[1:])];assert min(intervals)>0
   state['runs'].append({'run':i,'ttft_cycles':elapsed[0],'per_token_decode_cycles':statistics.mean(intervals),'session_cycles':(int(sm[0][2])<<32)|int(sm[0][3]),'full_tensor_match':True,'console_sha256':sha(log)})
   state['completed']=i+1;save(out/'status.json',state)
   if (i+1)%10==0:print(json.dumps({'variant':name,'completed':i+1}),flush=True)
  assert all(sha(Path(n))==d for n,d in bindings.items()),'artifact changed'
  state.update(status='COMPLETE',metrics={key:{'mean':statistics.mean(x[key] for x in state['runs']),'min':min(x[key] for x in state['runs']),'max':max(x[key] for x in state['runs']),'stdev':statistics.pstdev(x[key] for x in state['runs'])} for key in ['ttft_cycles','per_token_decode_cycles','session_cycles']})
 except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
 save(out/'status.json',state);return state
save(OUT/'experiment.json',{'input':'一加一等于几','repeat_per_variant':100,'primary_metric':'ttft_cycles','scope':'fresh process and RTL reset per trial; same validated cached binary; host wall time not a performance metric','formal_baseline':False})
with concurrent.futures.ThreadPoolExecutor(max_workers=2) as pool:
 futures={pool.submit(trial,k,v):k for k,v in NAMES.items()};results={}
 for f in concurrent.futures.as_completed(futures):results[futures[f]]=f.result();save(OUT/'summary.json',results)
print(json.dumps({k:{'status':s['status'],'completed':s['completed'],'metrics':s.get('metrics'),'error':s.get('error')} for k,s in results.items()},ensure_ascii=False),flush=True)
