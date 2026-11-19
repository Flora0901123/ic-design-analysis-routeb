from pathlib import Path
import json,hashlib,ast
R=Path(r'C:\Users\Camellia\Desktop\集成电路设计与分析-RouteB交付');B=R/'8-本轮实验';GPU=B/'GPU-RTLSIM四组消融';g=json.loads((GPU/'status.json').read_text(encoding='utf-8'));assert g['status']=='COMPLETE'
n=json.loads((B/'Nano基线组合100次重复/summary.json').read_text(encoding='utf-8'));assert all(s['completed']==100 and s['status']=='COMPLETE' for s in n.values())
summary={'date':'2026-11-04','decision':'HOLD','cpu_nano_ablation_variants':['baseline','topk','rne','combined'],'cpu_repeat_each':100,'cpu_repeat_total':200,'full_tensor_matches':200,'cpu_nano_combined_cycle_reduction_pct':{'ttft':100*(1-3828746/3859315),'decode':100*(1-811714.25/831250.5),'session':100*(1-7075832/7184546)},'gpu_simx_variants':['baseline','topk','rne','combined'],'gpu_simx_records_each':1000,'gpu_simx_golden_matches_each':970,'gpu_simx_numeric_failures_each':0,'gpu_unsupported_dma_records_each':30,'gpu_rtlsim_development_cases':4,'gpu_rtlsim_seed_each':[1],'gpu_rtlsim_variants':4,'gpu_rtlsim_runs':16,'gpu_rtlsim_results':g['comparison'],'remaining':['GPU complete RTLSIM case x seed performance board and >5% regression check','independent DMA fault/protocol/recovery RTL qualification','locked tool version and mapped physical/source identity','resource/traffic/energy reporting','Nano frozen question coverage; GPU Nano optimization performance','final packaging and independent-machine reproduction when available']}
O=R/'3-优化链-P1';(O/'本轮优化汇总.json').write_text(json.dumps(summary,ensure_ascii=False,indent=2),encoding='utf-8')
(O/'本轮优化总结.md').write_text('''# 本轮算子优化结果

更新：2026-11-04。基于老师公开100分规则整理，候选保持HOLD。

## 完成的实作与验收

1. CPU Nano补齐baseline、仅Top-K、仅RNE、组合四组RTL消融，逐token/hidden/logits全部一致；固件反汇编确认固定除数RNE移位函数不调用64位除法辅助例程，动态归一化除法保留。
2. baseline与组合各实际执行100次独立RTL重启，共200次全部完整通过，三项指标在各组内min=max、标准差0。
3. GPU完成Top-K、RNE及组合候选适配。四组SimX各实际执行完整100案例×10seed，每组970匹配、0数值失败、30 DMA错误注入不支持；全部1000条输出在四组间一致。
4. 构建带PERF硬件计数器的Vortex RTLSIM，预先固定4个案例、seed1、四组共16次真实RTL周期测量，全部输出匹配golden。
5. 保存源码快照、单变量差异、父SHA、输入SHA、原始日志、反汇编、逐条对照和报告；已还原工作算子源码，未替换正确baseline。

## 实测收益与失败

| 指标 | baseline | 组合 | 周期减少 |
|---|---:|---:|---:|
| CPU Nano首token | 3,859,315 | 3,828,746 | 0.792% |
| CPU Nano每token解码均值 | 831,250.50 | 811,714.25 | 2.350% |
| CPU Nano完整会话 | 7,184,546 | 7,075,832 | 1.513% |
| GPU RTL P1最小规模 seed1 | 94,890 | 92,231 | 2.802% |
| GPU RTL P1最大规模 seed1 | 239,562 | 232,587 | 2.912% |

CPU仅Top-K会话反而退化1.594%；GPU仅Top-K两个P1探针仅减少0.537%和0.602%。这些退化和弱收益都保留。GPU RNE单项P3控制案例退化0.135%，组合P3控制减少0.210%；P3算术未变，保留代码生成/布局及启动成本的替代解释。

CPU结果是固定Nano输入的200次重复；GPU结果是4案例×seed1的开发RTLSIM探针，不能把两者当作全量正式性能成绩。GPU Verilator 5.050与锁定5.040不同，物理映射/协议绑定仍待验收。按P1首token主指标，CPU Nano改善不足2%，不宣称达到交互收益门槛。

## 证据入口

- [CPU四组消融与反汇编](../8-本轮实验/CPU-Nano四组消融/消融说明.md)
- [CPU各100次重复](../8-本轮实验/Nano基线组合100次重复/重复验证说明.md)
- [GPU四组完整回归及RTL周期](../8-本轮实验/GPU四组优化汇总/优化说明.md)
- [CPU算子1000条Top-K对照](../8-本轮实验/CPU完整优化对照/summary.json)
- [按公开100分规则整理的技术报告](../5-技术报告/技术报告.md)

## 仍待完成

GPU完整RTLSIM性能板及回退检查；DMA故障/协议恢复独立RTL验证；锁定版本和映射物理来源；资源、流量及能耗；Nano冻结问题覆盖和GPU整模型优化周期。用户暂时没有另一台电脑，异机验证待实际环境可用后进行。没有正式PROMOTE结论。
''',encoding='utf-8')
# Synchronize living reports; historical raw logs remain untouched.
p=R/'7-审计与验收/完善进度.md';t=p.read_text(encoding='utf-8');t=t.replace('新SimX实际执行1000条，970匹配、0数值失败、30不支持；与父版本全部输出相同','Top-K/RNE/组合各SimX实际执行1000条，970匹配、0数值失败、30不支持；四组全部输出相同').replace('冻结问题覆盖与100次重复','基线/组合各100次重复已完成；冻结问题覆盖待补').replace('已开始开发环境构建；工具5.050不等于锁定5.040，当前在处理中文路径构建问题','开发RTLSIM已构建；四组×4案例×seed1共16次RTL周期实测完成，输出全匹配；工具5.050不等于锁定5.040').replace('未取得实际GPU硬件周期，不宣称GPU加速','P1两个开发探针组合周期减少2.802%/2.912%，完整性能板与正式晋升待验收');t+='\n最新汇总：[本轮优化总结](../3-优化链-P1/本轮优化总结.md)。基线与组合共200次独立RTL会话完整通过。\n';p.write_text(t,encoding='utf-8')
p=R/'5-技术报告/技术报告.md';t=p.read_text(encoding='utf-8').replace('基线与组合各100次独立RTL重启复测正在进行，完成后单独出具结果。','基线与组合各100次独立RTL重启复测全部完成，200次token/hidden/logits全部一致，各组内周期min=max、标准差0。[重复验证](../8-本轮实验/Nano基线组合100次重复/重复验证说明.md)。')
a=t.index('GPU Top-K已完成全量SimX功能回归。');b=t.index('\n## Nano模型能力边界',a)
t=t[:a]+'''GPU四组（baseline/Top-K/RNE/组合）已完成各1000条全量SimX功能回归，每组970匹配、0数值失败、30条DMA注入不支持。RNE候选修改六处固定32768重标定，保留动态归一化和primitive数值合同。

Vortex带PERF计数器的RTLSIM已经构建并实际执行四组×4案例×seed1，共16次，全部输出匹配golden。P1最小规模94,890→92,231周期，减少2.802%；最大规模239,562→232,587，减少2.912%；P2控制102,107→99,474，减少2.579%；P3控制193,233→192,828，减少0.210%。原生开发RTL计数测量边界是整个单案例设备命令，包含启动与堆初始化，不是单个函数净周期。

[GPU四组优化、完整回归与原始RTL计数](../8-本轮实验/GPU四组优化汇总/优化说明.md)。该预先固定子集不代替完整冻结性能板。Verilator 5.050与锁定5.040不同，映射硬件/物理包/协议来源仍待绑定，因此未宣称正式晋升或GPU计分。未给出的权重不自行生成。
''' +t[b:]
t=t.replace('GPU RTLSIM收益、100次重复/冻结问题覆盖','GPU完整RTLSIM性能板、冻结问题覆盖').replace('100次重复/冻结问题覆盖','冻结问题覆盖');p.write_text(t,encoding='utf-8')
p=R/'5-技术报告/评分证据对照.md';t=p.read_text(encoding='utf-8').replace('重复性实测正在补齐','基线与组合各100次独立RTL重复已完成，四组GPU的16次开发RTL周期也已完成；完整性能板仍待验收').replace('GPU周期与流量对照、资源代价','GPU完整周期板、流量对照、资源代价').replace('GPU RTLSIM收益、正式权重及全部晋升门槛','GPU完整RTLSIM性能板、正式权重及全部晋升门槛');p.write_text(t,encoding='utf-8')
p=O/'优化前后对比报告.md';t=p.read_text(encoding='utf-8');t+='\n## 本轮最终补充\n\nCPU基线与组合各100次RTL会话全部通过。GPU RNE与组合已完成各1000条SimX回归及四组RTLSIM开发探针，P1两个探针组合周期减少2.802%/2.912%。完整事实与剩余门槛见[本轮优化总结](本轮优化总结.md)，候选仍为HOLD。\n';p.write_text(t,encoding='utf-8')
p=R/'HANDOFF.md';t=p.read_text(encoding='utf-8');t=t.replace('当前正在补GPU RTLSIM开发实测，尚无GPU加速结论，未正式PROMOTE。','GPU四组开发RTLSIM共16次实测已完成，组合两个P1探针周期减少2.802%/2.912%；CPU基线/组合各100次独立RTL重复全部通过。完整汇总见 `3-优化链-P1/本轮优化总结.md`。完整性能板/版本/协议/物理门槛尚未齐，未正式PROMOTE。');p.write_text(t,encoding='utf-8')
p=R/'README.md';t=p.read_text(encoding='utf-8').replace('Nano四组消融已齐。','Nano四组消融及基线/组合各100次重复已齐；GPU四组SimX全回归和16次开发RTLSIM周期已完成。').replace('GPU RTLSIM性能、协议/物理来源','GPU完整RTLSIM性能板、协议/物理来源');t+='\n本轮优化入口：[完成的实作、收益、退化与剩余门槛](3-优化链-P1/本轮优化总结.md)。\n';p.write_text(t,encoding='utf-8')
# Verify that transient GPU edits were restored and final helper files parse.
scalar=R/'student-mini-v1-cpu-gpu/sources/software/student_mini_scalar.c';assert hashlib.sha256(scalar.read_bytes()).hexdigest()=='9df7244eb3077dca32dec59da773c26f8df2efc1824530144435ab6c0098e37f'
for name in ['run_nano_rne.py','summarize_nano_ablation.py','resume_gpu_topk.py','run_gpu_rne_candidates.py','build_gpu_rtlsim.py','run_gpu_rtlsim_ablation.py','repeat_nano_100.py','summarize_gpu_ablation.py','summarize_all100.py']:ast.parse((R/'7-审计与验收'/name).read_text(encoding='utf-8-sig'))
print('Final reports synchronized; GPU work source restored; helper syntax PASS')
