import json, re
from pathlib import Path

cpu_dir = Path("/home/camellia/socai/student-mini-v1-cpu-gpu/sources/build/student-mini/cpu")
# find the most recent work dir with console.log
dirs = sorted(cpu_dir.glob("*/console.log"), key=lambda p: p.stat().st_mtime, reverse=True)
print("最新 console.log:", dirs[0])
console = dirs[0].read_text(errors="replace")

# parse STUDENT_CPU lines: ordinal, status, cycles (hi:lo)
rows = []
for line in console.splitlines():
    m = re.search(r"STUDENT_CPU ordinal=(\d+) status=(\d+) cycles=(\d+):(\d+)", line)
    if m:
        ordinal = int(m.group(1)); status = int(m.group(2))
        cycles = (int(m.group(3)) << 32) | int(m.group(4))
        rows.append((ordinal, status, cycles))

print(f"共 {len(rows)} 条 record")
# print per-ordinal cycles
for o, s, c in rows:
    case = o // 10 + 1
    seed = o % 10 + 1
    print(f"ordinal={o} (P1-MINI-{case:02d} seed{seed}) status={s} cycles={c}")

# summary per case
from collections import defaultdict
by_case = defaultdict(list)
for o, s, c in rows:
    by_case[o // 10].append(c)
print("\n=== 各 case 平均 cycles ===")
for case in sorted(by_case):
    cs = by_case[case]
    print(f"P1-MINI-{case+1:02d}: mean={sum(cs)/len(cs):.0f}  ({len(cs)} seeds)")
