"""Replay copied VexRiscv RTL fixtures. Python standard library only."""
from pathlib import Path
import argparse,json,hashlib,os,subprocess,signal,time,threading,queue,re,shutil
from resource_guard import prepare,join,snapshot

def main():
 a=argparse.ArgumentParser(description=__doc__);a.add_argument('--output',type=Path);a.add_argument('--limit',type=int,default=12);x=a.parse_args();assert 1<=x.limit<=12
 prepare();join();P=Path(__file__).resolve().parent;O=x.output or P.parent/('replay-'+str(time.time_ns()));O=O.resolve();O.mkdir(parents=True,exist_ok=False)
 sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();manifest=json.loads((P/'SHA256.json').read_text());assert all(sha(P/n)==h for n,h in manifest.items()),'package SHA mismatch';rows=json.loads((P/'questions.json').read_text());state={'status':'RUNNING','scope':'same-host copied-binary replay in newly created directories','different_computer':False,'full_clean_toolchain_install':False,'expected_questions':x.limit,'records':[]};token_re=re.compile(r'^STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+).*?hidden=([0-9a-f,]+) logits=([0-9a-f,]+)$',re.M);summary_re=re.compile(r'^STUDENT_NATIVE_CPU status=.*$',re.M)
 def save():state['resources']=snapshot();(O/'completion.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
 try:
  for row in rows[:x.limit]:
   n=f"{row['index']:02d}";d=O/n;d.mkdir();shutil.copy2(P/'common/Vsim',d/'Vsim');(d/'Vsim').chmod(0o755);shutil.copy2(P/'common/sim_config.js',d/'sim_config.js');shutil.copytree(P/'common/modules',d/'modules')
   for f in (P/'cases'/n).glob('*.init'):shutil.copy2(f,d/f.name)
   env=dict(os.environ,LD_DEBUG='files');env.pop('LD_PRELOAD',None);env.pop('LD_LIBRARY_PATH',None);t=time.monotonic();child=subprocess.Popen([str(d/'Vsim')],cwd=d,env=env,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,errors='replace',start_new_session=True);messages=queue.Queue()
   def drain():
    for line in child.stdout:messages.put(line)
    messages.put(None)
   threading.Thread(target=drain,daemon=True).start();complete=False
   try:
    with (d/'console.log').open('w',buffering=1) as log:
     while time.monotonic()-t<600:
      try:line=messages.get(timeout=1)
      except queue.Empty:continue
      if line is None:break
      log.write(line)
      if line.startswith('STUDENT_NATIVE_CPU_COMPLETE '):complete=True;break
   finally:
    if child.poll() is None:os.killpg(child.pid,signal.SIGTERM);child.wait(timeout=10)
   assert complete,('target completion absent',n);actual=(d/'console.log').read_text();reference=(P/'cases'/n/'cpu-console.log').read_text();tokens=token_re.findall(actual);assert tokens==token_re.findall(reference) and len(tokens)==row['target_steps'];assert summary_re.findall(actual)==summary_re.findall(reference),'target counters changed';loaded=[l.strip() for l in actual.splitlines() if 'calling init:' in l and '.so' in l];assert any('modules/clocker.so' in l for l in loaded) and any('modules/serial2console.so' in l for l in loaded);assert not any('/home/' in l or '/root/.cache' in l or 'nano-baseline-' in l for l in loaded),'private dependency found'
   state['records'].append({'index':row['index'],'question':row['question'],'target_steps':len(tokens),'token_hidden_logits_and_target_counts_identical':True,'raw_log_sha256':sha(d/'console.log'),'seconds':time.monotonic()-t,'libraries_loaded':loaded});save();print({'passed':len(state['records']),'requested':x.limit},flush=True)
  state.update(status='PORTABLE_CPU_REPLAY_PASS',compared_steps=sum(v['target_steps'] for v in state['records']))
 except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
 save();print(json.dumps({k:v for k,v in state.items() if k not in ['records','resources']},ensure_ascii=False,indent=2));return 0 if state['status']=='PORTABLE_CPU_REPLAY_PASS' else 1
if __name__=='__main__':raise SystemExit(main())