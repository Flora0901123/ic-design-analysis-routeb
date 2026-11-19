from pathlib import Path
import urllib.request,zipfile,hashlib,json,subprocess
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';O.mkdir(exist_ok=True);url='https://github.com/zachjs/sv2v/releases/download/v0.0.12/sv2v-Linux.zip';p=O/'sv2v-Linux-v0.0.12.zip'
if not p.exists():
 req=urllib.request.Request(url,headers={'User-Agent':'RouteB-course-rebuild'})
 with urllib.request.urlopen(req,timeout=90) as f:p.write_bytes(f.read())
cache=Path('/root/.cache/routeb-dma-rebuild');cache.mkdir(exist_ok=True)
with zipfile.ZipFile(p) as z:z.extractall(cache/'sv2v')
bins=list((cache/'sv2v').rglob('sv2v'));b=next(x for x in bins if x.is_file());b.chmod(0o755);version=subprocess.check_output([str(b),'--version'],text=True).strip();d={'url':url,'archive_sha256':hashlib.sha256(p.read_bytes()).hexdigest(),'binary':str(b),'version':version,'binary_sha256':hashlib.sha256(b.read_bytes()).hexdigest()};(O/'sv2v-source.json').write_text(json.dumps(d,indent=2));print(json.dumps(d))
