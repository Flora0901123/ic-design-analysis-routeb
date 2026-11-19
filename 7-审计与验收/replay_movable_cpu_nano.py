from pathlib import Path
import json,hashlib,shutil,time,os,subprocess,queue,threading,signal,re
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=R/'8-本轮实验/Nano冻结问题双端验收-20261108';O=R/'8-本轮实验/NanoCPU可搬移运行包-20261109';O.mkdir(exist_ok=True);P=O/'package';P.mkdir(exist_ok=True);C=P/'common';C.mkdir(exist_ok=True);sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
sealed=json.loads((S/'evidence-sha256.json').read_text());rows=json.loads((S/'completion.json').read_text())['records'];cpu=json.loads((R/'8-本轮实验/Nano冻结问题CPU目标-20261108/status.json').read_text());work=Path(cpu['records'][0]['work'].replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R)));gate=work/'soc/gateware';guard=json.loads((S/'00/rtl-reuse.json').read_text())['guard_files'];assert sha(gate/'sim_config.js')==guard['sim_config.js']
for f in (S/'common').rglob('*'):
 if f.is_file() and (f.name=='Vsim' or f.suffix=='.so'):
  rel=f.relative_to(S);assert sha(f)==sealed[rel.as_posix()];dest=P/rel;dest.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(f,dest);dest.chmod(0o755)
shutil.copy2(gate/'sim_config.js',C/'sim_config.js')
for row in rows:
 n=f"{row['index']:02d}";d=P/'cases'/n;d.mkdir(parents=True,exist_ok=True)
 for f in (S/n/'gateware').glob('*.init'):
  assert sha(f)==sealed[f.relative_to(S).as_posix()];shutil.copy2(f,d/f.name)
 for name in ['cpu-console.log','input-image/manifest.json']:
  f=S/n/name;assert sha(f)==sealed[f.relative_to(S).as_posix()];dest=d/Path(name).name;shutil.copy2(f,dest)
manifest={p.relative_to(P).as_posix():sha(p) for p in P.rglob('*') if p.is_file()};(P/'SHA256.json').write_text(json.dumps(manifest,indent=2));(P/'questions.json').write_text(json.dumps(rows,ensure_ascii=False,indent=2));state={'status':'RUNNING','scope':'same-host clean-directory replay of copied target binaries and input fixtures; no old build directory used by target','records':[]};start=time.monotonic();token_re=re.compile(r'^STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+).*?hidden=([0-9a-f,]+) logits=([0-9a-f,]+)$',re.M);summary_re=re.compile(r'^STUDENT_NATIVE_CPU status=.*$',re.M)
def save():state['elapsed_seconds']=time.monotonic()-start;state['resource_snapshot']=snapshot();(O/'completion.json').write_text(json.dumps(state,ensure_ascii=False,indent=2))
try:
 for row in rows:
  index=row['index'];n=f'{index:02d}';cwd=O/'clean-runtime'/n;cwd.mkdir(parents=True,exist_ok=False);shutil.copy2(C/'Vsim',cwd/'Vsim');shutil.copy2(C/'sim_config.js',cwd/'sim_config.js');shutil.copytree(C/'modules',cwd/'modules')
  for f in (P/'cases'/n).glob('*.init'):shutil.copy2(f,cwd/f.name)
  transcript=O/f'replay-{n}.log';assert not transcript.exists();env=dict(os.environ,LD_DEBUG='files');env.pop('LD_PRELOAD',None);env.pop('LD_LIBRARY_PATH',None);t=time.monotonic();child=subprocess.Popen([str(cwd/'Vsim')],cwd=cwd,env=env,stdout=subprocess.PIPE,stderr=subprocess.STDOUT,text=True,errors='replace',start_new_session=True);messages=queue.Queue()
  def drain():
   for line in child.stdout:messages.put(line)
   messages.put(None)
  threading.Thread(target=drain,daemon=True).start();complete=False;deadline=time.monotonic()+600
  with transcript.open('w',buffering=1) as log:
   while time.monotonic()<deadline:
    try:line=messages.get(timeout=1)
    except queue.Empty:continue
    if line is None:break
    log.write(line)
    if line.startswith('STUDENT_NATIVE_CPU_COMPLETE '):complete=True;break
  if child.poll() is None:os.killpg(child.pid,signal.SIGTERM);child.wait(timeout=10)
  assert complete,('target completion missing',index)
  text=transcript.read_text();original=(P/'cases'/n/'cpu-console.log').read_text();actual=token_re.findall(text);expected=token_re.findall(original);assert actual==expected and len(actual)==row['target_steps'];assert summary_re.findall(text)==summary_re.findall(original),'logical target counters changed'
  loaded=[l.strip() for l in text.splitlines() if 'calling init:' in l and '.so' in l];assert any('modules/clocker.so' in l for l in loaded) and any('modules/serial2console.so' in l for l in loaded),'target modules not observed'
  assert not any('/home/' in l or '/root/.cache' in l or 'nano-baseline-' in l for l in loaded),'old private runtime dependency observed'
  state['records'].append({'index':index,'question':row['question'],'token_hidden_logits_bit_identical':True,'target_logical_counters_identical':True,'target_steps':len(actual),'loaded_libraries':loaded,'seconds':time.monotonic()-t,'log_sha256':sha(transcript),'explicit_target_completion_seen':True,'stopped_only_after_completion':True});save();print(json.dumps({'clean_CPU_passed':len(state['records']),'question':row['question']},ensure_ascii=False),flush=True)
 assert all(sha(P/p)==h for p,h in manifest.items());state.update(status='MOVABLE_CPU_BINARY_CLEAN_DIRECTORY_12_PASS',total_steps=sum(x['target_steps'] for x in state['records']),full_clean_toolchain_install=False,different_computer=False,final_submission=False)
except Exception as e:state.update(status='FAILED',error=f'{type(e).__name__}: {e}')
save();print(json.dumps({k:v for k,v in state.items() if k not in ['records','resource_snapshot']},ensure_ascii=False,indent=2))