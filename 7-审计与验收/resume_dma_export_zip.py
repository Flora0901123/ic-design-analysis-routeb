from pathlib import Path
import zipfile,subprocess
R=Path(__file__).resolve().parents[1];C=Path('/root/.cache/routeb-dma-rebuild');V=C/'vendor-source';V.mkdir(exist_ok=True)
with zipfile.ZipFile(R/'9-GPU复现/整机DMA重建/vendor-source.zip') as z:z.extractall(V)
p=V/'third_party'
if not p.exists():p.symlink_to(R/'9-GPU复现/vortex/third_party',target_is_directory=True)
for p in V.rglob('*.sh'):p.chmod(0o755)
(V/'configure').chmod(0o755)
p=R/'7-审计与验收/export_fresh_dma_boundary.py';s=p.read_text();s=s.replace("V=Path('/tmp/routeb-dma-vortex')", "V=C/'vendor-source'");s=s.replace("text=text.replace('find \"$source_dir\" -type d -path \"$source_pattern\"','find -L \"$source_dir\" -type d -path \"$source_pattern\"');",'');s=s.replace("'SOURCE_DIR=\"/tmp/routeb-dma-vortex\"'", "'SOURCE_DIR=\"'+str(V)+'\"'");p.write_text(s)
subprocess.run(['python3',str(p)],check=True)
