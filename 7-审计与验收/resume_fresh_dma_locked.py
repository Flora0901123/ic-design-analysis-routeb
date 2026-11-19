from pathlib import Path
import subprocess
R=Path(__file__).resolve().parents[1];C=Path('/root/.cache/routeb-dma-rebuild');T=C/'locked-tools';T.mkdir(exist_ok=True)
for q in (R/'9-GPU复现/tools').iterdir():
 p=T/q.name
 if not p.exists():p.symlink_to(R/'9-GPU复现/tools/verilator-5.040' if q.name=='verilator' else q,target_is_directory=q.is_dir())
p=R/'7-审计与验收/build_fresh_dma_platform.py';s=p.read_text();s=s.replace("Path('/tmp/routeb-dma-tools')", "Path('/root/.cache/routeb-dma-rebuild/locked-tools')");p.write_text(s);subprocess.run(['python3',str(p)],check=True)
