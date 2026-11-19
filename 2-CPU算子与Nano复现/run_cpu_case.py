"""Compatibility entry for fresh CPU input replay; default all 1000 inputs."""
import subprocess,sys
from pathlib import Path
limit=sys.argv[1] if len(sys.argv)>1 else '1000'
raise SystemExit(subprocess.call([sys.executable,str(Path(__file__).resolve().parents[1]/'reproduce.py'),'cpu','--limit',limit]))
