import pathlib, shutil, json, hashlib, datetime
R=pathlib.Path(r'C:\Users\Camellia\Desktop\集成电路设计与分析-RouteB交付')
S=pathlib.Path(r'C:\Users\Camellia\Desktop\集成电路设计与分析\student-mini-v1-cpu-gpu')
archive=R/'7-审计与验收'/'修改前快照'
def put(name,text):
    p=R/name
    if p.exists() and not (archive/name).exists():
        (archive/name).parent.mkdir(parents=True,exist_ok=True); shutil.copy2(p,archive/name)
    p.parent.mkdir(parents=True,exist_ok=True); p.write_text(text,encoding='utf-8',newline='\n')
if not (R/'student-mini-v1-cpu-gpu').exists():
    shutil.copytree(S,R/'student-mini-v1-cpu-gpu')
put('7-审计与验收/完善进度.md', '''# 完善与验收状态

日期：2026-10-29。原老师资料保持只读；工作包独立副本位于交付根目录。

| 项目 | 状态 | 验收标准 |
|---|---|---|
| 证据归属与报告 | 已修订，持续更新 | 参考包、历史实测、新实测分开 |
| 独立工作副本 | 已复制 | 校验原包副本后，补丁只在副本应用 |
| CPU完整1000条回归 | 待运行 | baseline/候选逐条状态、bits、selected、witness核对；协议另验 |
| CPU优化链 | 待完整验证 | 父SHA、源码差异、消融、冻结性能权重、全部门槛 |
| GPU实际运行和优化 | 未完成 | Vortex工具链、RTLSIM、完整回归、优化链 |
| Nano交互 | 历史单问题，待重跑 | 冻结问题、逐token、三指标、100次对照 |
| 物理功耗 | 仅有参考包证据 | 与实际硬件完全匹配并绑定来源后才可复用 |
| 异机复现 | 未执行 | 另一台电脑实际运行，记录环境与结果 |

不能用本机新目录代替异机验证；不能用离线校验代替硬件重跑；尚未批准正式PROMOTE。
''')
put('README.md','''# Route B（CPU＋GPU）交付工作区

本目录包含参考工作包独立副本、CPU历史实验程序和完善中的复现入口。当前是阶段性交付，尚未完成GPU本机运行、完整候选回归、物理来源绑定及异机验收。

## 证据阅读顺序

1. `7-审计与验收/完善进度.md`：真实进度与验收条件。
2. `5-技术报告/技术报告.md`：当前报告；旧报告保存在修改前快照。
3. `4-六baseline证据/`：老师发布记录的离线重比对，不是本机六baseline重跑。
4. `3-优化链-P1/`：历史CPU优化及对比，尚无正式晋升结论。

## 新复现入口（WSL2 Ubuntu 24.04）

在本目录执行 `bash setup.sh`，只安装/适配本目录的工作副本；再执行 `student-mini-v1-cpu-gpu/sources/.venv/bin/python reproduce.py cpu --limit 1000`。

离线校验：`python reproduce.py verify-reference`。环境诊断：`python reproduce.py doctor`。

完整运行日志和逐条校验写入 `8-本轮实验/`。CPU转录通过不等于协议formal、物理或正式baseline通过。GPU计分必须使用RTLSIM。
''')
put('5-技术报告/技术报告.md','''# Route B阶段性技术报告

## 任务与证据范围

CPU VexRiscv与GPU Vortex的P1/P2/P3复现、优化和Nano验证。评分按20/40/20/20四维度进行。本报告不预判分数。

## 已有工作

参考包CPU/GPU各1000条发布记录已在此前对话离线重比对，报告位于 `4-六baseline证据`。这些结果属于参考包校验；其物理、功耗、GPU和冻结Nano结果均属于老师提供的证据，不是本人在GPU上重新执行。

历史本机工作包括WSL工具链、CPU RTL Memtest、P1前4个case共40条、CPU Nano单问题及排序/固定除数RNE优化。历史来源见技术栈报告、优化前后对比报告。该轮原始日志仍需归档与来源绑定；本轮验证单独存放。

历史Nano记录：完整会话7,184,546→7,075,832周期，减少约1.5%；token序列[92,16,15,8,4]。单次会话P1/P2累计周期变化不能充当冻结性能板成绩。

## 原理与实验设计

P1进行prefill注意力；P2执行逐步decode注意力；P3执行量化MoE专家计算。tokenization与文本反解码是模型外围步骤，不是P1/P2的定义。

Top-K只选前k项，保持分数相等时token ID升序。固定除数32768的RNE采用符号/幅值、移位、余数及奇偶判定；需要验证正负、半值、奇偶与边界。RV32IM包含32位整数乘除法指令，64位除法可能使用编译器软件辅助例程，实际代价须检查反汇编，不能宣称移位函数固定为1周期。

后续分baseline、仅排序、仅RNE、组合四组进行消融。固定输入、seed、工作量、时钟与模型，冻结性能权重按合同读取；不以四个case的算术平均冒充正式加权几何平均。P3未改而周期变化的原因尚未证明，需调查代码布局、缓存和测量范围等替代解释。

## 当前不足

完整CPU1000条本机回归、协议恢复证据、GPU工具链/RTLSIM重跑与优化、Nano冻结问题与100次对照、实际硬件物理功耗绑定、异机复现仍待完成。Nano主指标：P1首token、P2每token、P3完整会话，全部三指标均报告。

## 个人贡献和引用

参考工作包提供算子、模型、golden和发布证据。本人新增工作为环境搭建适配、CPU运行、优化修改、复现脚本和证据整理，采用AI辅助开发。未把参考记录或自动生成文档作为本人硬件运行成果。

持续进度见 `7-审计与验收/完善进度.md`，本轮机器记录见 `8-本轮实验`。所有未完成门槛保留，不以完整性校验成功推导正式晋升。
''')
old=(R/'3-优化链-P1/优化前后对比报告.md').read_text(encoding='utf-8')
old=old.replace('RV32IM 无硬件除法','64位除法可能调用软件辅助例程，须反汇编确认').replace('，1 cycle','，实际周期待测').replace('**单变量原则**：只改上述两处','**待补消融**：该次组合修改了上述两处').replace('仅因编译器对代码结构的响应降 9.1%','周期下降9.1%的原因尚未证明，待对照排查').replace('（远超 rubric「至少 15% 得 3 分」的阈值）','（单问题算子累计统计，不等于冻结性能板计分结果）')
put('3-优化链-P1/优化前后对比报告.md','> 历史实验记录：尚未完成全量回归、消融与原始证据绑定，不据此判定PROMOTE。\n\n'+old)
print(json.dumps({'copied_reference':str(R/'student-mini-v1-cpu-gpu'),'status':'documentation_and_isolation_prepared'},ensure_ascii=False))
