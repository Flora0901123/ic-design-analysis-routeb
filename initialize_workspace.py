"""Create the writable work copy from the preserved reference, never overwrite it."""
from pathlib import Path
import json,shutil
R=Path(__file__).resolve().parent;source=R/'6-源码引用/原始参考包';target=R/'student-mini-v1-cpu-gpu'
if not source.is_dir():raise SystemExit('missing preserved reference package')
if not target.exists():shutil.copytree(source,target);print('created independent work copy')
else:print('existing work copy retained')