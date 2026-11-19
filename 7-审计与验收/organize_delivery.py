from pathlib import Path
import json,os,hashlib,datetime
R=Path(__file__).resolve().parents[1];A=R/'7-审计与验收/整理记录-20261105';A.mkdir(exist_ok=True)
# Enumerate once. Evidence/immutable references and runtime binaries are not cleanup candidates.
protected=[];inventory=[]
for root,dirs,names in os.walk(R,followlinks=False):
 p=Path(root);rel=p.relative_to(R)
 dirs[:]=[d for d in dirs if d not in {'.git','.venv','__pycache__'} and not (p==R/'9-GPU复现' and d in {'tools','vortex','downloads','vortex-toolchain-prebuilt'}) and not (p==R/'student-mini-v1-cpu-gpu/sources' and d=='build') and not p.is_relative_to(A)]
 for n in names:
  f=p/n
  if f.is_symlink() or n.endswith(('.pyc','.pyo')):continue
  try:size=f.stat().st_size
  except OSError:continue
  inventory.append({'path':f.relative_to(R).as_posix(),'bytes':size})
  if rel.parts and rel.parts[0] in ['1-技术栈与环境','2-CPU算子与Nano复现','3-优化链-P1','4-六baseline证据','5-技术报告','6-源码引用','7-审计与验收','8-本轮实验'] and not f.is_relative_to(A):protected.append(f)
# Full hashes of original documents, experiment logs, inputs, compiled artifacts and reference bundle.
before={str(p.relative_to(R)):hashlib.sha256(p.read_bytes()).hexdigest() for p in protected}
(A/'整理前保留文件SHA256.json').write_text(json.dumps(before,ensure_ascii=False,indent=2),encoding='utf-8');(A/'整理前文件清单.json').write_text(json.dumps(inventory,ensure_ascii=False,indent=2),encoding='utf-8')
base=R/'9-GPU复现';records=json.loads((base/'toolchain-downloads.json').read_text(encoding='utf-8'));deleted=[]
for archive in sorted(base.glob('*.joined.tar.bz2')):
 comp=archive.name.split('.joined.tar.')[0];marker=base/'tools'/comp/'.routeb-extracted.json';assert marker.exists(),'missing extracted marker '+comp
 rows=sorted([x for x in records if x['path'].startswith(comp+'/')],key=lambda x:x['path']);assert rows,comp
 joined=hashlib.sha256()
 for row in rows:
  part=base/'downloads'/row['path'];assert part.exists();h=hashlib.sha256()
  with part.open('rb') as f:
   for block in iter(lambda:f.read(1024**2),b''):h.update(block);joined.update(block)
  assert h.hexdigest()==row['sha256'],'download fragment changed'
 h=hashlib.sha256()
 with archive.open('rb') as f:
  for block in iter(lambda:f.read(1024**2),b''):h.update(block)
 assert h.hexdigest()==joined.hexdigest(),'merged archive differs from retained fragments'
 target=archive.resolve();assert target.is_relative_to(R.resolve()) and target.parent==base.resolve()
 deleted.append({'path':archive.relative_to(R).as_posix(),'bytes':archive.stat().st_size,'sha256':h.hexdigest(),'reason':'已解压且与保留下载分片逐字节相同的合并缓存','rebuild':'WSL: python3 9-GPU复现/extract_tools.py；已有解压标记会跳过，重新解压时可由保留分片合并生成'})
 archive.unlink()
for base_dir in [R/'3-优化链-P1',R/'7-审计与验收',R/'student-mini-v1-cpu-gpu/sources/scripts',R/'student-mini-v1-cpu-gpu/sources/shared/python']:
 if not base_dir.exists():continue
 for cache in base_dir.rglob('__pycache__'):
  if not cache.is_dir() or cache.is_symlink():continue
  for p in cache.glob('*.pyc'):
   target=p.resolve();assert target.is_relative_to(R.resolve());deleted.append({'path':p.relative_to(R).as_posix(),'bytes':p.stat().st_size,'sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'reason':'可由保留Python源码自动再生成的字节码缓存'});p.unlink()
  if not any(cache.iterdir()):cache.rmdir()
# Derivative syntax-check copy only; the actual HTML source and verification record remain.
p=R/'7-审计与验收/成果页脚本校验.js'
if p.exists():
 import re
 source=(R/'成果汇报与考核对照.html').read_text(encoding='utf-8');js=re.findall(r'<script>(.*?)</script>',source,re.S)[-1]
 if p.read_text(encoding='utf-8').strip()==js.strip():
  deleted.append({'path':p.relative_to(R).as_posix(),'bytes':p.stat().st_size,'sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'reason':'与保留HTML内联脚本相同的临时语法校验副本'});p.unlink()
(A/'删除清单.json').write_text(json.dumps(deleted,ensure_ascii=False,indent=2),encoding='utf-8')
changed=[str(p.relative_to(R)) for p in protected if not p.exists() or hashlib.sha256(p.read_bytes()).hexdigest()!=before[str(p.relative_to(R))]];assert not changed,changed
result={'status':'PASS','preserved_files_hashed':len(before),'preserved_files_unchanged':True,'deleted_files':len(deleted),'deleted_bytes':sum(x['bytes'] for x in deleted),'scope':'仅重复合并下载缓存、工作Python字节码、已验证重复的临时JS；不删除参考包、日志、失败记录、源码、固件、仿真器、工具链或下载分片'}
(A/'整理后保留核对.json').write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8');print(json.dumps(result,ensure_ascii=False),flush=True)
