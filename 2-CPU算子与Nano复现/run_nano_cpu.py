"""Compatibility entry for the local, auditable Nano runner."""
import subprocess,sys
from pathlib import Path
raise SystemExit(subprocess.call([sys.executable,str(Path(__file__).resolve().parents[1]/'nano.py'),*sys.argv[1:]]))
