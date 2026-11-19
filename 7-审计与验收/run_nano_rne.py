from pathlib import Path
import os,subprocess
R=Path(__file__).resolve().parents[1]
py='/home/camellia/socai/student-mini-v1-cpu-gpu/sources/.venv/bin/python'
env=dict(os.environ,COURSE_PYTHON=py,COURSE_LIBC_CACHE=str(R/'8-本轮实验/nano-topk-1793255650650794953/soc/software/libc'))
raise SystemExit(subprocess.call([py,str(R/'nano.py'),'--variant','rne','--question','一加一等于几'],env=env))
