"""Build a portable submission; omit installed dependencies and transient builds."""
from pathlib import Path
import argparse,hashlib,json,zipfile,os
R=Path(__file__).resolve().parent
parser=argparse.ArgumentParser();parser.add_argument('--build',action='store_true');a=parser.parse_args()
excluded={'.git','.venv','__pycache__','本轮维护脚本','tools','downloads','toolchain-metadata','vortex-toolchain-prebuilt'}
files=[]
for folder,dirs,names in os.walk(R,topdown=True,followlinks=False):
    parent=Path(folder);relparent=parent.relative_to(R)
    dirs[:]=[d for d in dirs if d not in excluded and not (parent==R and d=='student-mini-v1-cpu-gpu') and not (d=='build' and relparent.parts and relparent.parts[0]=='student-mini-v1-cpu-gpu') and not (d=='vortex' and relparent.parts and relparent.parts[0]=='9-GPU复现')]
    for name in names:
        p=parent/name
        if p.suffix in ['.zip','.partial'] or '.joined.tar.' in p.name or p.name=='SUBMISSION-SHA256SUMS':continue
        files.append(p)
summary={'files':len(files),'bytes':sum(p.stat().st_size for p in files),'excluded':sorted(excluded),'scope':'working source and raw evidence; installed toolchains rebuilt from pinned recipes','build_requested':a.build}
if a.build:
    with zipfile.ZipFile(R/'RouteB-阶段性交付.zip','w',compression=zipfile.ZIP_DEFLATED,compresslevel=4) as z:
        hashes=[]
        for p in files:
            rel=p.relative_to(R).as_posix();hashes.append(hashlib.sha256(p.read_bytes()).hexdigest()+'  '+rel);z.write(p,rel)
        digest='\n'.join(hashes)+'\n';z.writestr('SUBMISSION-SHA256SUMS',digest)
    (R/'SUBMISSION-SHA256SUMS').write_text(digest,encoding='utf-8');summary['archive']='RouteB-阶段性交付.zip'
print(json.dumps(summary,ensure_ascii=False,indent=2))