#!/usr/bin/env python3
"""一键复现 CPU 平台 P1 优化链（单变量：Top-K 冒泡排序 -> 选择排序取前 k）。

运行：
    bash setup.sh                 # 先装工具链（见根目录）
    python3 optimize_p1.py        # 自动跑 baseline + 优化 + 对比 + 验证

输出：
    1. baseline 与优化各 P1-MINI-01~04 的硬件周期
    2. 加速比（逐 case + 等权平均）
    3. 正确性回归（bits + selected 是否匹配 golden）
    4. 结果写入 optimize_p1_result.json + optimize_p1_result.md
"""
import json
import os
import re
import shutil
import subprocess
import sys
from pathlib import Path

LIMIT = 40  # P1-MINI-01 ~ P1-MINI-04 各 10 seed

# 优化修改（old -> new），只改排序算法，不改数值合同
OLD_SORT = """            if(op==1) {
                for(unsigned i=0;i<visible;++i)for(unsigned j=i+1;j<visible;++j)
                    if(scores[ids[j]]>scores[ids[i]] || (scores[ids[j]]==scores[ids[i]] && ids[j]<ids[i])) {
                        unsigned t=ids[i];ids[i]=ids[j];ids[j]=t;
                    }
                if(count>k)count=k;
                for(unsigned i=0;i<count;++i)r->selected[r->selected_count++]=(uint8_t)ids[i];
            }"""
NEW_SORT = """            if(op==1) {
                /* B1 optimization: selection sort for top-k only (O(visible*k))
                   instead of full bubble sort (O(visible^2)). Same stable
                   tie-break (equal score -> smaller token id first). */
                unsigned limit = count < k ? count : k;
                for(unsigned i=0;i<limit;++i) {
                    unsigned best=i;
                    for(unsigned j=i+1;j<visible;++j)
                        if(scores[ids[j]]>scores[ids[best]] || (scores[ids[j]]==scores[ids[best]] && ids[j]<ids[best]))
                            best=j;
                    if(best!=i){unsigned t=ids[i];ids[i]=ids[best];ids[best]=t;}
                }
                if(count>k)count=k;
                for(unsigned i=0;i<count;++i)r->selected[r->selected_count++]=(uint8_t)ids[i];
            }"""


def find_pkg():
    candidates = [
        Path.home() / "socai/student-mini-v1-cpu-gpu",
        Path("/mnt/c/Users/Camellia/Desktop/集成电路设计与分析/student-mini-v1-cpu-gpu"),
    ]
    if os.environ.get("PKG"):
        candidates.insert(0, Path(os.environ["PKG"]))
    for c in candidates:
        if (c / "sources/grading/student-mini/rubric.json").is_file():
            return c
    raise SystemExit("找不到参考包 student-mini-v1-cpu-gpu，请用 PKG=/path 指定")


def setup_env(root):
    os.environ["PATH"] = str(root / ".venv/bin") + ":" + os.environ.get("PATH", "")
    os.environ["PYTHON"] = str(root / ".venv/bin/python")


def export_inputs(root):
    r = subprocess.run([str(root/".venv/bin/python"), "scripts/export_student_mini_input.py",
                        "--vectors", "vectors.jsonl", "--output", "build/student-mini/input-images"],
                       cwd=root, capture_output=True, text=True)
    m = re.search(r'"work":\s*"([^"]+)"', r.stdout)
    if m:
        return Path(m.group(1)).name
    # 目录已存在（源码 SHA 未变）时从 FileExistsError 提取 identity
    m = re.search(r"input-images/([0-9a-f]{64})", r.stderr)
    if m:
        return m.group(1)
    raise RuntimeError("export inputs 失败: " + r.stderr[-800:])


def run_case(root, input_dir):
    r = subprocess.run([str(root/".venv/bin/python"), "scripts/run_student_mini_cpu.py",
                        "--input-dir", f"build/student-mini/input-images/{input_dir}", "--limit", str(LIMIT)],
                       cwd=root, capture_output=True, text=True)
    m = re.search(r'"work":\s*"([^"]+)"', r.stdout)
    if m:
        work = Path(m.group(1))
    else:
        # work 目录已存在（同源码同 limit 重跑）时从 FileExistsError 提取
        m = re.search(r"build/student-mini/cpu/([0-9a-f]{64})", r.stderr)
        if not m:
            raise RuntimeError("run 失败: " + r.stdout[-500:] + r.stderr[-500:])
        work = root / "build/student-mini/cpu" / m.group(1)
    console = work / "console.log"
    if not console.is_file():
        raise RuntimeError("console.log 未生成: " + str(work))
    return console.read_text(errors="replace")


def parse_console(console):
    rows = {}
    for line in console.splitlines():
        m = re.search(r"STUDENT_CPU ordinal=(\d+) status=(\d+) cycles=(\d+):(\d+).*? bits=([0-9a-f,]*)", line)
        if m:
            ordinal = int(m.group(1))
            cycles = (int(m.group(3)) << 32) | int(m.group(4))
            bits = [int(b, 16) for b in m.group(5).split(",") if b]
            sel_m = re.search(r" selected=([0-9,]*)", line)
            selected = [int(x) for x in sel_m.group(1).split(",")] if sel_m and sel_m.group(1) else []
            rows[ordinal] = dict(status=int(m.group(2)), cycles=cycles, bits=bits, selected=selected)
    return rows


def verify(golden, rows):
    problems = 0
    for ordinal in range(LIMIT):
        g = golden[ordinal]
        r = rows[ordinal]
        gold_bits = g["golden"].get("output_bits") or []
        ok = r["bits"] == gold_bits
        if g["case"]["operator"] == "p1" and g["golden"].get("selected_token_ids") is not None:
            gold_sel = [t for ids in g["golden"]["selected_token_ids"] for t in ids]
            ok = ok and r["selected"] == gold_sel
        if not ok:
            problems += 1
    return problems


def mean_by_case(rows):
    from collections import defaultdict
    by = defaultdict(list)
    for o, r in rows.items():
        by[o // 10].append(r["cycles"])
    return {c: sum(v)/len(v) for c, v in sorted(by.items())}


def main():
    pkg = find_pkg()
    root = pkg / "sources"
    setup_env(root)
    scalar = root / "software/student_mini_scalar.c"
    if OLD_SORT not in scalar.read_text():
        # 若已经优化过，先恢复，保证 baseline 正确
        if NEW_SORT in scalar.read_text():
            scalar.write_text(scalar.read_text().replace(NEW_SORT, OLD_SORT))
        else:
            raise SystemExit("student_mini_scalar.c 不是预期的 baseline，无法安全优化")

    golden = [json.loads(l) for l in (pkg/"data/golden/vectors.jsonl").read_text().splitlines()]

    print("== 步骤1/4：跑 baseline（冒泡排序）==", flush=True)
    in_dir = export_inputs(root)
    base_rows = parse_console(run_case(root, in_dir))

    print("== 步骤2/4：应用优化（选择排序 top-k）==", flush=True)
    scalar.write_text(scalar.read_text().replace(OLD_SORT, NEW_SORT))
    in_dir2 = export_inputs(root)
    opt_rows = parse_console(run_case(root, in_dir2))

    print("== 步骤3/4：恢复 baseline 源码 ==", flush=True)
    scalar.write_text(scalar.read_text().replace(NEW_SORT, OLD_SORT))

    print("== 步骤4/4：对比 + 验证 ==", flush=True)
    base_mean = mean_by_case(base_rows)
    opt_mean = mean_by_case(opt_rows)
    base_probs = verify(golden, base_rows)
    opt_probs = verify(golden, opt_rows)

    table = []
    for c in sorted(base_mean):
        b, o = base_mean[c], opt_mean[c]
        speedup = (b - o) / b * 100.0
        table.append(dict(case=f"P1-MINI-{c+1:02d}", baseline=round(b), optimized=round(o), speedup_pct=round(speedup, 1)))
    avg = sum(t["speedup_pct"] for t in table) / len(table)

    result = dict(
        platform="cpu", operator="p1", candidate="CPU-P1-A1-selection-topk",
        limit=LIMIT, cases=table, equal_weight_speedup_pct=round(avg, 1),
        baseline_mismatch=base_probs, optimized_mismatch=opt_probs,
        correctness_regression_pass=(opt_probs == 0),
    )
    here = Path(__file__).resolve().parent
    (here / "optimize_p1_result.json").write_text(json.dumps(result, ensure_ascii=False, indent=2) + "\n", encoding="utf-8")

    md = ["# P1 优化结果（自动生成）", "",
          "| case | baseline cycles | optimized cycles | 加速比 |", "|---|---|---|---|"]
    for t in table:
        md.append(f"| {t['case']} | {t['baseline']} | {t['optimized']} | {t['speedup_pct']}% |")
    md += ["", f"- 等权平均加速比：**{avg:.1f}%**",
           f"- baseline 与 golden mismatch：{base_probs}/40",
           f"- 优化后与 golden mismatch：{opt_probs}/40",
           f"- 正确性回归：{'通过（bits+selected 全匹配）' if opt_probs==0 else '失败'}", ""]
    (here / "optimize_p1_result.md").write_text("\n".join(md) + "\n", encoding="utf-8")

    print(json.dumps(result, ensure_ascii=False, indent=2), flush=True)
    print("\n结果已写入 optimize_p1_result.json / optimize_p1_result.md", flush=True)


if __name__ == "__main__":
    runner=Path(__file__).resolve().parents[1]/"reproduce.py"
    for variant in ["baseline","topk"]:
        subprocess.run([sys.executable,str(runner),"cpu","--limit","1000","--variant",variant],check=True)

