from pathlib import Path
import subprocess,json,hashlib,time
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/OpenSTA核心冒烟-20261110';O.mkdir(exist_ok=False);W=Path('/root/.cache/routeb-opensta-20261110');rows=[]
assert subprocess.check_output(['git','rev-parse','HEAD'],cwd=W/'source',text=True).strip()=='f8e13cbf12d02a07a2d1ec4a64f3e6985b747eab'
for sub,name in [('network','TestNetwork'),('liberty','TestLibertyStaBasics')]:
 b=W/'build'/sub/'test/cpp'/name;assert b.is_file();t=time.monotonic();p=subprocess.run([str(b)],cwd=W/'source',stdout=subprocess.PIPE,stderr=subprocess.STDOUT,timeout=60);(O/(name+'.log')).write_bytes(p.stdout);assert p.returncode==0 and b'[  PASSED  ]' in p.stdout
 rows.append(dict(test=name,result='PASS',binary_sha256=hashlib.sha256(b.read_bytes()).hexdigest(),log_sha256=hashlib.sha256(p.stdout).hexdigest(),seconds=time.monotonic()-t))
state=dict(status='OPENSTA_SELECTED_CORE_TESTS_PASS',scope='Selected upstream core tests only; not full upstream suite and not GPU STA qualification',records=rows,resources=snapshot(),physical_signoff=False)
(O/'status.json').write_text(json.dumps(state,ensure_ascii=False,indent=2));print(json.dumps({k:v for k,v in state.items() if k!='resources'},ensure_ascii=False,indent=2))