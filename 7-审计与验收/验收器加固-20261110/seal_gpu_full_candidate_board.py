from pathlib import Path
import json,hashlib,sys,re,ast,struct,shutil,collections
from qualification_resource_guard import prepare,join,snapshot
prepare();join()
R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU完整候选板-20261109';s=json.loads((O/'status.json').read_text());assert s['status']=='FULL_1000_CANDIDATE_BOARD_COLLECTED_NOT_PROMOTED';assert len(s['records'])==1000 and {x['ordinal'] for x in s['records']}==set(range(1000));sha=lambda p:hashlib.sha256(p.read_bytes()).hexdigest();assert all(sha(Path(p))==h for p,h in s['bindings'].items());BASE=R/'8-本轮实验/GPU同硬件全1000-20261108';parent={x['ordinal']:x for x in json.loads((BASE/'status.json').read_text())['records']};S=R/'student-mini-v1-cpu-gpu/sources';sys.path.insert(0,str(S));from scripts.assemble_student_mini_gpu_results import parse
G=[json.loads(t) for t in (S.parent/'data/golden/vectors.jsonl').read_text().splitlines()];inputpath=next(Path(p) for p in s['bindings'] if p.endswith('/inputs.bin'));blob=inputpath.read_bytes();tree=ast.parse((R/'7-审计与验收/run_gpu_full_candidate_board.py').read_text());node=next(n for n in tree.body if isinstance(n,ast.FunctionDef) and n.name=='validate');exec(compile(ast.Module(body=[node],type_ignores=[]),'<independent-candidate-recheck>','exec'));case_seeds=collections.defaultdict(set);faults=0;regress=[];traffic=[];digests={}
for row in s['records']:
 i=row['ordinal'];f=O/f'{i:04d}.log';assert sha(f)==row['log_sha256'];v=validate(i,f,row['seconds'],True);assert all(v[k]==row[k] for k in ['cycles','instructions','selected_implementation','external_read_beats','external_write_beats','input_record_sha256']);words=struct.unpack_from('<32I',blob,i*1936);op=words[1];expected='baseline'
 if words[0]==0x31494e4d and op in [1,2,3] and not words[12]&1:
  expected='combined' if op==1 and words[5]>words[6] else 'rne' if op in [1,2] else 'baseline'
 assert row['selected_implementation']==expected,'routing contract differs';case_seeds[row['case_id']].add(row['seed']);faults+=row['device_fault'];digests[f.name]=sha(f)
 if row['cycles_regress_over_5_percent']:regress.append({'case_id':row['case_id'],'seed':row['seed'],'cycle_reduction_pct':row['cycle_reduction_pct']})
 if row['external_total_beat_change_pct'] is not None and row['external_total_beat_change_pct']>5:traffic.append({'case_id':row['case_id'],'seed':row['seed'],'total_external_beat_change_pct':row['external_total_beat_change_pct']})
assert len(case_seeds)==100 and all(v==set(range(1,11)) for v in case_seeds.values()) and faults==30
A=O/'source-and-apps';A.mkdir(exist_ok=True)
for p,h in s['bindings'].items():
 src=Path(p)
 if src.name in ['student_mini','student_mini.cu']:
  group=src.parent.name if src.parent.name in ['baseline','topk','rne','combined'] else 'production-baseline';dest=A/group/src.name;dest.parent.mkdir(exist_ok=True);shutil.copy2(src,dest)
 elif src.suffix=='.so' or src.name=='route_locked_gpu_candidate.py':shutil.copy2(src,A/src.name)
for n in ['run_gpu_full_candidate_board.py','seal_gpu_full_candidate_board.py']:shutil.copy2(R/'7-审计与验收'/n,A/n)
digests['status.json']=sha(O/'status.json');digests.update({p.relative_to(O).as_posix():sha(p) for p in A.rglob('*') if p.is_file()});(O/'evidence-sha256.json').write_text(json.dumps(digests,indent=2));result={'status':'FULL_1000_CANDIDATE_BOARD_INDEPENDENTLY_SEALED','records':1000,'cases':100,'seeds_per_case':10,'all_records_fresh_target_processes':True,'exact_outputs_status_selected_primitive_pass':1000,'real_DMA_fault_records':faults,'cycle_regressions_over_5_percent':regress,'total_external_beat_increases_over_5_percent':traffic,'official_weighted_gain':None,'official_weights_supplied':False,'teacher_physical_identity':False,'formal_promotion':'HOLD','formal_score_eligible':False,'status_sha256':sha(O/'status.json'),'resources':snapshot()};(O/'验收结论.json').write_text(json.dumps(result,ensure_ascii=False,indent=2));print(json.dumps({k:v for k,v in result.items() if k!='resources'},ensure_ascii=False,indent=2))