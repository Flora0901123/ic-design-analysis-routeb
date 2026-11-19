"""Independently bind the executed four-state and hierarchy/process stage; no PPA claim."""
from pathlib import Path
import json,re,hashlib,datetime
R=Path(__file__).resolve().parents[1]
O=R/'8-本轮实验/GPU新物理入口实测-20261110-v2'
S=R/'8-本轮实验/GPU新身份物理输入准备-20261110'
sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest()
def read(p):return json.loads(p.read_text(encoding='utf-8-sig'))
receipt=O/'验收结论.json'; manifest=O/'evidence-sha256.json'
if receipt.exists():
 for name,h in read(manifest).items():assert sha(R/name)==h,('sealed evidence changed',name)
 print('UNCHANGED_SEALED_PREFLIGHT');raise SystemExit(0)
st=read(O/'status.json');assert st['status']=='FF_FOUR_STATE_4_SHAPES_AND_STRUCTURAL_PREFLIGHT_PASS'
inputs=read(O/'input-sha256.json')
for name,h in inputs.items():assert sha(R/name)==h,('input drift',name)
contract=read(S/'export-contract.json');expected={x['macro_name'] for x in contract['macro_mapping']}
assert len(expected)==4 and {x['shape'] for x in st['records']}==expected and len(st['records'])==4
observed=[]
for row in st['records']:
 assert row['four_state_memory_semantics']=='PASS'
 for k in ['compile','run']:
  x=row[k];assert x['seconds']>0 and sha(O/x['log'])==x['log_sha256']
 raw=(O/row['run']['log']).read_text();matches=re.findall(r'^PASS ff (\w+): (\d+) records$',raw,re.M)
 assert len(matches)==1 and matches[0][0]==row['shape'] and int(matches[0][1])==len((S/'verification'/(row['shape']+'.vectors')).read_text().splitlines()) and 'FATAL' not in raw
 assert (O/(row['shape']+'.vvp')).stat().st_size>0
 observed.append(dict(shape=row['shape'],four_state_records=int(matches[0][1])))
h=st['structural_preflight'];assert sha(O/h['log'])==h['log_sha256'] and h['seconds']>0
raw=(O/h['log']).read_text();assert 'Found and reported 0 problems.' in raw and 'ERROR:' not in raw and 'End of script.' in raw
assert not st['PPA_signoff'] and not st['physical_mapping_executed'] and not st['STA_executed']
files={R/name for name in inputs}
files.update(p for p in O.iterdir() if p.is_file())
files.update([Path(__file__).resolve(),R/'7-审计与验收/run_new_gpu_physical_preflight.py'])
manifest.write_text(json.dumps({p.relative_to(R).as_posix():sha(p) for p in sorted(files)},ensure_ascii=False,indent=2),encoding='utf-8')
result=dict(status='NEW_FF_FOUR_STATE_AND_STRUCTURAL_PREFLIGHT_INDEPENDENTLY_SEALED',sealed_at=datetime.datetime.now(datetime.timezone.utc).isoformat(),status_sha256=sha(O/'status.json'),shapes=observed,total_four_state_records=sum(x['four_state_records'] for x in observed),structural_check='hierarchy -check; proc; check -assert',recorded_seconds=h['seconds']+sum(x[k]['seconds'] for x in st['records'] for k in ['compile','run']),original_physical_identity=False,standard_cell_mapping_accepted=False,place_route_executed=False,STA_executed=False,power_energy_measured=False,physical_signoff=False,formal_promotion='HOLD',limits='FF memory shape semantics and elaborated structural/process checks only; not whole mapped GPU functional equivalence or PPA',evidence_manifest_sha256=sha(manifest))
receipt.write_text(json.dumps(result,ensure_ascii=False,indent=2),encoding='utf-8');print(json.dumps(result,ensure_ascii=False,indent=2))