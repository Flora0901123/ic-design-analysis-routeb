from pathlib import Path
import json,hashlib,time,shutil,os,sys
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];S=Path('/root/.cache/routeb-dma-rebuild/locked-tools/llvm-vortex/lib');T=Path('/dev/shm/routeb-llvm-libs-20261108');T.mkdir(exist_ok=True)
O=R/'8-本轮实验/GPU锁定编译器内存缓存-20261108';O.mkdir(exist_ok=True)
start=time.monotonic();records=[];copies={}
for f in sorted(S.glob('*.so*')):
 if not f.is_file():continue
 actual=f.resolve();dest=T/f.name
 if actual in copies:
  assert not dest.exists();os.link(copies[actual],dest)
 else:
  assert not dest.exists();shutil.copyfile(actual,dest);copies[actual]=dest
 h=hashlib.sha256(actual.read_bytes()).hexdigest();assert hashlib.sha256(dest.read_bytes()).hexdigest()==h
 records.append({'name':f.name,'source':str(actual),'bytes':actual.stat().st_size,'sha256':h})
state={'status':'BYTE_IDENTICAL_CACHE_READY_NOT_ADOPTED','cache':str(T),'records':records,'unique_bytes':sum(p.stat().st_size for p in copies.values()),'seconds':time.monotonic()-start,'resource_snapshot':snapshot()}
(O/'cache.json').write_text(json.dumps(state,indent=2));print(json.dumps({k:v for k,v in state.items() if k not in ['records','resource_snapshot']},indent=2))
