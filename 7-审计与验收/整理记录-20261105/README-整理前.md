# Route B（CPU＋GPU）交付工作区

本目录包含独立参考包、工作源码、CPU/GPU实际运行证据和复现入口。CPU baseline/Top-K已完成各1000条RTL数值匹配；GPU baseline/Top-K已完成各1000条SimX执行，其中970条匹配、30条DMA注入不支持。Nano四组消融及基线/组合各100次重复已齐；GPU四组SimX全回归和16次开发RTLSIM周期已完成。正式晋升、GPU完整RTLSIM性能板、协议/物理来源与异机验收尚未完成。

## 证据阅读顺序

1. `7-审计与验收/完善进度.md`：真实进度与验收条件。
2. `5-技术报告/技术报告.md`：当前报告；旧报告保存在修改前快照。
3. `4-六baseline证据/`：老师发布记录的离线重比对，不是本机六baseline重跑。
4. `3-优化链-P1/`：CPU优化、四组消融及GPU候选全量回归导航，候选仍为HOLD。

## 新复现入口（WSL2 Ubuntu 24.04）

在本目录执行 `bash setup.sh`，只安装/适配本目录的工作副本；再执行 `student-mini-v1-cpu-gpu/sources/.venv/bin/python reproduce.py cpu --limit 1000`。

离线校验：`python reproduce.py verify-reference`。环境诊断：`python reproduce.py doctor`。

完整运行日志和逐条校验写入 `8-本轮实验/`。CPU转录通过不等于协议formal、物理或正式baseline通过。GPU计分必须使用RTLSIM。

本轮优化入口：[完成的实作、收益、退化与剩余门槛](3-优化链-P1/本轮优化总结.md)。

成果汇报页：[当前成果、考核对照与完成度](成果汇报与考核对照.html)（离线HTML，进度估算不是课程成绩）。
