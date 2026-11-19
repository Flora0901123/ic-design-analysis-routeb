from pathlib import Path
import json,hashlib,time
R=Path(__file__).resolve().parents[1];S=R/'student-mini-v1-cpu-gpu/sources';O=R/'8-本轮实验/GPU整机DMA预检-20261107';O.mkdir(exist_ok=True);then=time.monotonic()
gold=S.parent/'data/golden/vectors.jsonl';rows=[json.loads(x) for x in gold.read_text().splitlines()];cases=[]
for i,x in enumerate(rows):
 if x['case']['scenario']=='dma-error':
  cases.append({'ordinal':i,'case_id':x['case']['id'],'seed':x['seed'],'protocol':x['inputs']['protocol'],'expected_status':x['golden']['expected_status'],'expected_events':x['golden']['expected_events'],'actual_status':'NOT_EXECUTED','whole_gpu_pass':False})
assert len(cases)==30 and len({x['case_id'] for x in cases})==3
manifest=S/'grading/evidence/vortex-physical/staged-openram-banked-manifest.json';checks=[]
checks.append({'item':'whole-platform counter assembler','path':str(S/'scripts/assemble_student_mini_gpu_counters.py'),'exists':(S/'scripts/assemble_student_mini_gpu_counters.py').is_file()})
checks.append({'item':'banked SRAM manifest','path':str(manifest),'exists':manifest.is_file()})
# Search only supplied immutable reference and teacher source packages, never infer netlists from reports.
roots=[R/'6-源码引用/原始参考包',R.parent/'集成电路设计与分析'];nets=[str(p) for root in roots for p in root.rglob('project-banked.v')]
checks.append({'item':'mapped project-banked.v in supplied materials','exists':bool(nets),'found':nets})
models=[]
if manifest.is_file():
 for macro in json.loads(manifest.read_text())['macros']:
  for name,row in macro['artifacts'].items():
   if name.endswith('.v'):models.append({'path':row['path'],'exists':Path(row['path']).is_file()})
checks.append({'item':'manifest-bound SRAM behavioral models','exists':bool(models) and all(x['exists'] for x in models),'models':models})
state={'status':'BLOCKED_MISSING_PHYSICAL_BUILD_INPUTS' if not all(x['exists'] for x in checks) else 'INPUTS_PRESENT_NOT_YET_VALIDATED','formal_eligible':False,'whole_gpu_dma_records_passed':0,'expected_records':30,'unique_cases':3,'checks':checks,'cases':cases,'frozen_vectors_sha256':hashlib.sha256(gold.read_bytes()).hexdigest(),'adapter_evidence_scope':'sticky bus fault, backpressure and reset probes only; does not establish no-output-commit or no-new-payload-DMA-after-error in whole GPU','physical_binding_audit':'8-本轮实验/GPU来源与锁定环境-20261105/physical-source-audit.json','elapsed_seconds':time.monotonic()-then}
(O/'completion.json').write_text(json.dumps(state,ensure_ascii=False,indent=2),encoding='utf-8');print(json.dumps({'status':state['status'],'records':len(cases),'checks':checks},ensure_ascii=False))
