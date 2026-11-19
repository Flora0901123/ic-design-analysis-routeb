from pathlib import Path
import json,shutil,hashlib,subprocess
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/Nano冻结问题GPU目标-20261108';S=R/'student-mini-v1-cpu-gpu/sources';d=json.loads((O/'status.json').read_text());assert d['status']=='FROZEN_GPU_SIMX_12_PASS' and len(d['records'])==12 and all(x['pass'] for x in d['records'])
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
for row in d['records']:
 q=O/f"{row['index']:02d}";W=Path(row['work']);assert sha(q/'execute.log')==row['log_sha256'] and sha(q/'image/image.bin')==row['image_sha256'] and sha(W/'native_nano')==row['executable_sha256'];a=q/'kernel-source-and-binary';a.mkdir(exist_ok=True)
 for name in ['native_nano.cu','native_nano','device_compat.cc','common.h','Makefile','manifest.json']:shutil.copy2(W/name,a/name)
c=O/'common-source-and-runtime';c.mkdir(exist_ok=True)
for name in ['software/student_mini_native_nano.c','software/include/student_mini_native_nano.h','software/include/numeric_luts.h','integration/vortex/student_mini_native_host.inc','scripts/prepare_student_mini_native_gpu.py']:
 f=c/Path(name).name;f.write_bytes((S/name).read_bytes())
old=json.loads((R/'8-本轮实验/sqrt3-vortex-1793256475787480420/status.json').read_text());runtime=Path(old['work'])/'vortex-build/sw/runtime'
for f in runtime.glob('*.so'):shutil.copy2(f,c/f.name)
versions={'vortex_commit':subprocess.check_output(['git','-c','safe.directory='+str(R/'9-GPU复现/vortex'),'-C',str(R/'9-GPU复现/vortex'),'rev-parse','HEAD'],text=True,timeout=20).strip(),'working_tree_diff_status':'UNVERIFIED: read-only git diff exceeded 90 seconds; no clean-tree claim','source_snapshot_scope':['sim/simx','sim/common','sw/common','sw/runtime'],'source_sha256':{}}
for folder in versions['source_snapshot_scope']:
 for f in (R/'9-GPU复现/vortex'/folder).rglob('*'):
  if f.is_file() and f.suffix in ['.cc','.cpp','.h','.hpp','.inc'] and not any(x in ['build','obj','obj_dir'] for x in f.parts):versions['source_sha256'][str(f.relative_to(R/'9-GPU复现/vortex'))]=sha(f)
(c/'source-version.json').write_text(json.dumps(versions,indent=2))

manifest={p.relative_to(O).as_posix():sha(p) for p in O.rglob('*') if p.is_file() and p.name not in ['evidence-sha256.json','验收结论.json']};(O/'evidence-sha256.json').write_text(json.dumps(manifest,indent=2));(O/'验收结论.json').write_text(json.dumps({'status':'FROZEN_GPU_SIMX_12_PASS','records':12,'domains':4,'checkpoint_sha256':d['checkpoint_sha256'],'actual_target_execution':True,'expected_tokens_in_device_image':False,'performance_eligible':False,'standalone_general_math_ability_claimed':False,'second_machine_reproduction_claimed':False,'sealed_artifacts':len(manifest)},ensure_ascii=False,indent=2));print(json.dumps({'status':'SEALED','artifacts':len(manifest)}))
