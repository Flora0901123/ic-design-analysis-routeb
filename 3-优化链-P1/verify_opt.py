import json, re
from pathlib import Path

ROOT = Path("/home/camellia/socai/student-mini-v1-cpu-gpu")
cpu_dir = ROOT / "sources/build/student-mini/cpu"
dirs = sorted(cpu_dir.glob("*/console.log"), key=lambda p: p.stat().st_mtime, reverse=True)
console = dirs[0].read_text(errors="replace")

# golden vectors
gold = [json.loads(l) for l in (ROOT/"data/golden/vectors.jsonl").read_text().splitlines()]

# parse STUDENT_CPU: ordinal, status, bits(hex), selected
rows = {}
for line in console.splitlines():
    m = re.search(r"STUDENT_CPU ordinal=(\d+) status=(\d+) cycles=\d+:\d+.*? bits=([0-9a-f,]*)(?: selected=(.*))?", line)
    if m:
        ordinal = int(m.group(1)); status = int(m.group(2))
        bits = [int(b,16) for b in m.group(3).split(",") if b]
        selected = [int(x) for x in m.group(4).split(",")] if m.group(4) else []
        rows[ordinal] = (status, bits, selected)

mismatch = 0
for ordinal in range(40):
    g = gold[ordinal]
    status, bits, selected = rows[ordinal]
    # 对比 bits
    gold_bits = g["golden"].get("output_bits") or []
    bits_ok = bits == gold_bits
    # 对比 selected (P1)
    sel_ok = True
    if g["case"]["operator"] == "p1" and g["golden"].get("selected_token_ids") is not None:
        gold_sel = [t for ids in g["golden"]["selected_token_ids"] for t in ids]
        sel_ok = selected == gold_sel
    if not bits_ok or not sel_ok:
        mismatch += 1
        print(f"ordinal={ordinal} {g['case']['id']} MISMATCH bits_ok={bits_ok} sel_ok={sel_ok}")

print(f"\n=== 40 条 record 对比 golden ===")
print(f"mismatch = {mismatch} / 40")
print("结论:", "正确性回归通过（bits + selected 全部匹配 golden）" if mismatch == 0 else "有 mismatch，需排查")
