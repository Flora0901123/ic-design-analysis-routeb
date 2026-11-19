"""Conservative operator dispatch. No case ids, seeds, golden or answers read."""
from pathlib import Path
import sys,struct,json,os,hashlib

def choose(header,variant):
 if len(header)!=128:return 'baseline'
 w=struct.unpack('<32I',header);magic,op=w[:2]
 if magic!=0x31494e4d or op not in [1,2,3] or w[12]&1:return 'baseline'
 if variant=='baseline':return 'baseline'
 if variant=='topk':return 'topk' if op==1 and w[5]>w[6] else 'baseline'
 if variant=='rne':return 'rne' if op in [1,2] else 'baseline'
 if variant=='combined':
  if op==1:return 'combined' if w[5]>w[6] else 'rne'
  if op==2:return 'rne'
 return 'baseline'

def main():
 if len(sys.argv)!=5 or sys.argv[1] not in ['baseline','topk','rne','combined']:raise SystemExit('usage: route_locked_gpu_candidate.py VARIANT INPUT START 1; caller supplies locked runtime environment')
 variant,path,start,count=sys.argv[1],Path(sys.argv[2]),int(sys.argv[3]),int(sys.argv[4]);assert start>=0 and count==1,'independent one-case launch required'
 with path.open('rb') as f:f.seek(start*1936);header=f.read(128)
 selected=choose(header,variant);R=Path(__file__).resolve().parents[1];O=R/'8-本轮实验/GPU锁定硬件四组候选-20261109';t=json.loads((R/'9-GPU复现/整机DMA重建/trace-build/completion.json').read_text())
 if selected=='baseline':exe=Path(next(p for p in t['new_bindings'] if p.endswith('/student_mini')));expected=t['new_bindings'][str(exe)]
 else:
  record=next(x for x in json.loads((O/'build.json').read_text())['records'] if x['variant']==selected);exe=Path(record['work'])/'student_mini';expected=record['executable_sha256']
 assert hashlib.sha256(exe.read_bytes()).hexdigest()==expected,'selected executable changed';op=struct.unpack_from('<I',header,4)[0] if len(header)>=8 else None;print(f'ROUTEB_DISPATCH requested={variant} op={op} selected={selected} reason=operator-only-no-oracle',flush=True);os.execv(str(exe),[str(exe),str(path),str(start),'1'])
if __name__=='__main__':main()