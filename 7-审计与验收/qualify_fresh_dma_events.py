from pathlib import Path
import re,json
R=Path(__file__).resolve().parents[1];O=R/'9-GPU复现/整机DMA重建';P=O/'whole-gpu-runs';d=json.loads((P/'status.json').read_text());rows=[]
for row in d['records']:
 text=(P/f"{row['ordinal']:04d}.log").read_text(errors='replace');b=re.search(r'DMA_BUFFERS input=([0-9a-f]+) bytes=(\d+) output=([0-9a-f]+) result_size=(\d+)',text);assert b,'missing observed device addresses';base=int(b[1],16);end=base+int(b[2]);pending={};fault_cycle=None;new_payload=[];control_payload=0;error_requests=0
 for line in text.splitlines():
  m=re.fullmatch(r'DMA_REQ cycle=(\d+) bank=(\d+) tag=(\d+) write=([01]) addr=([0-9a-f]+) mask=([0-9a-f]+)',line)
  if m:
   cycle,bank,tag,write=map(int,m.groups()[:4]);addr=int(m[5],16)
   if not write:pending[bank,tag]=addr
   if 0xe0000000<=addr<0xe0001000 and not write:error_requests+=1
   if addr<end and addr+64>base+128:
    control_payload+=1
    if fault_cycle is not None and cycle>=fault_cycle:new_payload.append({'cycle':cycle,'addr':hex(addr),'write':write})
  m=re.fullmatch(r'DMA_RSP cycle=(\d+) bank=(\d+) tag=(\d+)',line)
  if m:
   cycle,bank,tag=map(int,m.groups());addr=pending.pop((bank,tag),None)
   if addr is not None and 0xe0000000<=addr<0xe0001000 and fault_cycle is None:fault_cycle=cycle
 isfault=row['case_id'].endswith('-30');ok=row['status_observation_ok'] and ((error_requests>0 and fault_cycle is not None and not new_payload) if isfault else control_payload>0)
 rows.append({'ordinal':row['ordinal'],'case_id':row['case_id'],'seed':row['seed'],'status':'PASS' if ok else 'FAIL','actual_error_requests':error_requests,'accepted_error_response_cycle':fault_cycle,'post_error_new_payload_requests':new_payload,'input_payload_requests':control_payload,'no_numeric_result_commit':row['status_observation_ok'] if isfault else None})
complete=len(rows)==33 and sum(x['case_id'].endswith('-30') for x in rows)==30
report={'status':'RECONSTRUCTED_GPU_DMA_FUNCTIONAL_PASS' if complete and all(x['status']=='PASS' for x in rows) else 'PARTIAL_EVENTS_MATCH' if not complete and all(x['status']=='PASS' for x in rows) else 'FAIL','scope':'fresh macro-bound GPU plus adapters and reconstructed functional SRAM; not AFU/xrt or original physical signoff','teacher_physical_identity':False,'records':rows};(O/'dma-event-qualification.json').write_text(json.dumps(report,indent=2));print(report['status'])
