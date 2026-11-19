from pathlib import Path
import subprocess,os,json,shutil
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/locked-verilator-5.040';old=O/'build-source';p=O/'attempt-20261107'
# This PID was observed as the sole task-owned archive extraction process.
try:os.kill(329,15)
except ProcessLookupError:pass
(p/'extraction-interrupted.json').write_text(json.dumps({'status':'EXTRACTION_INTERRUPTED_FOR_IO_COST','reason':'NTFS extraction still blocked after 7 minutes; switch generated build cache to persistent WSL ext4, retain partial files and original logs','old_cache':str(old)},indent=2))
s=(R/'7-审计与验收/build_locked_tool_durable.py').read_text()
s=s.replace("cache=O/'build-source'", "cache=Path('/root/.cache/routeb-verilator-5.040')")
s=s.replace("if not work.exists():", "if not (cache/'archive-sha256').exists():")
s=s.replace("with tarfile.open(A) as t:t.extractall(cache,filter='data')", "with tarfile.open(A) as t:t.extractall(cache,filter='data')\n (cache/'archive-sha256').write_text(expected)")
s=s.replace("('build',['make','-j2']),('install',['make','install'])", "('build-opt',['make','-C','src','-j2','opt']),('install-opt',['make','install-all','VL_INST_PUBLIC_BIN_FILES=verilator_bin'])")
s=s.replace("'scope':'locked tool build", "'build_profile':'official optimized binary; debug and coverage binaries intentionally omitted to bound disk cost','scope':'locked tool build")
(R/'7-审计与验收/build_locked_tool_durable.py').write_text(s)
print('Switched build cache; starting durable optimized build',flush=True)
subprocess.run(['python3',str(R/'7-审计与验收/build_locked_tool_durable.py')],check=True)
