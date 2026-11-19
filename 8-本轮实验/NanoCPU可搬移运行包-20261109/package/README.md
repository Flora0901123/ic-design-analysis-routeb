# 可搬移CPU Nano运行包

在WSL/Linux里，以有权配置cgroup的root身份运行：

```bash
python3 replay.py --output ../独立复跑-新目录名
```

默认12题，可用`--limit 1`做单题入口检查。输出目录必须不存在，脚本不会读取旧运行结果作为实际输出。输入只拷贝`.init`，目标端实际生成token/hidden/logits；期望日志只供主机比较。脚本还核对目标计数及实际加载的模块路径。

需要本机兼容的Linux运行时（glibc、libevent、json-c），无需旧构建目录或Python第三方包。配置为2vCPU/8GiB公共限制。完整依赖安装另见课程工作包setup入口；本包不宣称重新安装工具链、异机验证或GPU性能。
