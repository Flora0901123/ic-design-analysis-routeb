from pathlib import Path
import json
R=Path(__file__).resolve().parents[1]
p=R/'7-审计与验收/preflight_gpu_whole_dma.py';s=p.read_text(encoding='utf-8-sig').replace("write_text(json.dumps(state,ensure_ascii=False,indent=2))","write_text(json.dumps(state,ensure_ascii=False,indent=2),encoding='utf-8')");p.write_text(s,encoding='utf-8')
p=R/'7-审计与验收/build_project_panorama.py';s=p.read_text(encoding='utf-8-sig');marker='# Only genuine, separate recorded executions are included. No human-hour extrapolation.'
patch='''# 2026-11-07 continuation: update only from accepting current-source evidence.
new_status=read('8-本轮实验/GPU锁定版适配器-20261107/status.json')
assert new_status['status']=='ADAPTER_RTL_PASS'
for x in nodes:
 if x['id']=='lock':
  x.update(summary='5.040 已安装 · 适配器复跑通过',detail='官方v5.040源码包SHA固定，本机优化版构建完成；120个独立适配器探针通过。版本号对齐，非老师相同二进制。中文路径采用ASCII别名与同字节源码副本。旧GPU性能日志仍属5.050；映射整机尚未锁定复验。',links=['9-GPU复现/locked-verilator-5.040/status.json','8-本轮实验/GPU来源与锁定环境-20261105/acceptance-20261107.json'],seconds=sum(t['seconds'] for t in read('9-GPU复现/locked-verilator-5.040/status.json')['stages']),time_scope='成功安装的4阶段墙钟和；不含此前失败与等待')
 if x['id']=='adapter':
  x['detail']+=' 2026-11-07使用5.040及显式位宽修正后的适配器重新通过，原始源码与工具均有SHA绑定。'
  x.update(links=['8-本轮实验/GPU锁定版适配器-20261107/status.json','8-本轮实验/GPU锁定版适配器-20261107/run.log'],seconds=new_status['elapsed_seconds'],time_scope='5.040适配器编译+运行；120探针，非整机DMA')
 if x['id']=='mutation':
  x.update(links=['8-本轮实验/GPU适配器突变-20261107/completion.json'],seconds=sum(t['elapsed_seconds'] for t in read('8-本轮实验/GPU适配器突变-20261107/completion.json')['records']),time_scope='修正后Icarus正常版与8个突变，9轮墙钟和')
 if x['id']=='dma':
  x.update(summary='三例 × 10 seeds：30条未执行',links=['8-本轮实验/GPU整机DMA预检-20261107/completion.json','8-本轮实验/GPU来源与锁定环境-20261105/physical-source-audit.json'])
 if x['id']=='formal':
  x.update(status='partial',summary='局部安全归纳通过 · 原验收门待齐',detail='对真实全位宽memory/status adapter，内存契约归纳长度2、命令契约长度3证明成功，初始复位，其余输入无附加约束。修复Yosys0.33将状态地址全1常量展开为1位的差异，改显式位宽复制；前后展开与反例保留。证明仅覆盖所列局部安全性质，原组合harness32步/覆盖、GPU核/SRAM/整机活性不在本次证明内。',links=['8-本轮实验/GPU适配器局部契约-20261107/completion.json','8-本轮实验/GPU地址常量兼容修正-20261107/elaboration-comparison.json','7-审计与验收/GPU-DMA协议与环境续做-20261107.md'],seconds=sum(t['elapsed_seconds'] for t in read('8-本轮实验/GPU适配器局部契约-20261107/completion.json')['records']),time_scope='两项成功局部归纳证明墙钟和；不含早期失败')
 if x['id']=='delivery':
  x['detail']='已有真实双后端实测、适配器5.040复验、局部安全归纳与突变证据。整机DMA、原协议验收门、完整冻结性能板、映射物理与资源门槛仍未齐；保持HOLD，交老师据证评分。'
'''
assert s.count(marker)==1;s=s.replace(marker,patch+'\n'+marker);p.write_text(s,encoding='utf-8')
p=R/'5-技术报告/工程全景模板.html';s=p.read_text(encoding='utf-8-sig').replace('已记录的 6 项独立运行样本之和','已记录的运行 / 构建 / 验证样本之和').replace('整机 DMA / 形式证明：未完成','整机 DMA / 原协议门：未完成').replace('锁定环境：5.040 尚无通过证据','5.040适配器通过 · 映射整机待验').replace('协议/突变、物理审计','协议排错、物理审计');p.write_text(s,encoding='utf-8')
# Documentation navigation and current state, leaving older experimental records intact.
p=R/'HANDOFF.md';s=p.read_text(encoding='utf-8-sig');lead='> 最新续做（2026-11-07）：Verilator5.040已从官方源码安装；修正状态地址常量的Yosys展开差异，真实全位宽适配器局部安全归纳通过；5.040下120探针通过，修正后8/8突变被检测。整机DMA30条仍未执行，映射物理缺件、原32步协议覆盖与其他发布门仍HOLD。先读 `7-审计与验收/GPU-DMA协议与环境续做-20261107.md`。下文保留历史状态。\n\n';p.write_text(lead+s,encoding='utf-8')
p=R/'00-教师审阅/04-未完成事项.md';s=p.read_text(encoding='utf-8-sig').replace('1. GPU三类DMA故障注入及独立协议、背压、恢复RTL验证。','1. GPU三类整机DMA故障注入（30条仍未执行）及原32步协议/覆盖验收。已补独立适配器5.040下120探针、局部安全归纳与8个动态突变；这些不替代整机资格。').replace('3. 锁定工具版本、映射硬件与参考物理包的一致性绑定。','3. 映射硬件与参考物理包的一致性绑定及锁定环境整机复验。5.040已安装并通过适配器复跑；旧5.050性能记录不追认。');s+='\n本轮新增证据：[DMA、协议与环境续做记录](../7-审计与验收/GPU-DMA协议与环境续做-20261107.md)。\n';p.write_text(s,encoding='utf-8')
p=R/'README.md';s=p.read_text(encoding='utf-8-sig');s=s.replace('独立协议、完整GPU性能板、锁定版本/物理来源和资源门槛尚未齐。','适配器局部安全归纳、修正后8个突变及5.040下120个独立探针已通过；整机DMA、原协议覆盖、完整GPU性能板、物理来源和资源门槛尚未齐。');s+='\n2026-11-07续做：[GPU DMA、协议与锁定环境的修正及证据](7-审计与验收/GPU-DMA协议与环境续做-20261107.md)。\n';p.write_text(s,encoding='utf-8')
print('Current status and panorama inputs updated')
