from pathlib import Path
import json,hashlib,re,shutil
R=Path(__file__).resolve().parents[1];C=R/'8-本轮实验/Nano冻结问题CPU目标-20261108';G=R/'8-本轮实验/Nano冻结问题GPU目标-20261108';O=R/'8-本轮实验/Nano冻结问题双端验收-20261108';O.mkdir(exist_ok=True)
def read(p):return json.loads(p.read_text())
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def canon(p):return Path(str(p).replace('/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付',str(R)))
c=read(C/'status.json');g=read(G/'status.json');assert c['status']=='FROZEN_CPU_RTL_12_PASS' and g['status']=='FROZEN_GPU_SIMX_12_PASS';assert len(c['records'])==len(g['records'])==12
pattern=re.compile(r'^STUDENT_NATIVE_TOKEN step=(\d+) token=(\d+).*?hidden=([0-9a-f,]+) logits=([0-9a-f,]+)$',re.M)
common=O/'common';common.mkdir(exist_ok=True);rows=[];total=0
for index,(cr,gr) in enumerate(zip(c['records'],g['records'])):
 assert cr['image_sha256']==gr['image_sha256']
 assert cr['index']==gr['index']==index and cr['question']==gr['question'] and cr['tokens']==gr['tokens']==cr['expected_tokens']==gr['expected_tokens']
 cpu=canon(cr['log']);gpu=G/f'{index:02d}/execute.log';assert sha(cpu)==cr['log_sha256'] and sha(gpu)==gr['log_sha256']
 a=pattern.findall(cpu.read_text());b=pattern.findall(gpu.read_text());assert a==b and len(a)==len(cr['tokens']),'CPU/GPU hidden/logits differ'
 for step,token,hidden,logits in a:assert len(hidden.split(','))==16 and len(logits.split(','))==256
 total+=len(a);q=O/f'{index:02d}';q.mkdir(exist_ok=True);W=canon(cr['work']);receipt=read(W/'rtl-reuse.json');assert sha(W/'soc/gateware/obj_dir/Vsim')==receipt['simulator_sha256']
 if not (common/'Vsim').exists():shutil.copy2(W/'soc/gateware/obj_dir/Vsim',common/'Vsim')
 assert sha(common/'Vsim')==receipt['simulator_sha256']
 shutil.copy2(cpu,q/'cpu-console.log');shutil.copy2(gpu,q/'gpu-console.log');shutil.copy2(W/'rtl-reuse.json',q/'rtl-reuse.json')
 for f in (W/'image').iterdir():
  if f.is_file():target=q/'input-image'/f.name;target.parent.mkdir(exist_ok=True);shutil.copy2(f,target)
 for folder,glob,output in [('soc/gateware','*.init','gateware'),('soc/software/bios','bios.*','bios')]:
  for f in (W/folder).glob(glob):
   if f.is_file():target=q/output/f.name;target.parent.mkdir(exist_ok=True);shutil.copy2(f,target)
 for f in (W/'soc/gateware/modules').rglob('*.so'):
  target=common/'modules'/f.name;target.parent.mkdir(exist_ok=True)
  if not target.exists():shutil.copy2(f,target)
  assert sha(target)==sha(f)
 rows.append({'index':index,'question':cr['question'],'domain':cr['domain'],'reply':cr['expected_text'],'tokens':cr['tokens'],'target_steps':len(a),'cpu_gpu_hidden_logits_bit_identical':True,'cpu_log_sha256':cr['log_sha256'],'gpu_log_sha256':gr['log_sha256'],'image_sha256':cr['image_sha256'],'checkpoint_sha256':cr['checkpoint_sha256']})
S=R/'student-mini-v1-cpu-gpu/sources'
for name in ['software/student_mini_native_nano.c','software/include/student_mini_native_nano.h','software/include/numeric_luts.h','scripts/export_student_mini_native_image.py','integration/litex/native_nano_bios/student_mini_native_session.c']:(common/Path(name).name).write_bytes((S/name).read_bytes())
card=read(S.parent/'data/nano/model-card.json');assert all(r['checkpoint_sha256']==card['deployment']['quantized_sha256'] for r in rows)
state={'status':'FROZEN_NANO_DUAL_TARGET_12_PASS','questions_per_backend':12,'domains':4,'total_compared_steps':total,'hidden_bf16_values_compared':total*16,'logit_bf16_values_compared':total*256,'cpu_backend':'VexRiscv RTL','gpu_backend':'Vortex SimX','gpu_performance_eligible':False,'input_contains_expected_tokens':False,'frozen_checkpoint_match':True,'extension_sqrt3':'Previously executed outside frozen sessions and answered incorrectly; this acceptance does not establish general mathematical ability.','physical_signoff':False,'records':rows}
(O/'completion.json').write_text(json.dumps(state,ensure_ascii=False,indent=2));manifest={p.relative_to(O).as_posix():sha(p) for p in O.rglob('*') if p.is_file() and p.name!='evidence-sha256.json'};(O/'evidence-sha256.json').write_text(json.dumps(manifest,indent=2));print(json.dumps({k:v for k,v in state.items() if k!='records'},ensure_ascii=False,indent=2))
