# GPU 物理验收记录

验收判定 **HOLD**。本轮使用 FMA 候选映射网表、8×128 SRAM v3 及 20×64 SRAM v2。OpenROAD 使用确定性的按宏尺寸排布作为候选起点，按老师规格维持 SKY130HD、10 ns。正式验收要求四个硬化分块分别布线和验收，再组装顶层并加载四块最终网表与 SPEF 做全芯片 STA。

| 检查项 | 实测结果 | 证据 |
|---|---|---|
| GPU 平面规划 | 8 × 8 mm，164 个宏全部在核心区内，无重叠。宏投影面积 20.055 mm² | [复核收据](gpu-floorplan/status.json) · [坐标](gpu-floorplan/macros.tsv) |
| SRAM 宏供电逻辑接入 | 328/328 宏电源引脚可按约束接到 VDD/VSS，LEF 几何存在；布线后的 PDN 连通待验 | [供电审计](gpu-macro-supply-audit-v2/status.json) |
| 10 ns 布局前 STA | setup -7.42 ns，hold +0.31 ns。最差 setup 位于数据缓存性能计数器路径 | [OpenROAD 原始日志](gpu-floorplan/openroad.log) |
| 标准单元布局 | 标准单元布局通过。布局估算 setup -7.96 ns，hold +0.31 ns | [布局日志](gpu-placement-v2/openroad.log) |
| 8×128 SRAM v3 | Magic DRC 0；LVS [Top level cell failed pin matching.](8x128-v3-native-lvs/result.report) | [DRC 收据](../GPU-SRAM宏生成-20261111/geometry-repair-v3-run-20261114-140621/8x128/recheck-magic-8.3.306/status.json) |
| 20×64 SRAM v2 | Magic DRC 1，深 N 阱间距 nwell.7；LVS Top level cell failed pin matching. | [DRC 标记](../GPU-SRAM宏生成-20261111/geometry-repair-v2-run-20261114-125749/20x64/last-drc-marker/status.json) · [Netgen 原始报告](../GPU-SRAM宏生成-20261111/geometry-repair-v2-run-20261114-125749/20x64/lvs-netgen-1.5.323/result.report) |
| 四块与顶层签核 | 初始平面规划有 7 个宏跨越 4,000 µm 中线，宏中心集中在下两块。分块前须重排宏。待生成四块和顶层最终布线、PDN、宏引脚接入证据、DRC/天线报告及全芯片寄生提取 STA | [跨线坐标](quadrant-boundary-precheck.json) · 目标 WNS ≥ 0，DRC 0，天线 0 |
| 活动功耗 | 待以同一份最终网表生成 P1/P2/P3 各 10 seed 的实际活动功耗 | 逐 seed 列出负载、采样、角点和活动覆盖率 |

8×128 的两个文件都声明相同的 36 个顶层端口。已追踪读写控制子电路的时钟与电源支路，Netgen 差异仍需结合子层网络和版图几何核实。

[8×128 电源与时钟支路](8x128-lvs-pin-inventory.json) · [首次布局失败日志](gpu-placement/openroad.log)

宏 DRC 与 LVS 分别记录。布局前使用理想时钟及线负载模型，标准单元布局时序使用估算寄生。历史物理来源与本轮候选网表的身份分别保留。

[机器可读验收收据](status.json) · [锁定网表、约束和库哈希](gpu-floorplan/inputs.json) · [共享资源观测](qualification-resource-snapshot.json)

## 四象限布局与封存回归复核

四象限按模块分别放置指令缓存 20、本地内存 16、数据缓存 bank 0 和 bank 1 各 64 个 SRAM 宏。跨界宏 7→0，未发现重叠。同版标准单元布局与合法化通过。10 ns 布局估算 setup -11.04 ns，hold +0.31 ns。较原布局 -7.96 ns 恶化 3.08 ns，最差路径涉及数据缓存 SRAM 读控制和隔离缓冲单元。顶层与四块开发网表已导出，记录 13,751 条边界网络；后续逐位重导出通过全连接复验，见下节。四块硬化及签核待验。

重新核对封存清单，baseline 和路由候选各 1,000 条日志，候选 1,017 个归档工件哈希一致。候选超过 5% 的周期回退为 0 条，外存总 beat 增幅超过 5% 的为 300 条，全部在 P2。复核课程资料、RouteB 与 WSL 缓存中的 563 个相关文件，未找到剩余 18 项的精确匹配。老师随附的小型源码归档的提交历史早于物理包。新物理实现继续验收 SRAM 的 DRC/LVS、四块硬化及整机布线后 STA / PPA。

[四象限坐标及 ODB 收据](four-quadrant-macro-floorplan/status.json) · [标准单元布局与估算时序](four-quadrant-standard-cell-placement/status.json) · [四块网表导出](four-quadrant-netlist-cut-cached/status.json)

## 四分块网表逐位重导出与全连接复验

以相同布局 ODB 导出的平面网表为参考。旧分块网表保存了 485,236 个单元和型号，但 5,380 组原网连接未完整保留。将内部带总线下标的网络逐位重命名为标量后，在保持芯片端口及各单元分块归属的条件下重新导出。逐单元、逐端口和逐网组比较全部一致，涵盖 485,236 个单元、488,558 组电气网络、1,745,622 个单元端口位、2,366 个芯片端口位。

本次通过的是分块变换的连接等价性。SRAM 20×64 仍有一项井间距 DRC，两种新宏的 LVS 仍未通过，四块硬化及顶层布线后 PPA 待验。

[全连接复验收据](four-quadrant-equivalent-scalar-export/status.json) · [修正后的分块网表](four-quadrant-equivalent-scalar-export/fixed-quad.v)

## 四块物理输入与本地内存块

使用通过等价复验的分块网表，OpenROAD 已实际加载四块并摆放 164 个 SRAM 宏与 28,126 个信号端口（LL 6,687、LR 8,056、UL 6,033、UR 7,350）。引脚按可用边和层分流。将用于物理实现的四块网表与顶层拼接后，独立比对仍得到 485,236 个单元和 488,558 组一致的电气网络。 四块共 28,126 个信号端口均通过引脚在边界内、中心落在实际轨道及定位不冲突检查。

本地内存块 Q1 使用 16 个公开 8×1024 SRAM 宏。184,901 个标准单元完成合法化，VDD/VSS 供电网连通检查通过。供电网生成仍记录 4 处未插入的候选 VDD 过孔。10 ns 约束下，时钟树前布局估算 setup −12.56 ns、hold −2.52 ns。 时钟树综合已完成。全局布线已完成。 修正 8,056 个边缘引脚后重跑全局布线，无引脚越界警告，拥塞溢出为 0。10 ns 全局布线估算 setup −10.62 ns、hold −0.32 ns。 本地内存块详细布线试跑在引脚接入阶段达到 360 秒上限，日志记录了离轨的引脚中心。 按实际金属轨道重新对齐后，Q1 再次跑通全局布线，溢出为 0，10 ns 布线估算 setup −10.63 ns、hold −0.33 ns。

20×64 SRAM 的深 N 阱边界试扩 1.4 µm 后，同一版 Magic 仍报 1 项 nwell.7。将原始版图刚性平移 (13, 17) µm 后，同一检查出现 3 处 nwell.7，标记接触检查分块边界。该对照记录了网格敏感性，原版 DRC 及两种宏的 LVS 仍待闭环。

[四块物理输入](four-block-physical-inputs/status.json) · [拼接后全连接复验](four-block-physical-inputs/stitched-equivalence.json) · [本地内存块布局与 PDN](q1-block-placement-and-pdn/status.json) · [时钟树与全局布线](q1-block-cts-and-global-route/status.json) · [引脚修正与布线复验](q1-block-pin-geometry-and-global-route/status.json) · [Q1 轨道对齐布线](q1-block-track-aligned-global-route/status.json) · [其他三块轨道检查](remaining-blocks-pin-track-preflight/status.json) · [详细布线试跑](q1-detailed-route-diagnostic/status.json) · [网表等价复验脚本](replay_netlist_equivalence.py)

## 四块硬化续做验收

四块均完成标准单元合法化、VDD/VSS 连通检查、时钟树和零溢出的全局布线。Q0 首轮溢出 72，调低 met3 的可用轨道容量后由布线器分散需求，复跑溢出为 0。

| 分块 | 全局布线溢出 | 10 ns setup 裕量 | 10 ns hold 裕量 | 收据 |
|---|---:|---:|---:|---|
| Q0 | 0 | −40.78 ns | −3.26 ns | [复跑结果](q0-global-route-congestion-retry-20261117/status.json) |
| Q1 | 0 | −10.63 ns | −0.33 ns | [轨道对齐版](q1-block-track-aligned-global-route/status.json) |
| Q2 | 0 | −7.09 ns | −2.62 ns | [布局和全局布线](other-blocks-physical-implementation-20261117/q2_UL/status.json) |
| Q3 | 0 | −35.16 ns | −5.41 ns | [布局和全局布线](other-blocks-physical-implementation-20261117/q3_UR/status.json) |

上述裕量由全局布线估算。Q1 首轮详细布线已完成引脚接入，进入轨道分配时被系统因内存不足终止。串行重跑逐块使用本机课程资源，最终详细布线、天线、DRC/LVS、提取后时序与版图验收待完成。

Q1 串行复跑通过轨道分配，第一轮详细布线至约 10% 时再次因内存不足被终止。本轮没有生成完整布线数据库。

[Q1 首轮详细布线收据](q1-detailed-routing-20261117/status.json) · [串行详细布线入口](run_serialized_detailed_routing.py) · [Q1 串行复跑日志](serialized-detailed-routing-20261117/q1_LR/openroad.log)

## SRAM 写控制短接与改线试验

8×128 的写预充电 p_en_bar0 与内部写数据 bit 7 共网，写使能 w_en0 与 bit 1 共网。20×64 的同类短接分别落在 bit 5 和 bit 6。按原 `.subckt` 端口顺序读取顶层 bank 实例，比对了原理图和版图提取网表。8×128 对 0.36 µm × 0.15 µm NMOS 做器件名称对齐诊断后，读、写控制子电路、bank 和整宏仍不匹配。

8×128 隔离候选将写端口的这两条线从默认 M3/M2 路径移到 M2/M1。已开始重新生成和独立检查，当前原版宏的 DRC 与 LVS 结论据原收据保留。

[提取网表短接收据](8x128-v3-lvs-device-name-isolation-20261118/top-write-signal-witness.json) · [Netgen 器件名隔离诊断](8x128-v3-lvs-device-name-isolation-20261118/status.json) · [新宏生成状态](../GPU-SRAM宏生成-20261111/write-control-route-run-20261118-144951/status.json)
