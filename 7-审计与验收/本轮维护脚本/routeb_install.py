from routeb_upgrade import R,put
import pathlib,shutil
shutil.copy2(pathlib.Path(__file__).with_name('routeb_reproduce.py'),R/'reproduce.py')
put('setup.sh', '''#!/usr/bin/env bash
set -euo pipefail
HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
SRC="$HERE/student-mini-v1-cpu-gpu/sources"
python3 "$HERE/reproduce.py" verify-reference
if [ "$(id -u)" = 0 ]; then SUDO=(); else SUDO=(sudo); fi
"${SUDO[@]}" apt-get update
"${SUDO[@]}" env DEBIAN_FRONTEND=noninteractive apt-get install -y build-essential cmake ninja-build pkg-config bison flex gawk python3-pip python3-venv git curl ca-certificates verilator binutils-riscv64-unknown-elf gcc-riscv64-unknown-elf openjdk-17-jdk-headless libevent-dev libjson-c-dev zlib1g-dev libreadline-dev
python3 -m venv "$SRC/.venv"
"$SRC/.venv/bin/python" -m pip install -r "$HERE/1-技术栈与环境/requirements-reproducible.txt"
"$SRC/.venv/bin/python" "$HERE/prepare_local.py"
echo 'CPU environment prepared; no formal baseline or promotion claimed.'
''')
put('prepare_local.py', '''"""Apply best-effort CPU adaptations only inside this delivery copy."""
from pathlib import Path
import json, hashlib, shutil
R=Path(__file__).resolve().parent; S=R/'student-mini-v1-cpu-gpu/sources'
report=[]
def change(p,data):
    old=p.read_bytes() if p.exists() else b''
    if old==data:return
    backup=R/'7-审计与验收/适配前源码'/p.relative_to(S)
    if p.exists() and not backup.exists():backup.parent.mkdir(parents=True,exist_ok=True);backup.write_bytes(old)
    p.parent.mkdir(parents=True,exist_ok=True);p.write_bytes(data)
    report.append({'path':str(p.relative_to(S)),'before':hashlib.sha256(old).hexdigest(),'after':hashlib.sha256(data).hexdigest()})
patches=R/'2-CPU算子与Nano复现/补丁'
for name in ['nano_control_smoke.c','nano_session.c','cpu_operator_b0.c']:
    target=S/'integration/litex/bios'/name
    if not target.exists():change(target,(patches/name).read_bytes())
change(S/'integration/litex/bios/Makefile',(patches/'bios_Makefile.patched').read_bytes())
target=S/'shared/python/soc_ai_labs/deepseek_v32.py'
if not target.exists():change(target,(patches/'deepseek_v32.py').read_bytes())
for name in ['exp_q15_q6.mem','silu_q11_q6.mem']:
    target=S/'shared/rtl'/name
    if not target.exists():change(target,(R/'2-CPU算子与Nano复现'/name).read_bytes())
import pythondata_cpu_vexriscv as pd
change(S/'build/vexriscv-profiles/VexRiscv_Full_4k.v',(Path(pd.__file__).parent/'verilog/VexRiscv_Full.v').read_bytes())
target=S/'scripts/run_student_mini_cpu.py'
text=target.read_text().replace("tool='/home/soclab/tools/verilator-5.040/bin/verilator'", "tool=os.environ.get('COURSE_VERILATOR_BIN','/usr/bin/verilator')")
change(target,text.encode())
out=R/'7-审计与验收/适配日志.json';out.parent.mkdir(exist_ok=True)
if report:out.write_text(json.dumps(report,ensure_ascii=False,indent=2),encoding='utf-8')
print(json.dumps({'adaptations':len(report),'formal_binding':'NOT_VALIDATED'},ensure_ascii=False))
''')
print('installed')
