from pathlib import Path
import shutil,ast,json,hashlib
R=Path(r'C:\Users\Camellia\Desktop\集成电路设计与分析-RouteB交付')
snap=R/'7-审计与验收/修改前快照'
def edit(rel,func):
    p=R/rel;backup=snap/rel
    if not backup.exists():backup.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(p,backup)
    p.write_text(func(p.read_text(encoding='utf-8')),encoding='utf-8',newline='\n')
for name in ['modify_nano.py','modify_p1.py']:
    rel='3-优化链-P1/'+name
    def local(s):
        import re
        return re.sub(r'Path\("/home/camellia/socai/student-mini-v1-cpu-gpu/sources/([^\"]+)"\)',r'Path(__file__).resolve().parents[1] / "student-mini-v1-cpu-gpu/sources/\1"',s)
    edit(rel,local)
edit('2-CPU算子与Nano复现/run_nano_cpu.py',lambda s:'''"""Compatibility entry for the local, auditable Nano runner."""
import subprocess,sys
from pathlib import Path
raise SystemExit(subprocess.call([sys.executable,str(Path(__file__).resolve().parents[1]/'nano.py'),*sys.argv[1:]]))
''')
edit('2-CPU算子与Nano复现/run_cpu_case.py',lambda s:'''"""Compatibility entry for fresh CPU input replay; default all 1000 inputs."""
import subprocess,sys
from pathlib import Path
limit=sys.argv[1] if len(sys.argv)>1 else '1000'
raise SystemExit(subprocess.call([sys.executable,str(Path(__file__).resolve().parents[1]/'reproduce.py'),'cpu','--limit',limit]))
''')
edit('2-CPU算子与Nano复现/gen_nano_image.py',lambda s:s.replace('Path("/home/camellia/socai/student-mini-v1-cpu-gpu/sources")','Path(__file__).resolve().parents[1] / "student-mini-v1-cpu-gpu/sources"').replace('CKPT = ROOT / "build/student-mini/native-nano/876398eac822028468e275044f350988a847429d5c3a2f3aed2be1e74ca47572/ptq.npz"','CKPT = next((Path(__file__).resolve().parents[1]/"8-本轮实验/历史原始证据归档/native-nano").glob("*/ptq.npz"))').replace('INPUTS = ROOT / "build/student-mini/native-nano/876398eac822028468e275044f350988a847429d5c3a2f3aed2be1e74ca47572/inputs.json"','INPUTS = CKPT.parent / "inputs.json"'))
# Syntax-check newly edited execution entries without importing or running them.
paths=[R/x for x in ['reproduce.py','nano.py','prepare_local.py','archive_history.py']]+list((R/'2-CPU算子与Nano复现').glob('*.py'))+list((R/'3-优化链-P1').glob('*.py'))
results=[]
for p in paths:
    try:ast.parse(p.read_text(encoding='utf-8'));results.append({'path':str(p.relative_to(R)),'syntax':'PASS'})
    except Exception as e:results.append({'path':str(p.relative_to(R)),'syntax':'FAIL','error':str(e)})
(R/'7-审计与验收/Python语法检查.json').write_text(json.dumps(results,ensure_ascii=False,indent=2),encoding='utf-8')
# Entrypoints support explicit interpreter reuse while a clean environment is being installed.
p=R/'nano.py';s=p.read_text(encoding='utf-8').replace("os.environ.update(PATH=str(S/'.venv/bin')", "py=pathlib.Path(os.environ.get('COURSE_PYTHON',str(S/'.venv/bin/python')))\n        state['python_executable']=str(py)\n        os.environ.update(PATH=str(py.parent)").replace("PYTHON=str(S/'.venv/bin/python')","PYTHON=str(py)");p.write_text(s,encoding='utf-8',newline='\n');ast.parse(s)
print(json.dumps({'syntax_checked':len(results),'failures':sum(x['syntax']=='FAIL' for x in results)}))
