#!/usr/bin/env bash
# 一键复现：从零搭建环境 + 跑通离线校验 + CPU RTL 构建
# 前提：WSL2 Ubuntu-24.04，参考包 student-mini-v1-cpu-gpu/ 与本脚本同级目录
set -euo pipefail

# ---------- 路径 ----------
HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
# 参考包位置：优先 PKG 环境变量，其次自动探测同级/上级目录
find_pkg() {
  for c in "$HERE/student-mini-v1-cpu-gpu" \
           "$HERE/../student-mini-v1-cpu-gpu" \
           "$HERE/../集成电路设计与分析/student-mini-v1-cpu-gpu"; do
    [ -f "$c/sources/grading/student-mini/rubric.json" ] && { echo "$c"; return 0; }
  done
  return 1
}
PKG="${PKG:-$(find_pkg)}"
[ -n "$PKG" ] || { echo "错误：找不到参考包 student-mini-v1-cpu-gpu。用 PKG=/path/to/student-mini-v1-cpu-gpu 指定。"; exit 2; }
SRC="$PKG/sources"
PKG="$(cd "$PKG" && pwd)"

echo "== 参考包: $PKG =="

# ---------- 阶段1：系统依赖（需 root / sudo） ----------
echo "== 阶段1: 系统工具 =="
sudo apt-get update
sudo env DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
  build-essential cmake ninja-build pkg-config bison flex gawk \
  python3-pip python3-venv git curl ca-certificates \
  verilator binutils-riscv64-unknown-elf gcc-riscv64-unknown-elf \
  openjdk-17-jdk-headless \
  libevent-dev libjson-c-dev zlib1g-dev libreadline-dev

# ---------- 阶段2：Python venv（精确锁定） ----------
echo "== 阶段2: Python 环境 =="
[ -d "$SRC/.venv" ] || python3 -m venv "$SRC/.venv"
"$SRC/.venv/bin/python" -m pip install --upgrade pip
"$SRC/.venv/bin/python" -m pip install -r "$HERE/1-技术栈与环境/requirements-reproducible.txt"

# ---------- 阶段3：VexRiscv RTL（预生成 VexRiscv_Full.v，默认 4k/4k cache） ----------
echo "== 阶段3: VexRiscv RTL =="
"$SRC/.venv/bin/python" - <<'PY'
import pythondata_cpu_vexriscv as pd, shutil
from pathlib import Path
src = Path(pd.__file__).parent / "verilog" / "VexRiscv_Full.v"
dst = Path("build/vexriscv-profiles"); dst.mkdir(parents=True, exist_ok=True)
if not (dst / "VexRiscv_Full_4k.v").is_file():
    shutil.copyfile(src, dst / "VexRiscv_Full_4k.v")
    print("已生成 VexRiscv_Full_4k.v")
else:
    print("VexRiscv_Full_4k.v 已存在")
PY

# ---------- 阶段4：查找表（打包遗漏，公式生成） ----------
echo "== 阶段4: 查找表 =="
cp "$HERE/2-CPU算子与Nano复现/exp_q15_q6.mem" "$HERE/2-CPU算子与Nano复现/silu_q11_q6.mem" "$SRC/shared/rtl/"

# ---------- 阶段5：离线校验（纯标准库，最可复现） ----------
echo "== 阶段5: 离线校验六 baseline（verify_release.py）=="
(cd "$PKG" && python3 verify_release.py)
echo "✓ 离线校验通过（2000 条记录位精确、证据 SHA 全对）"

# ---------- 阶段6：CPU RTL 构建+运行（可选，耗时长） ----------
echo "== 阶段6: CPU RTL 构建（Verilator）=="
(cd "$SRC" && "$SRC/.venv/bin/python" "$HERE/2-CPU算子与Nano复现/build_cpu_rtl.py")

echo ""
echo "========== 全部完成 =========="
echo "复现产物："
echo "  离线校验 → 见阶段5输出（exit 0 = 通过）"
echo "  CPU RTL  → $SRC/build/student-mini/cpu-rtl-repro/gateware/obj_dir/Vsim"
echo "  固件     → $SRC/build/student-mini/cpu-rtl-repro/software/bios/bios.bin"
