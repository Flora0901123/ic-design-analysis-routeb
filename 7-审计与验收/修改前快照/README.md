# 集成电路设计与分析 · Route B（CPU+GPU）交付

> 课程「学生工作包与考核」B 路线（CPU+GPU）的完整交付：技术栈搭建、六 baseline 位精确校验、
> CPU RTL 真实跑通、P1 优化链、Nano 推理。**所有程序可一键复现。**

## 目录结构

| 目录 | 内容 |
|---|---|
| `1-技术栈与环境/` | 从零搭建工具链（安装说明 + 版本快照 + 搭建报告） |
| `2-CPU算子与Nano复现/` | CPU P1/P2/P3 算子 + Nano 推理的复现脚本、查找表、补丁 |
| `3-优化链-P1/` | **P1 优化成果**（一键程序 + 结果 + 报告 + patch） |
| `4-六baseline证据/` | 六 baseline 位精确校验证据（2000 条记录） |
| `5-技术报告/` | 四证据技术报告 + 过程/实验日志 |
| `6-源码引用/` | 参考包位置与边界说明 |

根目录：`setup.sh`（装环境）+ `README.md`（本文件）+ `SHA256SUMS`（文件完整性）。

## 三步开始

```bash
# 1. 装工具链（WSL2 Ubuntu-24.04，需参考包 student-mini-v1-cpu-gpu 在同级或 PKG= 指定）
bash setup.sh

# 2. 一键复现优化链（最核心成果，自动跑 baseline→优化→对比→验证）
python3 3-优化链-P1/optimize_p1.py

# 3. 离线校验六 baseline（纯 Python，无需 EDA）
cd student-mini-v1-cpu-gpu && python3 verify_release.py
```

## 核心成果一览

1. **技术栈**：LiteX 2024.12 + Verilator 5.020 + VexRiscv RV32IM + RISC-V GCC，完整跑通 `CourseSimSoC`（Memtest OK）。
2. **六 baseline 位精确**：cpu/gpu 各 1000 条记录，`verify_release.py` exit 0，0 问题。
3. **CPU P1 优化链**：Top-K 冒泡排序 O(n²)→选择排序 O(n·k)，加速比 4.7%~13%（等权 ≈7%），正确性回归 0/40 mismatch。
4. **算子优化 + Nano 实测对比**（重点，见 `3-优化链-P1/优化前后对比报告.md`）：
   - 优化「注意力算子」的 Top-K 排序（冒泡→选择）+ softmax 的 64-bit 软件除法→移位 rne15
   - **P1 prefill 293,328→206,233（-29.7%），P2 decode 342,286→164,012（-52.1%）**
   - "1+1等于几" 端到端 7,184,546→7,075,832（-1.5%），token 序列完全一致（"等于二呀"）
5. **Nano 推理**：极小 LLM 真实推理，"5+7=？"→诚实回退（字符表只含 "1"）。

## 如实披露（不冒充）

- 发布状态 `PARTIAL_NOT_RELEASED`；优化仅 CPU 平台（GPU 需 Vortex，未装）。
- CPU RTL 复现用 best-effort 版本（LiteX 2024.12 / Verilator 5.020 / 预生成 VexRiscv），SHA 与冻结值不同，但正确性（bits）位精确。
