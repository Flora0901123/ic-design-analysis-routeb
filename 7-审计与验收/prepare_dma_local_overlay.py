from pathlib import Path
import os,subprocess,signal,shutil,json
R=Path(__file__).resolve().parents[1];C=Path('/root/.cache/routeb-dma-rebuild');O=R/'9-GPU复现/整机DMA重建'
# Stop only the observed task-owned slow configure tree.
rows=[line.split(None,2) for line in subprocess.check_output(['ps','-eo','pid,ppid,args'],text=True).splitlines()[1:]];roots=[int(p) for p,pp,a in rows if a.startswith('python3 ') and a.endswith('/export_fresh_dma_boundary.py')];kill=set(roots)
while True:
 new={int(p) for p,pp,a in rows if int(pp) in kill}-kill
 if not new:break
 kill|=new
for p in sorted(kill,reverse=True):
 try:os.kill(p,signal.SIGTERM)
 except ProcessLookupError:pass
for name in ['export.log','configure.log','export-status.json']:
 p=O/name
 if p.exists():shutil.copyfile(p,O/('slow-ntfs-'+name))
source=C/'vendor-source'
if not source.exists():
 shutil.copytree(R/'9-GPU复现/vortex',source,symlinks=True,ignore=shutil.ignore_patterns('third_party','.git','obj_dir','build'))
 (source/'third_party').symlink_to(R/'9-GPU复现/vortex/third_party',target_is_directory=True)
p=R/'7-审计与验收/export_fresh_dma_boundary.py';s=p.read_text();s=s.replace("V=Path('/tmp/routeb-dma-vortex')", "V=C/'vendor-source'");s=s.replace("text=text.replace('find \"$source_dir\" -type d -path \"$source_pattern\"','find -L \"$source_dir\" -type d -path \"$source_pattern\"');",'');s=s.replace("'SOURCE_DIR=\"/tmp/routeb-dma-vortex\"'", "'SOURCE_DIR=\"'+str(V)+'\"'");p.write_text(s)
print('Private ext4 source overlay prepared',flush=True)
subprocess.run(['python3',str(p)],check=True)
