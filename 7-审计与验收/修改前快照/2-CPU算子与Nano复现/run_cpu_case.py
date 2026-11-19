import os, subprocess, sys, time
from pathlib import Path

ROOT = Path("/home/camellia/socai/student-mini-v1-cpu-gpu/sources")
os.environ["PATH"] = str(ROOT / ".venv/bin") + ":" + os.environ.get("PATH", "")
os.environ["PYTHON"] = str(ROOT / ".venv/bin/python")

input_dir = "build/student-mini/input-images/bcf2f79f54e3aac5bda5a7b56898600757cbb88cb136f4cd4535852ceaac7e6f"
limit = sys.argv[1] if len(sys.argv) > 1 else "1"

cmd = [sys.executable, "scripts/run_student_mini_cpu.py", "--input-dir", input_dir, "--limit", limit]
print("$", " ".join(cmd), flush=True)
start = time.time()
r = subprocess.run(cmd, cwd=ROOT)
print(f"exit={r.returncode} elapsed={time.time()-start:.0f}s", flush=True)
