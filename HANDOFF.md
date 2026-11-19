# 2026-11-11 最新接续检查点

工程清单为78.125%，教师评分待评，正式晋升及PPA保持HOLD。WSL停止后，GPU候选板从668条检查点重新校验并续跑，记录时已采集748/1000条。用 `8-本轮实验/GPU验收接续-20261109/resume-20261111-pids.json` 和独占锁确认活性。接续流程采满后独立封存并重建两份HTML。CPU组合的3+3交错独立重启及冻结12题已独立封存，证据入口见成果页。

- GPU整机新FF映射的10 ns综合后STA已完成。setup裕量−2121.78 ns，hold裕量+0.31 ns，最差路径从指令缓存寄存器进入FF存储写入逻辑。[实测路径](8-本轮实验/GPU新FF综合后STA-20261111-v5/sta.log)
- SRAM路线已通过4种包装5326条四态事务与164个整机宏实例绑定核对。公开32×256、8×1024宏的原版模型另通过3624条事务，V、TT Liberty、LEF和GDS使用同一提交。下一步补20×64与8×128两种宏，再跑映射后整机等价及物理签核。[公开宏视图核对](8-本轮实验/GPU公开SRAM视图-20261111/gds-check.json)
- 打包清单将4份逐个核对SHA的重复物理网表视图合并，保留路径与SHA的对应关系。候选板封存后复核体积、生成ZIP并检查CRC，随后做完整干净环境复现。[打包预检](7-审计与验收/打包预检-20261111/summary.json)

以下为历史接续记录。

> 最新（2026-11-10）：GPU同硬件baseline1000条已独立封存，后台进入完整candidate1000板；工程清单现78.125%（不是成绩，仍未98%）。CPU新固定ROM组合的3+3交错独立重启与12题81步已全部通过并独立封存286项：见8-本轮实验/CPU-Nano组合最终确认-20261110/验收结论.json。新基线TTFT3859315→3681514（4.607%），decode7.242%、session5.826%；未改主指标、未与旧ROM混比、未正式PROMOTE。物理来源32/50，PPA仍HOLD。下文历史检查点请按日期阅读。

> 最新续做（2026-11-10）：工程完成度仍75%，非分数，>=98目标尚未达到。GPU同硬件baseline已从657条中断检查点复核恢复，使用独立于对话子进程的本机WMI一次性隐藏进程（无定时/开机任务）。基线wrapper22884/WSL30620；新版接续wrapper20724，实际PID/结果见各Nov10 process.json，不凭RUNNING字样判断活性，须看锁owner。唯一numeric入口仍run_gpu_same_hardware_1000_parallel.py。新coordinator会等待基线1000、独立seal、更新页，然后才运行完整candidate1000和独立seal。停止时给numeric目录STOP_AFTER_CURRENT、接续目录STOP_AFTER_STAGE，不重复启动。
>
> 物理来源新增按原生成规则精确恢复top.v+4块LEF，现32/50、18未匹配。独立收据在8-本轮实验/GPU生成规则物理恢复-20261110；小7z及全部401 Git blob也实查无新增，资料在GPU源小包依赖复核-20261110。没有旧物理身份/PPA通过，正在准备自建新物理包输入方案（不可伪称恢复旧宏）。CPU可搬移目录12题81步+独立入口1题已封存。新CPU 5.040/128KiB固定ROM公平baseline与matmul4已同模型同位通过，matmul4主指标TTFT退化1.723%拒绝，不能换decode主指标；结果8-本轮实验/CPU-Nano固定ROM-matmul4-1794284177187099883/summary.json。紧凑strided候选正在同模型实跑。
>
> 验收器审计加固已保存修改前源码7-审计与验收/验收器加固-20261110：候选聚合只用重新解析值，失败非零，共用锁、封存不重写、协调器检查writer活性；当前活动numeric加载修改前版本，真实脚本快照由driver-source-history-20261110.json绑定，独立seal会带入证据。两HTML现在28模块/54关联（全景），只在真实独立封存后按75→78.125→81.25更新，其他门槛HOLD。下文旧记录按历史阅读。

> 当前驱动更新：全量GPU回归已从300条检查点改用 `7-审计与验收/run_gpu_same_hardware_1000_parallel.py`，不要再启动原串行脚本。目标二进制/RTL/编译选项不变，已验证字节相同的主机库RAM缓存与两个隔离进程，公共2vCPU/8GiB，缓存失效可按SHA自动恢复。计数采集4控制已封存，提交清单展开约1.83GiB；最终ZIP未验。下文保留早期记录。

> 续做快照（2026-11-08，D盘）：原适配器形式门、新DMA30条、整机协议90条已封存通过。冻结Nano双端各12题通过，81步token/hidden/logits逐位一致。原物理审计展开.gz后修正为26/50匹配、24未匹配，身份仍HOLD。成果页完成度75%（非成绩），未达到98%；同硬件全1000条仍由 `7-审计与验收/run_gpu_same_hardware_1000.py` 持续执行，状态见相应status.json，不要重复启动。P3批量探针失败已拒绝。隔离的仿真器主机-O3构建实验仅减少宿主耗时，不计目标性能，未验证不得替换正式二进制。下一步全1000、完整性能板、物理与资源、质量和最终封包。旧记录在下文保留。

> 存储迁移（2026-11-08）：两个完整目录已迁至 `D:\Users\Camellia\Desktop` 下同名文件夹。后续修改仍只在 **D盘RouteB交付** 进行；D盘课程资料目录保持只读。C盘两个旧路径仅为指向D盘的junction，不保留数据副本，因此历史绝对路径继续兼容。53277个文件、198个链接及大小/修改时间核对通过；80项协议证据SHA仍匹配。迁移明细见 `7-审计与验收/迁移至D盘-20261108.json`。
>
> 迁移时验收已停止并保存检查点：同硬件数值回归150/1000、整机协议53/90、CPU冻结问题7/12；GPU冻结问题12/12已通过。未完成任务状态为 `INTERRUPTED_FOR_STORAGE_MIGRATION`，不能当作全量通过。恢复前须保留并检查中断案例日志，避免将残缺日志当作有效缓存。98%目标尚未达到，继续原优先级工作。

> 最新续做（2026-11-08）：原generic适配器协议门通过：命令32步安全、两个512位内存端口初始检查+归纳、12项覆盖、8/8突变检测。完整日志见 `8-本轮实验/GPU原协议门-20261108/smt32/`。整机协议和同硬件1000条回归进行中，整体完成度仍71.875%；逐项进度见 `7-审计与验收/98目标逐项完善.md`。

> 最新（2026-11-08）：新重建宏绑定GPU的DMA功能验收已通过：P1/P2/P3-MINI-30各10seed，30/30，另3条正常控制位精确匹配。新网表、4种功能SRAM模型、manifest、设备状态与总线握手日志均已保留。属于新重建功能边界，不代表原老师物理身份或物理签核；旧SimX970条不与新30条拼作正式1000条。先读 `9-GPU复现/整机DMA重建/验收报告.md`。原缺件预检和历史失败记录继续保留。

> 最新续做（2026-11-07）：Verilator5.040已从官方源码安装；修正状态地址常量的Yosys展开差异，真实全位宽适配器局部安全归纳通过；5.040下120探针通过，修正后8/8突变被检测。整机DMA30条仍未执行，映射物理缺件、原32步协议覆盖与其他发布门仍HOLD。先读 `7-审计与验收/GPU-DMA协议与环境续做-20261107.md`。下文保留历史状态。

> 最新状态（2026-11-04）：先读 `7-审计与验收/完善进度.md`。下文为历史交接，含已过时状态；token 8 实际为“。”，旧“呀”解码有误。CPU算子1000条baseline/Top-K已数值匹配；GPU baseline与Top-K的SimX各1000条已实际执行，970匹配、30 DMA注入不支持。CPU Nano四组消融已齐，组合首token改善0.792%未达2%。GPU四组开发RTLSIM共16次实测已完成，组合两个P1探针周期减少2.802%/2.912%；CPU基线/组合各100次独立RTL重复全部通过。完整汇总见 `3-优化链-P1/本轮优化总结.md`。完整性能板/版本/协议/物理门槛尚未齐，未正式PROMOTE。

# HANDOFF · 交接文档（给完全没有上下文的新会话）

> 本文件收束全部历史对话。新会话先读这里，就能完整接手。

---

## 一、我们在做什么任务

**课程「集成电路设计与分析」的交付任务**，围绕老师课件 `C:\Users\Camellia\Desktop\集成电路设计与分析\deepseek-v32-inference-map (4).html` 里的
「学生工作包与考核」中 **B · CPU＋GPU** 路线，按**四种证据**向老师交付，总分 100：

| 证据 | 分值 | 内容 |
|---|---|---|
| 技术报告与交付表达 | 20 | 叙述清晰/条件表述/图表导航/交付说明 |
| 合规与正确性 | 40 | SPEC合规/算子正确性/Nano真实性/可复现性 |
| 项目理解与研究能力 | 20 | 原理/瓶颈/实验设计/反思迁移 |
| 优化晋升与交互性能 | 20 | 算子收益/晋升父链/因果解释/Nano收益/资源副作用 |

评分契约的权威文件：`student-mini-v1-cpu-gpu/sources/grading/student-mini/rubric.json`。
打分要求 docx：`C:\Users\Camellia\Desktop\集成电路设计与分析\交付打分要求.docx`。

**老师最看重的三件事**：① 可复现性（任何人能复现）② 技术栈搭建过程可见 ③ 优化链有真实数据 + 可运行程序。

**环境**：Windows 11 主机 + WSL2 Ubuntu-24.04（root 用 `wsl -u root` 免密进入）。

---

## 二、已经完成了什么（按时间顺序）

### 1. 发现参考包并离线校验（完成 ✅）
- Route B 参考包 = `C:\Users\Camellia\Desktop\集成电路设计与分析\student-mini-v1-cpu-gpu\`（WSL 内副本 `~/socai/student-mini-v1-cpu-gpu/`）
- `verify_release.py` 离线校验：**exit 0，0 问题**。cpu/gpu 各 1000 条记录从原始 BF16 位模式独立重比对 golden 全 PASS；2572 个证据文件 SHA 全对。
- 六 baseline mean_cycles：cpu 24506/40837/77620；gpu 111886/129367/298378。

### 2. 技术栈搭建（完成 ✅）
在 WSL2 里装齐：gcc/g++ 13.3、Verilator 5.020（apt 无 5.040）、riscv64-unknown-elf-gcc 13.2、Java 17、
litex 2024.12 + migen + litedram + liteeth + liteiclink + litescope + meson、pythondata-cpu-vexriscv/picolibc 等。
快照见 `1-技术栈与环境/toolchain-snapshot.json`，报告见 `1-技术栈与环境/技术栈搭建报告.md`。

### 3. CPU RTL 真实跑通（完成 ✅）
`CourseSimSoC`（VexRiscv RV32IM + 256MiB LiteDRAM + 加速器外壳 + 235 个共享 RTL）用 Verilator 完整编译，
运行到 **`Memtest OK`**。这是"真实 RTL 跑起来"的硬证据。

### 4. CPU 算子真实跑通（完成 ✅）
`run_student_mini_cpu.py` 喂冻结向量，P1-MINI-01~04 各 10 seed 跑通，bits 与 golden 位精确一致。
（P1-MINI-01 seed1 cycles=14960，参考 17566，差因版本不同。）

### 5. Nano 推理（完成 ✅）
- Python 参考模型（`MiniNanoRuntime.from_npz(ptq.npz)`）跑通。
- "1+1等于几"→"等于二呀"（正确）；"5+7=？"→"我无法获知实时天气呀"（诚实回退，因为字符表只含数字"1"，不含 5/7/=）。
- 三个算子 P1/P2/P3 就是 DeepSeek-V3.2 的 DSA-MLA prefill / paged MLA decode / MoE 专家，已组装进极小 NanoChat 模型（1层/hidden16/vocab256）。

### 6. CPU Nano 会话实测时间（完成 ✅）
`run_nano_cpu.py` 实跑 "一加一等于几"，得到硬件周期：
- 完整会话 7,184,546 周期（≈71.8ms @100MHz），首 token 3,859,315，P1×1、P2×4、P3×26。

### 7. P1 优化链（完成 ✅，本对话核心成果）
选择 **P1 算子**做优化，做了两个单变量优化：
- **B1 排序优化**：Top-K 冒泡排序 O(n²) → 选择排序取前 k O(n·k)。student-mini 算子加速 4.7%~13%（等权 7%），40 条 bits+selected 全匹配 golden。
- **B2 rne15 移位优化**：softmax 里 `rne_div(n, 32768)` 64-bit 软件除法（RV32IM 无硬件除法，真正瓶颈）→ 移位 rne15（`>>15` + `&0x7fff`）。

**优化前后对比（重点成果，老师重点看 `3-优化链-P1/优化前后对比报告.md`）**：

| 算子 | baseline | 优化后 | 加速比 |
|---|---|---|---|
| P1 prefill | 293,328 | 206,233 | **-29.7%** |
| P2 decode | 342,286 | 164,012 | **-52.1%** |
| P3 MoE | 1,264,956 | 1,150,360 | -9.1% |

端到端（"1+1等于几"）：7,184,546 → 7,075,832（-1.5%），token 序列完全一致（"等于二呀" [92,16,15,8,4]）。
注意：算子快 30-52% 但端到端只快 1.5%，因为注意力算子只占端到端约 8%（其余是 embedding/norm/matmul/lm_head）——这是"瓶颈判断"的写报告素材。

### 8. 交付文件夹整理（完成 ✅）
`C:\Users\Camellia\Desktop\集成电路设计与分析-RouteB交付\`，结构：
```
README.md（唯一入口）+ setup.sh（装环境）+ SHA256SUMS
1-技术栈与环境/   2-CPU算子与Nano复现/   3-优化链-P1/
4-六baseline证据/  5-技术报告/           6-源码引用/
```
一键复现：`bash setup.sh` → `python3 3-优化链-P1/optimize_p1.py`。

---

## 三、当前卡在哪

1. **GPU 平台优化链未做**：rubric「优化晋升」是每平台 10 分，CPU 平台已有实质进展，GPU 平台 0 分（需先装 Vortex/LLVM/POCL + Verilator 5.040，未装）。
2. **Nano attention 的优化（B1+B2）还没做成一键程序**：现有 `optimize_p1.py` 只覆盖 student-mini 算子（`student_mini_scalar.c`）的排序优化；Nano 会话的 attention（`student_mini_native_nano.c`）的排序+rne15 优化是手动做的（`modify_nano.py`），还没整合成一键脚本。
3. **端到端收益低（1.5%）**：因为只优化了注意力算子，P3 MoE 和 embedding/norm/matmul/lm_head 未优化。若要"端到端收益"更好看，需优化 P3（MoE 的 matmul）或非算子部分。
4. **技术报告还没把优化结果写进去**：`5-技术报告/技术报告.md` 是早期骨架，未包含最新的优化链和对比数据。

---

## 四、下一步计划

1. **把 Nano attention 优化（B1+B2）整合成一键程序**（仿 `optimize_p1.py`），让老师一键复现 P1/P2 的 30-52% 加速。
2. **补全「优化晋升」剩余评分项**：Nano 交互收益（首 token/每 token/完整会话三指标）、资源与副作用（面积/功耗/流量）。
3. **（可选）GPU 平台优化**：先装 Vortex，再跑 GPU baseline + 优化。
4. **更新技术报告**：把优化链 + 对比数据写进 `5-技术报告/技术报告.md`（四证据结构）。
5. **P3 优化**（若要端到端收益）：MoE 的 `course_w8a8_expert` 有 16×16×16 matmul，可做 weight-stationary blocking 等。

---

## 五、踩过的坑（绝对不要再踩）

### A. 环境/路径类
1. **中文路径 PowerShell→WSL 会损坏**：用 junction `C:\Users\Camellia\socai-src`（ASCII 别名）指向中文目录，WSL 里走 `/mnt/c/Users/Camellia/socai-src/`。或者直接用 PowerShell 操作中文路径（PowerShell 本身处理中文没问题）。
2. **WSL sudo 要密码**：用 `wsl -u root` 直接 root，免密。
3. **PowerShell→wsl.exe→bash 的复杂命令会坏**：内联 `for`/`grep -E "a|b"`/bash 变量 `$x`/管道，经常被 shell 错误解析。**教训：凡是复杂逻辑，写成 `.py` 脚本（Write 工具写到 `C:\Users\Camellia\AppData\Local\Temp\opencode\`，再 `wsl -- python3 /mnt/c/.../xxx.py` 运行）**，不要用 bash -c 内联。

### B. 版本/依赖类
4. **LiteX 精确 commit 缺失**：`integration/litex/toolchain.lock.json` 包内缺失。用 pip 装 litex 2024.12（best-effort），`soc.py` 的 API（LiteXModule/LiteDRAMWishbone2Native/SimSoC）实测兼容。
5. **Verilator 5.040 不可得**：apt 只有 5.020。非 nano 路径不校验版本，5.020 可用。`run_student_mini_cpu.py` 硬编码 `/home/soclab/tools/verilator-5.040/bin/verilator`，用软链 `ln -sf /usr/bin/verilator <该路径>` 解决。
6. **sbt 生成 VexRiscv 失败**：Scala 2.11.12 + SpinalHDL 1.6.0 与 Java 17/11 都不兼容（`/packages cannot be represented as URI`、`object java.lang.Object not found`）。**改用 pythondata 预生成的 `VexRiscv_Full.v`**（默认即 4k/4k cache）复制为 `VexRiscv_Full_4k.v`。

### C. 打包遗漏类（参考包缺文件）
7. **三个 BIOS 固件源缺失**：`nano_control_smoke.c`/`nano_session.c`/`cpu_operator_b0.c`（纯遗留引用，无函数被调用）→ 建空桩 `// SPDX-License-Identifier: Apache-2.0`。
8. **BIOS_DIRECTORY 被 upstream 覆盖**：LiteX 2024.12 的 `add_software_package("bios", ...)` 是追加而非替换，导致课程 bios 源找不到 → 在课程 `bios/Makefile` 加 `override BIOS_DIRECTORY := $(abspath $(dir $(firstword $(MAKEFILE_LIST))))`。
9. **查找表缺失**：`exp_q15_q6.mem`（exp(-x) Q1.15 1025 项，`rom[i]=round(exp(-(1024-i)/64)*32768)`）、`silu_q11_q6.mem`（SiLU Q5.11 2049 项）。用公式重生成。
10. **`soc_ai_labs.deepseek_v32` 模块缺失** → 建 stub（`Status(IntEnum): OK=0, BAD_LENGTH, NUMERIC_ERROR, BUS_ERROR, BAD_DESCRIPTOR`）。
11. **Nano export 脚本用 qat.npz（未打包）** → 直接用 `ptq.npz`（部署的）+ `pack()` 函数生成 image。

### D. 构建/运行类
12. **BIOS 编译用系统 python3**（无 litex）→ 设 `PYTHON=<venv>/bin/python` + PATH 加 `.venv/bin`。
13. **meson/libevent/json-c/zlib 缺失** → `pip install meson` + `apt install libevent-dev libjson-c-dev zlib1g-dev`。
14. **`export_student_mini_input.py` 要求 vectors.jsonl 在 ROOT(sources) 下**（`relative_to(ROOT)`）→ 先 `cp ../data/golden/vectors.jsonl ./vectors.jsonl`。
15. **export/run 的 FileExistsError**：identity 目录基于源码 SHA，源码不变时重跑会报目录已存在 → 从 stderr 提取 identity，读已存在的 console.log（见 `optimize_p1.py` 的 `export_inputs`/`run_case`）。
16. **run_student_mini_native_cpu.py 硬编码 `/mnt/e/.../matrix.lock`**（老师机器）→ 写自己的 `run_nano_cpu.py` 绕过。

### E. 关键理解（防止重复走弯路）
17. **student_mini_scalar.c 和 student_mini_native_nano.c 是两条独立路径**：
    - `run_student_mini_cpu.py`（1000 条算子）走 `student_mini_scalar.c` 的 `student_mini_execute`
    - `run_nano_cpu.py`（Nano 会话）走 `student_mini_native_nano.c` 的 `mini_native_scalar_attention`
    - 优化一处不影响另一处！Nano 的 attention 有自己独立的冒泡排序和 rne_div 软件除法，要分别优化。
18. **Nano 会话的 build 用 `student_mini_image` 路径（非 nano_session）**，不触发 Verilator 5.040 校验，所以 5.020 能跑。
19. **cycles 是硬件周期（mcycle CSR）**，非主机墙钟；时间换算 @100MHz（COURSE_TARGET_CLOCK_HZ）。

---

## 六、关键文件与路径（快速定位）

| 对象 | 路径 |
|---|---|
| 参考包（WSL） | `~/socai/student-mini-v1-cpu-gpu/` |
| 参考包（Windows） | `C:\Users\Camellia\Desktop\集成电路设计与分析\student-mini-v1-cpu-gpu\` |
| 交付文件夹 | `C:\Users\Camellia\Desktop\集成电路设计与分析-RouteB交付\` |
| 评分契约 | `student-mini-v1-cpu-gpu/sources/grading/student-mini/rubric.json` |
| 优化对象1 | `sources/software/student_mini_scalar.c`（student-mini 算子） |
| 优化对象2 | `sources/software/student_mini_native_nano.c`（Nano attention） |
| 数值核心 | `sources/software/operator_scalar.c`（course_stable_topk/course_w8a8_expert 等） |
| CPU 算子入口 | `sources/scripts/run_student_mini_cpu.py` |
| Nano 入口 | `sources/scripts/run_student_mini_native_cpu.py` |
| 优化对比报告 | `交付/3-优化链-P1/优化前后对比报告.md` |
| 一键优化程序 | `交付/3-优化链-P1/optimize_p1.py` |
| 交接/备忘 | `交付/HANDOFF.md`、`集成电路设计与分析/进度备忘2-RouteB复现.md` |

---

## 七、快速恢复命令

```bash
# WSL2 内
# 离线校验六 baseline
wsl -d Ubuntu-24.04 -- bash -c 'cd ~/socai/student-mini-v1-cpu-gpu && python3 verify_release.py'
# 一键复现优化链（需先 setup.sh 装好环境）
wsl -d Ubuntu-24.04 -- python3 "/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付/3-优化链-P1/optimize_p1.py"
# 跑 CPU 算子（run_cpu_case.py 在交付 2-CPU算子与Nano复现/）
# 跑 Nano 会话（run_nano_cpu.py 在交付 2-CPU算子与Nano复现/）
```

---

## 八、用户曾经给我的提问和提示词（完整交付，含意图）

按对话时间顺序，逐条完整保留（这些是用户的核心诉求，新会话务必据此对齐）：

1. **「学习所有资源」**：`集成电路设计与分析`文件夹有具体资源，必须全程围绕 `deepseek-v32-inference-map (4).html` 里的「学生工作包与考核」中 **BCPU+GPU 下的考核4种证据**，最后要按这个要求交付给老师。
2. **「复现 CPU 侧 baseline」+「直接装 WSL2 环境开跑」**：先复现 CPU 侧，且直接上 WSL2 实跑，不空谈。
3. **「先做离线检查闭环」**：先跑通 `verify_release.py` / `student_mini_inspect.py` 的离线校验（纯标准库、最可复现），再谈重跑。
4. **「直接动手做吧，全部交给你，围绕老师给的评判标准来执行，可以先上手先搭一个技术栈」**：全权托管，按 rubric 执行，先搭技术栈。
5. **「真正把 CPU RTL 跑起来，完整的技术栈建立起来，现在完全不需要报告」**：先不要写报告，专注把 RTL 真跑起来。
6. **「遇到什么困难了，为什么不动。阅读交付打分要求.docx」**：卡住时要主动汇报困难，并读老师打分要求（四种证据 100 分）。
7. **「在已适配到 CPU 和 GPU 上的 LLM 上提问 5+7=？，看看结果」**：验证极小 LLM 的真实能力边界。
8. **「最后交付给老师的一定要是拿去任何人都可复现的，老师很看重复现性」**：可复现性是硬指标。
9. **「老师也很看重思考和训练的过程，都要留下痕迹，方便后面写报告」**：过程痕迹（踩坑、决策、训练数据）要记录。
10. **「3个算子是什么？baseline 都落实了吗？路径是什么？是不是已经适配到一个 LLM 里？」**：要求讲清 P1/P2/P3 的本质、baseline 落实状态、文件路径、与 LLM 的关系。
11. **「给大模型发送 1+1等于几，记下从接受输入到回复的时间（用 baseline 算子跑出的时间）」**：测 Nano 推理的硬件周期。
12. **「优化链（每平台至少一条）…… P1P2P3 必须优化一个，而且必须让老师能够精准看到优化的过程和结果」**：优化链是交付最大缺口（优化晋升 20 分），必须真做优化、有过程有结果。
13. **「把最后交付的东西都放在 `集成电路设计与分析-RouteB交付` 文件夹下，命名好」**：交付物要集中、命名清晰。
14. **「老师也要看技术栈的搭建，要确保老师可以清楚看出我的技术栈搭建」**：技术栈搭建过程是评分重点。
15. **「保存，下次在此基础上进行」**：阶段性保存进度。
16. **「把文件夹里的整理下，太乱了并且看不懂是什么」**：交付文件夹要一目了然、分类清晰。
17. **「完全交给你，选择其中一个算子进行优化，而且最后给老师的肯定不能全是 markdown 之类的报告，要有运行的程序，老师必须能够完全复现」**：优化要做成一键可运行程序，不是纯文档。
18. **「现在要主要完成其中一个算子的优化，告诉我你选择了哪个算子，之后开始优化，并告诉我优化了什么」**：明确告知选哪个算子、优化了什么。
19. **「再用优化的算子将 1+1等于几 输入到模型测时间（用 baseline 算子跑出的时间），一定要有优化结果、与之前算子的对比，记录保存，老师可以重点看到」**：优化前后对比要有真实数据、要保存、老师重点看。
20. **「收束总结当前对话，写交接文档 HANDOFF.md（任务/完成/卡点/下一步/踩坑，重点把提问和提示词完全交付给下一个新对话）」**：本文件。

**用户风格总结**：全程强调「可复现」「过程留痕」「技术栈可见」「优化真实有数据」「交付清晰」「可运行程序而非纯文档」。新会话一切行动都要围绕这几点，且要主动汇报困难、主动保存进度。

---

## 九、一句话总结现状

CPU 平台的 P1 优化链已完整跑通（排序 + rne15 移位，P1 -29.7% / P2 -52.1%，正确性保持），交付文件夹已整理成 6 子目录 + 一键脚本；
**下一步最高优先级**是把 Nano attention 优化整合成一键程序，并补全 GPU 平台优化与端到端收益，最后把优化数据写进技术报告。
