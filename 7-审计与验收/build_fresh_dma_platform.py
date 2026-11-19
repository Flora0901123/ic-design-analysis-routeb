from pathlib import Path
import json,hashlib,sys,subprocess,os
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';O=R/'9-GPU复现/整机DMA重建';C=Path('/root/.cache/routeb-dma-rebuild');K=O/'kernel';P=S/'build/student-mini/gpu/6f151dd40a110180994d750f3b6a5bce9ab06d18b2b75d92010d8ab0514d85cf'
assert (O/'project-banked.v').exists(),'binding not ready'
for alias,target in [('routeb-course-source',S),('routeb-dma-tools',R/'9-GPU复现/tools'),('routeb-verilator-5040-install',R/'9-GPU复现/tools/verilator-5.040')]:
 p=Path('/tmp')/alias
 if not p.exists():p.symlink_to(target,target_is_directory=True)
(O/'completion.json').write_text(json.dumps({'status':'FRESH_FUNCTIONAL_BOUNDARY_PENDING_REPLAY','formal_baseline':False,'physical_evidence_complete':False,'artifacts':{'project-banked.v':hashlib.sha256((O/'project-banked.v').read_bytes()).hexdigest()}}))
d=json.loads((P/'manifest.json').read_text());d['bindings']={str(K/n):hashlib.sha256((K/n).read_bytes()).hexdigest() for n in ['student_mini.cu','device_compat.cc','common.h']};(K/'manifest.json').write_text(json.dumps(d));p=K/'Makefile';p.write_text(p.read_text().replace(str(P),str(K)))
s=(S/'scripts/run_student_mini_gpu_platform_rtl.py').read_text();s=s.replace("ROOT = Path(__file__).resolve().parents[1]","ROOT = Path('/tmp/routeb-course-source')");s=s.replace('from scripts.assemble_student_mini_gpu_counters import PERF, DCACHE, MEMORY','PERF=DCACHE=MEMORY=None');s=s.replace("Path('/mnt/d/open-soc-ai-labs-vortex')","Path('/root/.cache/routeb-dma-rebuild/vendor-source')").replace("Path('/mnt/d/open-soc-ai-labs-vortex-tools')","Path('/root/.cache/routeb-dma-rebuild/locked-tools')");s=s.replace("ROOT / 'grading/evidence/vortex-physical/staged-openram-banked-manifest.json'",repr(str(O/'staged-openram-banked-manifest.json')));s=s.replace("staged = json.loads(staged_path.read_text())","staged_path=Path(staged_path);staged = json.loads(staged_path.read_text())");s=s.replace("ROOT / 'build/student-mini/gpu-platform-rtl' / key","Path('/root/.cache/routeb-dma-rebuild/platform-build') / key");s=s.replace("['git', '-C', str(SOURCE),", "['git', '-C', "+repr(str(R/'9-GPU复现/vortex'))+",");s=s.replace('quiet_macro(model.read_text())','model.read_text()');s=s.replace("env['PATH'] = str(TOOLS / 'verilator/bin') + ':' + env['PATH']","env['PATH'] = '/tmp/routeb-verilator-5040-install/bin:' + env['PATH'];env['VERILATOR_ROOT']='/tmp/routeb-verilator-5040-install/share/verilator'")
# Avoid configure traversing third-party build products through overlay symlinks.
s=s.replace("overlay_configure((SOURCE / 'configure').read_text())","(SOURCE / 'configure').read_text().replace('find \"$source_dir\" -type d -path \"$source_pattern\"', 'find -L \"$source_dir\" -path \"$source_dir/third_party\" -prune -o -type d -path \"$source_pattern\" -print')")
import re
s=re.sub(r"subprocess.check_output\(\['git'.*?text=True\)\.splitlines\(\)", "['configure']+[str(p.relative_to(SOURCE)) for folder in ['hw','sim','sw'] for p in (SOURCE/folder).rglob('*') if p.is_file()]",s,flags=re.S)
s=s.replace('VL_FLAGS += --timing','VL_FLAGS += -fno-dfg --timing')
p=C/'platform-producer.py';p.write_text(s);(O/'platform-producer.py').write_text(s)
with (O/'platform-build.log').open('w') as f:code=subprocess.call(['python3',str(p),'build','--boundary',str(O),'--functional',str(K)],stdout=f,stderr=subprocess.STDOUT)
print('platform build exit',code)
raise SystemExit(code)

