from pathlib import Path
import json,hashlib
R=Path(__file__).resolve().parents[1];B=R/'8-本轮实验';GPU=B/'GPU-RTLSIM四组消融';s=json.loads((GPU/'status.json').read_text(encoding='utf-8'));assert s['status']=='COMPLETE',s['status']
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
for x in s['records']:assert sha(GPU/x['log'])==x['log_sha256']
paths={'baseline':B/'全100案例双后端-20261104T134332Z/gpu-simx','topk':B/'gpu-topk全100案例-20261104T140209Z/gpu-simx','rne':B/'GPU-RNE与组合候选/rne','combined':B/'GPU-RNE与组合候选/combined'}
reports={k:json.loads((p/'official-results.json').read_text(encoding='utf-8')) for k,p in paths.items()};base=reports['baseline']['records'];functional={}
for name,d in reports.items():
 assert len(d['records'])==1000 and d['numeric_matches']==970
 count=0
 for a,b in zip(base,d['records'],strict=True):
  assert (a['case']['id'],a['seed'])==(b['case']['id'],b['seed'])
  assert all(a['observation'][k]==b['observation'][k] for k in ['actual_status','actual_bits','primitive','selected'])
  count+=1
 functional[name]={'records':1000,'matching_parent_outputs':count,'golden_matches':970,'failures':sum(x['observation']['numeric_match'] is False for x in d['records']),'unsupported':sum(x['observation']['numeric_match'] is None for x in d['records'])}
 assert functional[name]['failures']==0 and functional[name]['unsupported']==30
O=B/'GPU四组优化汇总';O.mkdir(exist_ok=True);(O/'功能逐条核对摘要.json').write_text(json.dumps(functional,ensure_ascii=False,indent=2),encoding='utf-8')
lines=['# GPU四组优化：功能全回归与RTLSIM开发实测','','四组为baseline、仅Top-K、仅RNE、Top-K+RNE。每组在Vortex SimX实际执行100案例×10seed：970条匹配golden、0条数值失败、30条DMA注入不支持。四组全部1000条状态/BF16/primitive/selected输出一致。RNE保留最终动态分母归一化与primitive witness，修改六处常数32768重标定。','','## RTLSIM硬件周期','','同一个带PERF计数器的Vortex RTL运行库；1 core/2 warps/4 threads、FPU STD。子集在运行前固定为P1最小与最大规模、P2/P3最小规模，均seed 1。测量边界为单案例整个设备命令，包含启动与堆初始化；不是单个C函数的净周期。','','| 案例 | baseline | Top-K | RNE | 组合 | 组合周期减少 |','|---|---:|---:|---:|---:|---:|']
for ordinal in s['selected_ordinals']:
 d={x['variant']:x for x in s['records'] if x['ordinal']==ordinal};a=d['baseline']['cycles'];c=d['combined']['cycles'];lines.append(f"| {d['baseline']['case_id']} seed1 | {a:,} | {d['topk']['cycles']:,} | {d['rne']['cycles']:,} | {c:,} | {100*(1-c/a):.3f}% |")
lines+=['','16次RTL运行均匹配相应golden；周期来自RTL硬件MPM计数器，不使用主机墙钟或SimX PERF。P2/P3控制案例也有小幅变化，保留启动代码/代码布局的替代解释。','','当前只完成4案例×seed1的开发周期探针，不能据此判定完整冻结性能板加权收益或没有其他用例回退。Verilator 5.050与课程锁定5.040不同；该原生开发RTL也未与参考映射物理包建立完整一致性。因此候选保持HOLD，尚无正式PROMOTE或GPU优化计分结论。','','## 原始证据','','- [RTLSIM四组全部日志、计数与绑定](../GPU-RTLSIM四组消融/status.json)','- [RTLSIM构建和版本](../../9-GPU复现/rtlsim-optimization/status.json)','- [RNE/组合全量功能回归](../GPU-RNE与组合候选/summary.json)','- [Top-K全量父子对照](../gpu-topk全100案例-20261104T140209Z/对照结果/结果说明.md)','- [本目录功能逐条核对摘要](功能逐条核对摘要.json)']
(O/'优化说明.md').write_text('\n'.join(lines)+'\n',encoding='utf-8')
files=[GPU/'status.json',GPU/'bindings.json',*GPU.glob('*.log'),O/'功能逐条核对摘要.json',O/'优化说明.md',*[p/'official-results.json' for p in paths.values()]]
(O/'证据SHA256.json').write_text(json.dumps({str(p.relative_to(R)):sha(p) for p in files},ensure_ascii=False,indent=2),encoding='utf-8')
print(json.dumps({'functional':functional,'rtl':s['comparison']},ensure_ascii=False))
