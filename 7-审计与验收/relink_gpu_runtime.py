from pathlib import Path
import shlex,re,json,subprocess,hashlib
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';out=R/'8-本轮实验/gpu-topk全100案例-20261104T140209Z/gpu-simx';prior=R/'8-本轮实验/全100案例双后端-20261104T134332Z/gpu-simx/execute.log'
line=next(x for x in prior.read_text().splitlines() if x.startswith('ccache g++ ') and ' -shared ' in x and x.rstrip().endswith('/libsimx.so'))
cmd=shlex.split(line);objs=[Path(x) for x in cmd if x.endswith('.o')]
assert len(objs)>30
missing=[str(x) for x in objs if not x.exists() or not x.stat().st_size];assert not missing,missing
state=json.loads((out/'status.json').read_text());candidate=Path(state['work']);cache=candidate/'vortex-build/sw/runtime'
original=R/'student-mini-v1-cpu-gpu/sources/build/student-mini/native-gpu/a6e2b2f44258a0a7f694d57f18f00ea059d99b7767d103b29dbe9f2b4c5dac17/vortex-build/sw/runtime'
# Only filesystem aliases changed in the common runtime build configuration.
# Inspect the stamp and link objects, leaving all sources and object timestamps intact.
stamp=(cache/'simx_config.stamp').read_text()
assert '-DVX_CFG_NUM_CORES=1' in stamp and '-DVX_CFG_NUM_WARPS=2' in stamp and '-DVX_CFG_NUM_THREADS=4' in stamp and '-DVX_CFG_FPU_TYPE=STD' in stamp
report={'action':'relink existing simulator objects; no arithmetic or architecture source modification','original_link_command':line,'objects':{str(p):hashlib.sha256(p.read_bytes()).hexdigest() for p in objs},'config_stamp':stamp}
with (out/'runtime-relink.log').open('w') as f:subprocess.run(cmd,cwd=candidate/'vortex-build/sim/simx',stdout=f,stderr=subprocess.STDOUT,check=True)
report['library_sha256']=hashlib.sha256((cache/'libsimx.so').read_bytes()).hexdigest();(out/'runtime-relink.json').write_text(json.dumps(report,indent=2))
print('Relinked simulator:',report['library_sha256'],flush=True)
raise SystemExit(subprocess.call(['python3',str(R/'7-审计与验收/resume_gpu_topk.py')]))
