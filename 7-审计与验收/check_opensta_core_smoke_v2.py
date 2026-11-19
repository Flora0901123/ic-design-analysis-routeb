from pathlib import Path
import subprocess,json,hashlib,time,re
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/OpenSTA核心冒烟-20261110-v2';O.mkdir(exist_ok=False);W=Path('/root/.cache/routeb-opensta-20261110');state=dict(status='RUNNING',scope='279 upstream network tests plus 5 selected Liberty tests; not full upstream suite or GPU STA qualification',records=[],physical_signoff=False)
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
try:
 for sub,name,extra in [('network','TestNetwork',[]),('liberty','TestLibertyStaBasics',['--gtest_filter=StaLibertyTest.LibraryNotNull:StaLibertyTest.CellArea:StaLibertyTest.CellHasTimingArcs:StaLibertyTest.CellFindLibertyPort:StaLibertyTest.LibraryUnits'])]:
  b=W/'build'/sub/'test/cpp'/name;t=time.monotonic()
  try:
   p=subprocess.run([str(b),*extra],cwd=W/'source',stdout=subprocess.PIPE,stderr=subprocess.STDOUT,timeout=60);raw=p.stdout
  except subprocess.TimeoutExpired as e:
   (O/(name+'.log')).write_bytes(e.stdout or b'');raise
  (O/(name+'.log')).write_bytes(raw);assert p.returncode==0 and b'[  PASSED  ]' in raw
  passed=int(re.findall(rb'\[  PASSED  \]\s+(\d+) tests?\.',raw)[-1]);state['records'].append(dict(test=name,filter=extra,result='PASS',tests_passed=passed,binary_sha256=sha(b),log_sha256=hashlib.sha256(raw).hexdigest(),seconds=time.monotonic()-t))
 state['status']='OPENSTA_284_SELECTED_CORE_TESTS_PASS'
except Exception as e:state.update(status='FAILED_NOT_QUALIFIED',error=f'{type(e).__name__}: {e}')
state['resources']=snapshot();(O/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2));print(json.dumps({k:v for k,v in state.items() if k!='resources'},ensure_ascii=False,indent=2));raise SystemExit(0 if state['status']=='OPENSTA_284_SELECTED_CORE_TESTS_PASS' else 1)