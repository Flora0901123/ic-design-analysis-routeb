"""Synchronize review navigation from accepted report data; preserve prior navigation in a dated archive."""
from pathlib import Path
import json,datetime,shutil
R=Path(__file__).resolve().parents[1];D=json.loads((R/'成果汇报数据.json').read_text(encoding='utf-8-sig'));B=R/'7-审计与验收/审阅导航同步-20261111/更新前';B.mkdir(parents=True,exist_ok=True)
def write(name,text):
 p=R/name;backup=B/name
 if p.exists() and not backup.exists():backup.parent.mkdir(parents=True,exist_ok=True);shutil.copy2(p,backup)
 p.write_text(text,encoding='utf-8')
def read(p):return json.loads((R/p).read_text(encoding='utf-8-sig'))
percent=f"{D['completion']:g}%";count=D['counts'];board=D['gpu_candidate_progress']['note'];cpu=D['evidence']['cpuConfirmed']['path'];mapping=D['evidence']['ffMapping']['path'];pre=D['evidence']['ffPreflight']['path'];sta=D['evidence']['ffSTA']['path'];sram=D['evidence']['sramBinding']['path'];size=D['package_plan']['bytes']/1024**3
write('README.md',f'''# 集成电路设计与分析 · Route B 工作包

2026-11-11阶段更新。当前工程清单完成度 **{percent}**（{count['done']}项完成、{count['partial']}项部分完成、{count['todo']}项待完成），不是教师评分。98%目标尚未达到，正式晋升与物理/PPA仍HOLD。

老师请从[教师审阅入口](00-教师审阅/00-阅读顺序.md)开始；[成果汇报与考核对照](成果汇报与考核对照.html)和[交互式生产流程全景图](工程生产流程全景图.html)提供当前证据导航、模块关联及有记录的实测耗时。评分栏留空，交老师按100分规则审核。

| 已完成工作 | 当前真实边界 |
|---|---|
| CPU算子 | baseline与Top-K各100案例×10seed，1000条匹配 |
| 新宏绑定GPU baseline | 同硬件1000条数值/状态/selected/primitive与DMA见证已独立封存；旧SimX四组分别保留 |
| CPU Nano新组合 | 5.040/128KiB公平配对，TTFT减少4.607%、解码7.242%、会话5.826%；3+3交错独立重启及12冻结题81步逐位通过；[独立收据]({cpu}) |
| GPU协议与DMA | 30故障+3正常控制；整机背压/保持/复位90条；局部协议/形式与突变证据保留 |
| Nano问题覆盖 | CPU/GPU冻结各12题81步hidden/logits一致；GPU为SimX功能结果，根号3扩展题仍答错 |
| 新FF物理实现输入 | 4形状5326条四态检查、整机结构检查独立封存；[预检收据]({pre}) |
| 10 ns综合后STA | setup裕量−2121.78 ns，hold裕量+0.31 ns。最差路径从指令缓存寄存器进入FF存储写入逻辑。[STA报告]({sta}) |
| SRAM替代路线 | 4种包装通过5326条四态事务，Yosys确认整机绑定164个宏实例。2种公开宏的原版模型通过3624条事务，LEF、TT Liberty与GDS已核对。整机布线签核待补。[整机绑定]({sram}) |
| 新GPU真实标准单元映射 | 1547376单元、79种真实库单元，独立重读无未解析叶单元；综合单元面积21.096mm²；[映射收据]({mapping})。尚未完成映射后整机等价与PPA |

{board}

物理原始来源32/50精确匹配，18项仍未匹配；新映射是单独身份，不以历史物理报告充当本轮PPA。功耗/能耗、GPU Nano交互性能对照、最终ZIP/CRC和完整干净环境复现仍未完成。暂无第二台电脑，不声称异机复现。

## 可运行入口

在Python环境执行 `python audit_delivery.py`：只读校验选定封存证据及两页一致性，不启动目标，不代表干净环境重跑。执行 `python audit_delivery.py --require-final`：只要最终门仍有缺项就返回退出码2；证据损坏返回1。真正的目标运行入口与环境要求见[复现检查导航](00-教师审阅/02-合规与复现检查.md)。

1～5为环境、复现、优化及报告，6为原始参考，7为审计脚本与复核，8为本机原始证据，9为GPU构建依赖。所有工作基于本D盘RouteB目录；老师资料目录只读。参考记录、失败尝试、旧版本数据保留各自边界，不改写历史实验。

最终打包使用 `package_delivery.py`，会核对展开体积、压缩体积、CRC与打包中源文件变更。当前仍在运行的实验未冻结，尚未形成最终交付ZIP。整理与排除规则只影响归档选择，不删除工作区证据。
''')
write('00-教师审阅/00-阅读顺序.md',f'''# 教师审阅入口

这是阶段性工作包。工程清单完成度{percent}，不是课程分数；不预填自评分。正式晋升、物理/PPA和最终发布仍HOLD。

1. [成果汇报与考核对照](../成果汇报与考核对照.html)：现有结果、100分规则的22项展开及缺口。
2. [生产流程全景图](../工程生产流程全景图.html)：模块依赖、悬停关联、证据和真实记录耗时；人工制作耗时未记录则明确写未记录。
3. [当前评分证据索引](01-评分证据索引.md)：分值为官方上限，教师评分留空。
4. [合规与复现检查](02-合规与复现检查.md)、[优化过程](03-优化过程导航.md)：源码、失败决策、合同与执行边界。
5. [未完成事项](04-未完成事项.md)：重点审核物理、GPU交互性能、资源和最终复现。

新CPU组合已完成3+3交错独立重启及12冻结题确认；新GPU baseline1000已独立封存。{board}

新FF实际映射已生成，并独立重读核对；21.096mm²是综合单元面积，不是布局布线面积或PPA通过结论。历史物理报告只作为来源证据保留。

原导航快照保留于[更新前记录](../7-审计与验收/审阅导航同步-20261110/更新前/)。当前HTML与JSON由同一封存门生成；运行进展以实验status和独立验收收据为准。
''')
state_names={'done':'证据具备','partial':'部分具备','todo':'待完成','gap':'缺口'}
lines=[f'# 官方100分：当前评分证据索引\n\n2026-11-11由成果页数据同步。工程清单完成度{percent}，不是已得分。下列分值是官方上限，教师评分保持空白；证据充分性由老师审核。\n\n[当前交互成果页](../成果汇报与考核对照.html) · [原rubric](../7-审计与验收/老师网页合同快照/rubric.json)\n']
for group in D['rubric']:
 lines += [f"\n## {group['title']}（{group['points']}分）\n\n| 条目 | 上限 | 证据状态 | 已有与缺口 | 证据 | 教师评分 |\n|---|---:|---|---|---|---|\n"]
 for row in group['items']:
  title=row['title']+(' / '+row['platform'] if row['platform'] else '');ev=D['evidence'][row['evidence']];text=(row['have']+' **未闭环：**'+row['gap']).replace('|','\\|').replace('\n',' ')
  lines.append(f"| {title} | {row['points']} | {state_names[row['status']]} | {text} | [{ev['title']}](../{ev['path']}) |  |\n")
lines += [f'\n新增物理阶段：[4形状5326条四态与结构预检](../{pre})；[真实标准单元映射与独立重读](../{mapping})。这两项不代表PPA合格，也不自动提高任何教师分数。\n']
write('00-教师审阅/01-评分证据索引.md',''.join(lines))
write('00-教师审阅/02-合规与复现检查.md',f'''# 合规与复现检查导航

更新2026-11-11，工程进度{percent}不是教师成绩。本机验收继续，尚未执行异机或完整新装环境复现。

| 检查对象 | 现有证据 | 结论边界 |
|---|---|---|
| CPU算子 | [完整对照](../8-本轮实验/CPU完整优化对照/summary.json) | baseline/Top-K各1000匹配 |
| 新GPU baseline | [1000条独立收据](../8-本轮实验/GPU同硬件全1000-20261108/验收结论.json) | 同一新宏绑定硬件；不追认其他候选或原物理包 |
| GPU候选板 | [持续状态](../8-本轮实验/GPU完整候选板-20261109/status.json) | {board} |
| CPU新组合 | [最终确认](../{cpu}) | 3+3重启、12题81步；同一新固定ROM与5.040，PPA仍HOLD |
| DMA | [验收报告](../9-GPU复现/整机DMA重建/验收报告.md) | 30故障+3正常控制；不是原物理身份恢复 |
| 整机协议 | [90条收据](../8-本轮实验/GPU整机协议-20261108/验收结论.json) | 背压、保持、忙态复位各30条 |
| Nano双端 | [冻结12题收据](../8-本轮实验/Nano冻结问题双端验收-20261108/completion.json) | GPU SimX功能；不当作GPU交互性能证据 |
| 原物理来源 | [32/50复核](../8-本轮实验/GPU生成规则物理恢复-20261110/verification.json) | 18项未匹配，原身份HOLD |
| 新FF实现输入 | [预检](../{pre}) / [映射独立收据](../{mapping}) | 4形状四态+结构、实际标准单元映射；整机映射后等价、布局布线/时序/功耗未闭环 |
| CPU可搬移包 | [独立验收](../8-本轮实验/NanoCPU可搬移运行包-20261109/验收封存.json) | 同机干净目录12题+独立入口1题；非异机/新装工具环境 |
| 最终封包 | [当前体积预检](../7-审计与验收/打包预检-20261111/plan-deduplicated.json) | 仅清单预检，实际ZIP/CRC与全流程复现待验 |

## 统一只读审计

在RouteB根目录运行 `python audit_delivery.py`；该入口核验选定独立封存SHA、CPU确认及两份HTML一致性，不启动RTL，不冒充新目标运行。`--require-final`在缺项存在时返回2；SHA或事实检查失败返回1。[本机入口验收](../7-审计与验收/统一离线审计-20261110/entrypoint-verification.json)。

完整重跑需按对应实验的生成/驱动脚本及锁定环境执行，耗时不能用离线审计代替。当前GPU完整板已有唯一持锁驱动，不能再开第二个写入相同输出的进程。源码、原始日志、输入、错误记录与阶段收据保留在各实验目录。
''')
write('00-教师审阅/04-未完成事项.md',f'''# 未完成事项（2026-11-11）

工程清单完成度{percent}，目标98%尚未达到。物理/PPA及正式晋升仍HOLD；不把阶段映射成功改写成最终完成。

1. **最高优先：新硬件物理链。** 新FF四态/结构检查与实际标准单元映射已独立封存；综合单元面积21.096mm²，资源代价较大。10 ns综合后STA报告setup裕量−2121.78 ns，最差路径经过指令缓存的FF存储写入逻辑。[STA报告](../{sta})。SRAM包装的5326条四态事务与164个宏实例绑定检查已通过。[宏绑定记录](../{sram})。公开32×256与8×1024原版模型已通过3624条事务，对应LEF、TT Liberty与GDS已核对。补20×64与8×128两种宏，再验收映射后整机等价、布局布线、寄生提取、时序与功耗。原物理来源32/50、18项未匹配，不能用本轮新映射冒充恢复原身份。
2. **完整GPU候选板独立验收。** {board} 逐条保留数值、周期、指令和外存流量。不能用已过baseline1000替代候选1000；不补造官方权重，不隐去RNE额外访存与周期退化。
3. **GPU Nano交互性能。** 冻结12题SimX功能已过，但缺同锁定硬件下baseline/优化TTFT、decode、整会话真实周期对照。CPU已完成新固定ROM公平配对、3+3交错重启和12题81步，不重跑已封存工作。
4. **模型质量。** 根号3扩展问题仍答错，须保留能力边界；冻结4领域12题通过不能声称通用问答或数学能力。
5. **最终交付包与复现。** 当前只做本机验收，最终包须满足压缩≤1GiB、展开≤3GiB、CRC和完整文件SHA；当前清单约{size:.2f}GiB。4份逐个核对SHA的重复视图仅在压缩包中合并，路径与SHA记录在PACKAGING-DEDUPLICATED-VIEWS.json。待候选板封存后生成最终ZIP并执行CRC。还需完整干净环境复现。第二台电脑暂缺，不伪称异机复现。

新增统一审计入口已确认：普通模式能核验选定证据，`--require-final`因缺项返回2。每次阶段完成后更新两份HTML与此导航，保留源码、日志、失败记录和真实计时。
''')
write('7-审计与验收/完善进度.md',f'''# 当前完善与验收状态

更新2026-11-11。工程清单完成度{percent}，不是课程分数。当前完整状态以[成果页](../成果汇报与考核对照.html)、[当前缺口](../00-教师审阅/04-未完成事项.md)和各独立验收收据为准。

已完成：CPU算子两组各1000；新GPU baseline1000独立封存；新DMA30+3、整机协议90；冻结Nano双端12题；CPU组合新固定ROM公平配对+3+3交错重启+12冻结题；新FF存储四态/结构预检与真实标准单元映射独立重读。

{board}

物理来源32/50；新映射1547376个真实库单元，综合单元面积21.096mm²，原物理身份与本轮PPA均未闭环。最终ZIP/CRC、GPU Nano交互周期、完整环境复现和正式晋升仍待完成。历史导航备份保留在本目录的审阅导航同步-20261110/更新前，不用旧阶段状态覆盖当前事实。
''')
print(json.dumps(dict(status='CURRENT_REVIEW_NAVIGATION_SYNCED',completion=D['completion'],rubric_items=sum(len(g['items']) for g in D['rubric']),prior_navigation_preserved=True),ensure_ascii=False))