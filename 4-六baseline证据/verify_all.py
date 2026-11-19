import json
import sys
from pathlib import Path

PKG = Path("/home/camellia/socai/student-mini-v1-cpu-gpu")
sys.path.insert(0, str(PKG / "sources"))
from scripts.student_mini import compare_outputs, summarize_seeds  # noqa: E402

OUT = Path("/home/camellia/socai/repro")


def load_jsonl(path):
    return [json.loads(l) for l in path.read_text(encoding="utf-8").splitlines()]


def verify_platform(platform):
    recs = load_jsonl(PKG / f"data/records/{platform}.jsonl")
    gold = load_jsonl(PKG / "data/golden/vectors.jsonl")
    by_ord = {g["ordinal"] if "ordinal" in g else i: g for i, g in enumerate(gold)}
    cases = {}
    for r in recs:
        g = by_ord[r["ordinal"] if "ordinal" in r else 0]
        cid = r["case"]["id"]
        cases.setdefault(cid, {})[r["seed"]] = (r, g)
    summary = {}
    for cid, seeds in sorted(cases.items()):
        assert sorted(seeds) == list(range(1, 11)), f"{cid} missing seeds"
        ok_rows = []
        statuses = []
        protocol_case = False
        for s in range(1, 11):
            r, g = seeds[s]
            statuses.append(r["status"])
            if r["golden"]["expected_status"] == "OK" and r["observation"]["actual_status"] == "OK":
                if "actual" in r["observation"]:
                    ok_rows.append(dict(seed=s, **compare_outputs(
                        r["golden"]["output_values"], r["observation"]["actual"],
                        r["golden"]["output_bits"], r["observation"]["actual_bits"])))
                else:
                    protocol_case = True
        num = summarize_seeds(ok_rows) if len(ok_rows) == 10 else None
        cyc = [r["observation"].get("cycles") for _, (r, _) in sorted(seeds.items())]
        summary[cid] = dict(
            statuses=statuses,
            all_pass=all(s == "PASS" for s in statuses),
            protocol_case=protocol_case,
            ten_seed_bf16=(num or {}).get("status"),
            bit_mismatch=(num or {}).get("bit_mismatch_count"),
            max_abs_delta=(num or {}).get("max_absolute_delta"),
            cycles=cyc,
            mean_cycles=sum(cyc) / len(cyc) if all(type(c) is int for c in cyc) else None,
        )
    return summary


def main():
    result = {}
    for platform in ("cpu", "gpu"):
        result[platform] = verify_platform(platform)
    total = sum(len(v) for v in result.values())
    all_pass = all(c["all_pass"] for v in result.values() for c in v.values())
    all_zero = all((c["bit_mismatch"] in (0, None)) and (c["max_abs_delta"] in (0.0, None))
                   for v in result.values() for c in v.values())
    report = dict(
        status="OFFLINE_INSPECTION_ONLY",
        platforms=list(result),
        total_cases=total,
        all_cases_pass=all_pass,
        all_bf16_bit_exact_zero_delta=all_zero,
        per_platform={p: dict(cases=len(v), pass_cases=sum(1 for c in v.values() if c["all_pass"]))
                      for p, v in result.items()},
        cases=result,
    )
    (OUT / "inspect-summary.json").write_text(json.dumps(report, ensure_ascii=False, indent=2) + "\n")
    print(json.dumps(dict(
        status=report["status"], total_cases=total, all_cases_pass=all_pass,
        all_bf16_bit_exact_zero_delta=all_zero,
        per_platform=report["per_platform"],
        # representative case samples
        p1=result["cpu"]["P1-MINI-01"]["ten_seed_bf16"],
        p1_cycles=result["cpu"]["P1-MINI-01"]["mean_cycles"],
    ), ensure_ascii=False, indent=2))


if __name__ == "__main__":
    main()
