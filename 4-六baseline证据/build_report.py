import hashlib
import json
from pathlib import Path

PKG = Path("/home/camellia/socai/student-mini-v1-cpu-gpu")
OUT = Path("/home/camellia/socai/repro")
OUT.mkdir(parents=True, exist_ok=True)


def load_jsonl(path):
    return [json.loads(l) for l in path.read_text(encoding="utf-8").splitlines()]


def build_report(platform):
    recs = load_jsonl(PKG / f"data/records/{platform}.jsonl")
    gold = load_jsonl(PKG / "data/golden/vectors.jsonl")
    assert len(recs) == len(gold) == 1000
    by_ordinal = {g["ordinal"] if "ordinal" in g else i: g for i, g in enumerate(gold)}
    rows = []
    for i, r in enumerate(recs):
        ordi = r.get("ordinal", i)
        g = by_ordinal[ordi]
        assert r["case"]["id"] == g["case"]["id"] and r["seed"] == g["seed"]
        rows.append({
            "case": r["case"],
            "seed": r["seed"],
            "prng": r.get("prng"),
            "inputs": g.get("inputs"),
            "input_sha256": r.get("input_sha256"),
            "golden": r["golden"],
            "observation": r["observation"],
            "comparison": r.get("comparison"),
            "status": r["status"],
        })
    return {"platform": platform, "records": rows}


def main():
    for platform in ("cpu", "gpu"):
        report = build_report(platform)
        raw = json.dumps(report, ensure_ascii=False, separators=(",", ":")).encode("utf-8")
        sha = hashlib.sha256(raw).hexdigest()
        path = OUT / f"report-{platform}.json"
        path.write_bytes(raw)
        (OUT / f"report-{platform}.sha256").write_text(sha + "\n")
        print(f"{platform}: records={len(report['records'])} sha256={sha} bytes={len(raw)}")


if __name__ == "__main__":
    main()
