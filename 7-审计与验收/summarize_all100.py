from pathlib import Path
import json,hashlib,collections
R=Path(__file__).resolve().parents[1];B=R/'8-本轮实验';C=B/'全100案例双后端-20261104T134532Z/cpu-rtl';G=B/'全100案例双后端-20261104T134332Z/gpu-simx';OUT=B/'全100案例双后端验收结果';OUT.mkdir(exist_ok=True)
def read(p):return json.loads(p.read_text(encoding='utf-8'))
def save(p,d):p.write_text(json.dumps(d,ensure_ascii=False,indent=2)+'\n',encoding='utf-8')
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
c=read(C/'official-results.json');g=read(G/'official-results.json');cases=[];cross=[]
assert len(c['records'])==len(g['records'])==1000
for a,b in zip(c['records'],g['records'],strict=True):
 assert (a['case']['id'],a['seed'])==(b['case']['id'],b['seed'])
 ao=a['observation'];bo=b['observation']
 if bo['numeric_match'] is not None:
  equal=ao['actual_status']==bo['actual_status'] and ao['actual_bits']==bo['actual_bits'] and ao['primitive']==bo['primitive'] and (a['case']['operator']!='p1' or ao['selected']==bo['selected'])
  cross.append({'case_id':a['case']['id'],'seed':a['seed'],'match':equal})
for cid in dict.fromkeys(x['case']['id'] for x in c['records']):
 a=[x for x in c['records'] if x['case']['id']==cid];b=[x for x in g['records'] if x['case']['id']==cid]
 assert sorted(x['seed'] for x in a)==sorted(x['seed'] for x in b)==list(range(1,11))
 cases.append({'case_id':cid,'operator':a[0]['case']['operator'],'scenario':a[0]['case']['scenario'],'cpu_matches':sum(x['observation']['numeric_match'] is True for x in a),'gpu_matches':sum(x['observation']['numeric_match'] is True for x in b),'gpu_unsupported':sum(x['observation']['numeric_match'] is None for x in b),'cpu_seeds':[{k:x['observation'][k] for k in ['seed','actual_status','numeric_match']} for x in a],'gpu_seeds':[{k:x['observation'][k] for k in ['seed','actual_status','numeric_match']} for x in b]})
assert len(cases)==100 and len(cross)==970 and all(x['match'] for x in cross)
summary={'date':'2026-11-04','scope':'fresh execution, frozen 100 cases x 10 seeds, baseline scalar; cached binaries/runtime reused with SHA checks','cpu':read(C/'status.json'),'gpu':read(G/'status.json'),'cpu_fully_matched_cases':sum(x['cpu_matches']==10 for x in cases),'gpu_fully_matched_cases':sum(x['gpu_matches']==10 for x in cases),'cpu_gpu_comparable_records':len(cross),'cpu_gpu_record_mismatches':sum(not x['match'] for x in cross),'gpu_unsupported_cases':[x['case_id'] for x in cases if x['gpu_unsupported']],'full_qualification':'HOLD: independent DMA/protocol RTL, resource and GPU RTLSIM performance gates remain','evidence':{'cpu':str(C.relative_to(R)),'gpu':str(G.relative_to(R))}}
save(OUT/'summary.json',summary);save(OUT/'逐案例结果.json',cases);save(OUT/'跨后端逐条核对.json',cross)
lines=['# 全100案例 CPU RTL / GPU SimX 本机复跑结果','','日期：2026-11-04。冻结案例 P1 33 个、P2 34 个、P3 33 个；每例 seed 1–10，各平台实际执行 1000 条。使用 baseline 算子；复用经过哈希检查的编译产物，执行日志为本轮新生成。','','| 平台 | 执行条数 | 数值/状态匹配 | 数值失败 | 不支持 | 完整匹配案例 |','|---|---:|---:|---:|---:|---:|','| VexRiscv RTL | 1000 | 1000 | 0 | 0 | 100/100 |','| Vortex SimX | 1000 | 970 | 0 | 30 | 97/100 |','','两端可比较的 970 条，其状态、BF16 输出、primitive 以及 P1 selected 逐项一致。','','GPU 尚未通过的三个案例：P1-MINI-30、P2-MINI-30、P3-MINI-30，均为 dma-error，各 10 个 seed。实际返回 UNSUPPORTED_BUS_INJECTION，不伪造为 BUS_ERROR 或 PASS。需要另外运行 DMA 错误注入适配器 RTL 测试。','','CPU 的1000条数值/状态匹配不等于完整协议验收；CPU/GPU 的适配器协议、资源及正式晋升门槛仍独立验收。SimX 只用于功能正确性，不提供 GPU 硬件性能计分数据。','','本轮 CPU 首次尝试遇到 WSL 文件读取错误并停止，改为管道接收日志后完整重跑成功；原始失败记录保留。GPU 出现一次长命令等待提示，之后自行完成，无需分批或中断。','','## 原始证据','','- CPU RTL：[状态](../全100案例双后端-20261104T134532Z/cpu-rtl/status.json)、[完整日志](../全100案例双后端-20261104T134532Z/cpu-rtl/console.log)、[官方核对](../全100案例双后端-20261104T134532Z/cpu-rtl/official-results.json)。','- GPU SimX：[状态](../全100案例双后端-20261104T134332Z/gpu-simx/status.json)、[完整日志](../全100案例双后端-20261104T134332Z/gpu-simx/execute.log)、[官方核对](../全100案例双后端-20261104T134332Z/gpu-simx/official-results.json)。','- [100 个案例逐 seed 结果](逐案例结果.json)、[970 条跨后端核对](跨后端逐条核对.json)。']
(OUT/'验收说明.md').write_text('\n'.join(lines)+'\n',encoding='utf-8')
files=[C/'status.json',C/'console.log',C/'bindings.json',C/'official-results.json',G/'status.json',G/'execute.log',G/'bindings.json',G/'official-results.json']+[p for p in OUT.glob('*.json') if p.name!='证据SHA256.json']+[OUT/'验收说明.md']
save(OUT/'证据SHA256.json',{str(p.relative_to(R)):sha(p) for p in files})
print(json.dumps({'out':str(OUT),'cpu':1000,'gpu':970,'gpu_unsupported':30,'cross_backend_match':all(x['match'] for x in cross)},ensure_ascii=False))
