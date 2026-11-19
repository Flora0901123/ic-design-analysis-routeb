# GPU 源小包及 SRAM 生成依赖复核（2026-11-10）

已实际检查老师目录 `open-soc-ai-labs (1).7z` 的内部清单、解压内容和全部 Git blob。**没有新增精确恢复，原绑定仍为 32/50 匹配、18/50 未匹配，物理身份仍为 HOLD。** 本结论来自内容与 SHA 检查，不再依赖归档文件时间判断。

## 归档检查结果

- 原包 SHA-256：`2212b9db656bf54abd61170a0603ad062c971bb215ac035457f47a23a2b6400f`；大小 387,664 字节。
- 内部 1,130 个条目：790 个文件、340 个目录；197 个非 Git 文件，全部解压文件合计 715,755 字节。
- Git 对象总数 570；使用 `cat-file --batch-all-objects` 取出的全部 401 个 blob 均逐一计算 SHA-256，对照剩余 18 项原绑定。匹配数为 0，扫描覆盖可达和不可达对象。
- 四条 Git 提交均为课程初始化/文档提交，完整原始日志见 `git-log.txt`；这是内容核查后的辅助信息。
- 文件名只命中 `ppa/common/constraint.sdc` 与 `shared/rtl/sram_1rw.sv`。前者仅 210 字节，SHA 为 `d37e4c6fae2d6c52bc2da31f65a77051196c75969e977f0cf0b2649ee6af34ed`，使用单一 core_clock，未定义 GPU io_clock/延迟；与缺失 top-config 约束 SHA 不同。后者是行为 RTL，不是 LEF/LIB/GDS。
- 归档中未找到 gpu_constraint.sdc、vortex 物理宏、原 staged manifest、六份 OpenRAM 配置、flat_3_place.v、quad.v 或原旧 final 网表。其 Git blob 的内容比对也未恢复这些目标字节。

内部清单和解析结果分别见 `archive-listing.txt`、`archive-entries.json`；逐项审计见 `archive-audit.json`。原包只读，解压只在本实验目录 `extracted/`。未执行归档内代码。

## 当前本机范围核查

仅检查已知 WSL 路径 `/opt`、`/root/.cache` 的一级目录和 `/home/camellia/socai/student-mini-v1-cpu-gpu`；未全盘搜索。`/opt` 只有 sbt，缓存一级无 OpenRAM/PDK 项；课程路径是已发布参考包目录。WSL PATH 中有 Python 和 Yosys，未找到 OpenRAM、Magic、Netgen、ngspice、KLayout、OpenROAD 或 Nix；五个 OpenRAM/PDK 相关环境变量为空。结果见 `local-tool-inventory.json`。这些检查不能证明其他未知目录绝对不存在安装，但当前没有可引用的完整生成环境。

## 有来源的 SRAM 恢复路线

原包锁定 [OpenRAM 固定提交](https://github.com/VLSIDA/OpenRAM/tree/b2b069ce119d1488cbe6883b2240bceb5c7ce29a)。本轮只下载该提交的 README、options.py、globals.py 和 sky130 tech.py，合计 72,595 字节，全部保存在本目录 `official-source/` 并记录 URL、commit、SHA；未安装或执行。它们用于依赖审查，不计为宏视图恢复。

原绑定生成器明确要求六种宏为 1R1W。宏名与原包装器可以确定以下逻辑条件，但不能唯一确定原 OpenRAM 几何/表征配置：

| 宏 | 数据宽度 | 深度 | 写使能位数 | 每写片段位数（按原包装器推导） |
| --- | ---: | ---: | ---: | ---: |
| vortex_dp_80x64_w4 | 80 | 64 | 4 | 20 |
| vortex_sp_128x128_w16 | 128 | 128 | 16 | 8 |
| vortex_sp_32x1024_w4 | 32 | 1024 | 4 | 8 |
| vortex_sp_32x256_w1 | 32 | 256 | 1 | 32 |
| vortex_sp_32x512_w4 | 32 | 512 | 4 | 8 |
| vortex_sp_64x128_w8 | 64 | 128 | 8 | 8 |

建议按以下依赖顺序推进；本轮没有启动其后的 EDA 步骤：

1. **先补原六份配置及 staging 收据。** 原生成命令、words_per_row、布局/供电/引脚选项、spare 及模型设置未交付；只从宏名填入宽度和深度不足以重现原字节。原 `staged-openram-banked-manifest.json` 缺失；R9 同名文件已明确标为功能重建，不能替代。
2. **固定编译器及真实 SRAM/PDK 输入。** 下载锁定 OpenRAM 源码仍需核对原修改。Sky130 技术文件依赖专门 SRAM cell 视图和 SPICE 根目录，必须获取可追溯版本/哈希；已恢复的 ORFS 标准单元 LIB 不能提供这些 SRAM 输入。[固定 Sky130 技术源码](https://raw.githubusercontent.com/VLSIDA/OpenRAM/b2b069ce119d1488cbe6883b2240bceb5c7ce29a/technology/sky130/tech/tech.py)
3. **再确定工具路线。** 锁定源码默认使用 Nix，Sky130 另需 Magic 过滤；仿真表征、DRC/LVS/PEX 工具是否需要取决于原配置，不能由当前缺件倒推出。原功耗脚本提到分析功耗模型，不足以恢复六份宏的完整运行选项。[选项源码](https://raw.githubusercontent.com/VLSIDA/OpenRAM/b2b069ce119d1488cbe6883b2240bceb5c7ce29a/compiler/options.py)、[初始化源码](https://raw.githubusercontent.com/VLSIDA/OpenRAM/b2b069ce119d1488cbe6883b2240bceb5c7ce29a/compiler/globals.py)
4. **按原规则后处理并比对十二个 SHA。** `run_student_mini_gpu_cut_synthesis.py` 消费原 staged manifest 后调用已打包 normalizer，仅把 DBU 声明 2000 改为 1000，坐标与几何不变。有 dogbone 脚本，但如果原 staging 使用它，还须恢复实际 macro-origin/clock-track-shift 参数与收据。任何输出不匹配都只能记录为新版本。

可机读依赖清单在 `sram-generation-prerequisites.json`，包含优先级、当前缺项、依据和下一步。当前没有足够来源支撑原十二份宏物理视图的精确重建；不以猜选项、猜文本或批量碰哈希替代缺失来源。

## 本轮边界

上一轮 `GPU生成规则物理恢复-20261110` 的 17 个封存文件未变；原始资料及报告构建器未改。无 EDA、无大规模下载、无安装。当前新增恢复数为 0，保持 32/50 与物理身份 HOLD。
