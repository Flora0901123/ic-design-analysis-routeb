#!/usr/bin/env python3
"""Build + run the course CPU SoC (CourseSimSoC) with a best-effort LiteX stack.

Preconditions (see 1-技术栈与环境/安装说明.md):
  - venv with litex/migen/litedram/liteeth/liteiclink/litescope/meson + numpy/cocotb/pytest
  - riscv64-unknown-elf-gcc, verilator, libevent/json-c/zlib dev headers
  - shared/rtl/exp_q15_q6.mem and silu_q11_q6.mem present
  - build/vexriscv-profiles/VexRiscv_Full_4k.v present (copy from
    pythondata_cpu_vexriscv's VexRiscv_Full.v, which is already 4k/4k cache)

Run:  .venv/bin/python build_cpu_rtl.py
"""
import os
import subprocess
import sys
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent / "student-mini-v1-cpu-gpu" / "sources"
ROOT = Path(os.environ.get("COURSE_SOURCES", str(ROOT)))

sys.path.insert(0, str(ROOT))
os.environ.setdefault("COURSE_VERILATOR_BIN", "/usr/bin/verilator")
os.environ["PATH"] = str(ROOT / ".venv/bin") + ":" + os.environ.get("PATH", "")
os.environ["PYTHON"] = str(ROOT / ".venv/bin/python")

from integration.litex.soc import build_soc  # noqa: E402


def main():
    out = ROOT / "build/student-mini/cpu-rtl-repro"
    print(f"== building CourseSimSoC -> {out} ==", flush=True)
    start = time.time()
    try:
        build_soc(output_dir=out, run=False)
    except Exception as e:
        print(f"BUILD_FAIL {type(e).__name__}: {e}", flush=True)
        return 1
    print(f"== build OK, elapsed {time.time()-start:.0f}s ==", flush=True)

    v = out / "gateware/obj_dir/Vsim"
    if not v.is_file():
        print("ERROR: Vsim not found", flush=True)
        return 1
    print("== running Vsim (BIOS smoke) ==", flush=True)
    p = subprocess.Popen([str(v)], cwd=out / "gateware",
                         stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                         text=True, errors="replace")
    seen = []
    try:
        for line in p.stdout:
            seen.append(line)
            if "Memtest OK" in line or "Booting from serial" in line:
                break
    finally:
        p.terminate()
    for l in seen[-12:]:
        sys.stdout.write(l)
    ok = any("Memtest OK" in l for l in seen)
    print(f"== {'CPU_RTL_PASS (Memtest OK)' if ok else 'CPU_RTL_INCOMPLETE'} ==", flush=True)
    return 0 if ok else 1


if __name__ == "__main__":
    raise SystemExit(main())
