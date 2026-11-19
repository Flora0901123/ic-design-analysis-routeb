# CPU(VexRiscv) Nano 会话实测时间记录

> 用 baseline 算子（P1/P2/P3 B0）在 VexRiscv RTL 上真实执行 "一加一等于几"，记录从输入到回复的硬件周期。

## 会话信息

| 项 | 值 |
|---|---|
| 问题 | 一加一等于几 |
| prompt tokens | 9（BOS+USER+6字符+ASSISTANT） |
| 生成回复 | "等于二呀"（5 token，含 EOS） |
| 后端 | vexriscv-rtl（VexRiscv RTL 实跑） |
| 模型 | student-mini-v1 冻结 PTQ checkpoint（ptq.npz sha 809472c0…） |
| 时钟 | 100 MHz（COURSE_TARGET_CLOCK_HZ） |

## 实测周期（baseline 算子）

| 指标 | 周期数 | 时间 @100MHz |
|---|---|---|
| 完整会话（输入→回复完） | 7,184,546 | 71.8 ms |
| 首 token（ttft / P1 prefill） | 3,859,315 | 38.6 ms |
| 每 token 解码（P2 decode） | ≈85,571 / 次 | 0.86 ms / 次 |
| 总指令数 | 3,987,658 | — |

## 算子执行统计（P1/P2/P3 B0）

| 算子 | 执行次数 | 累计周期 |
|---|---|---|
| P1（prefill） | 1 次 | 293,328 |
| P2（decode） | 4 次 | 342,286 |
| P3（MoE） | 26 次 | 1,264,956 |

完整标记：`STUDENT_NATIVE_CPU_COMPLETE count=5 p1=1 p2=4 p3=26`

## 逐 token 解码（"等于二呀"）

| step | token id | 字符 | 累计周期 |
|---|---|---|---|
| 0 | 92 | 等 | 3,859,315 |
| 1 | 16 | 于 | 4,651,103 |
| 2 | 15 | 二 | 5,470,449 |
| 3 | 8 | 呀 | 6,315,816 |
| 4 | 4 | \<EOS\> | 7,184,317 |

## 实测原始输出（console 关键行）

```
STUDENT_NATIVE_CPU_BEGIN prompt_tokens=9 max_tokens=12
STUDENT_NATIVE_CPU status=0 count=5 cycles=0:7184546 instructions=0:3987658
STUDENT_NATIVE_TOKEN step=0 token=92 elapsed_cycles=0:3859315
STUDENT_NATIVE_TOKEN step=1 token=16 elapsed_cycles=0:4651103
STUDENT_NATIVE_TOKEN step=2 token=15 elapsed_cycles=0:5470449
STUDENT_NATIVE_TOKEN step=3 token=8  elapsed_cycles=0:6315816
STUDENT_NATIVE_TOKEN step=4 token=4  elapsed_cycles=0:7184317
STUDENT_NATIVE_OPERATOR op=1 cycles=0:293328
STUDENT_NATIVE_OPERATOR op=2 cycles=0:342286
STUDENT_NATIVE_OPERATOR op=3 cycles=0:1264956
STUDENT_NATIVE_CPU_COMPLETE count=5 p1=1 p2=4 p3=26
```

## 说明

- 周期来自固件 mcycle CSR（VexRiscv 硬件周期计数器），非主机墙钟，非 SimX。
- cycles 是 64-bit（`高位:低位` 格式，这里高位均为 0）。
- P1/P2/P3 是 baseline（B0）实现；优化后周期应下降（rubric「Nano 交互收益」的对照基准）。
- 与参考包对比：课程披露的某次 CPU Nano 会话总 12,580,787 周期、首 token 4,300,109 周期
  （对应不同问题/生成长度，量级一致）。本记录是"一加一等于几"（5 token）的精确测量。
