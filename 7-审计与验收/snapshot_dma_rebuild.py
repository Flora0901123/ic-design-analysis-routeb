from pathlib import Path
import json,shutil,hashlib
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';C=Path('/root/.cache/routeb-dma-rebuild/platform-build')
for w in C.iterdir():
 if not w.is_dir():continue
 q=O/'platform-attempts'/w.name;q.mkdir(parents=True,exist_ok=True)
 for p in [*w.glob('*.log'),*w.glob('*.json'),*w.glob('*.sh')]:
  if p.is_file():shutil.copyfile(p,q/p.name)
 private=w/'source/sim/rtlsim'
 if private.exists():
  for n in ['Makefile','processor.cpp','rtlsim_shim.sv','physical-top.sv']:
   p=private/n
   if p.is_file():shutil.copyfile(p,q/n)
m=O/'staged-openram-banked-manifest.json';d=json.loads(m.read_text());test=O/'model-tests/completion.json'
if test.exists() and json.loads(test.read_text())['status']=='FUNCTIONAL_MODEL_TESTS_PASS':d['status']='FUNCTIONAL_MODEL_UNIT_TESTS_PASS_NOT_WHOLE_GPU';d['test_evidence']='model-tests/completion.json';m.write_text(json.dumps(d,indent=2))
print('Copied attempt logs and source derivations to delivery directory')
