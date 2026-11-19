from pathlib import Path
import json,gzip,hashlib
R=Path(__file__).resolve().parents[1];P=R/'6-源码引用/原始参考包';O=R/'8-本轮实验/GPU压缩物理视图复核-20261108';O.mkdir(exist_ok=True);old=json.loads((R/'8-本轮实验/GPU来源与锁定环境-20261105/physical-source-audit.json').read_text(encoding='utf-8'));index={};scanned=[]
for folder in [P/'physical/gpu',P/'power/gpu']:
 for f in folder.rglob('*.gz'):
  data=gzip.decompress(f.read_bytes());h=hashlib.sha256(data).hexdigest();rel=f.relative_to(P).with_suffix('');index.setdefault(h,[]).append(str(rel));scanned.append({'archive':str(f.relative_to(P)),'uncompressed_sha256':h,'bytes':len(data)})
  if any(x['expected_sha256']==h for x in old['bindings']) or f.name=='replay-top.v.gz':
   target=O/'recovered'/rel;target.parent.mkdir(parents=True,exist_ok=True);target.write_bytes(data);assert hashlib.sha256(target.read_bytes()).hexdigest()==h
rows=[]
for row in old['bindings']:
 new=dict(row);matches=index.get(row['expected_sha256'],[]);new['decompressed_exact_matches']=matches
 if matches:new['status']='EXACT_SHA_MATCH_COMPRESSED_VIEW'
 rows.append(new)
matched=sum(x['status'].startswith('EXACT_SHA_MATCH') for x in rows);missing=[x for x in rows if not x['status'].startswith('EXACT_SHA_MATCH')]
report={'status':'PARTIAL_SOURCE_RECOVERY_PHYSICAL_IDENTITY_STILL_HOLD','original_checks':len(rows),'original_exact_matches':old['exact_sha_matches'],'exact_matches_after_gzip_decode':matched,'remaining_unmatched_checks':len(missing),'new_matches':matched-old['exact_sha_matches'],'teacher_originals_modified':False,'teacher_physical_identity_established':False,'fresh_functional_boundary_replaced':False,'remaining_missing_basenames':sorted(set(Path(x['original_bound_path']).name for x in missing)),'bindings':rows,'scanned':scanned}
(O/'completion.json').write_text(json.dumps(report,ensure_ascii=False,indent=2),encoding='utf-8');print(json.dumps({k:v for k,v in report.items() if k not in ['bindings','scanned']},ensure_ascii=False,indent=2))
