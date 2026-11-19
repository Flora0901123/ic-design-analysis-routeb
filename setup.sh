#!/usr/bin/env bash
set -euo pipefail
HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SRC="$HERE/student-mini-v1-cpu-gpu/sources"
mkdir -p "$HERE/8-本轮实验"
exec > >(tee "$HERE/8-本轮实验/setup-$(date -u +%Y%m%dT%H%M%SZ).log") 2>&1
python3 "$HERE/initialize_workspace.py"
echo 'Reference integrity audit is separate: python3 reproduce.py verify-reference; existing mismatch remains unresolved.'
if [ "$(id -u)" = 0 ]; then SUDO=(); else SUDO=(sudo); fi
"${SUDO[@]}" apt-get update
"${SUDO[@]}" env DEBIAN_FRONTEND=noninteractive apt-get install -y build-essential cmake ninja-build pkg-config bison flex gawk python3-pip python3-venv git curl ca-certificates verilator binutils-riscv64-unknown-elf gcc-riscv64-unknown-elf openjdk-17-jdk-headless libevent-dev libjson-c-dev zlib1g-dev libreadline-dev
python3 -m venv "$SRC/.venv"
"$SRC/.venv/bin/python" -m pip install -r "$HERE/1-技术栈与环境/requirements-tested-cpu.txt"
"$SRC/.venv/bin/python" "$HERE/prepare_local.py"
echo 'CPU environment prepared; no formal baseline or promotion claimed.'
