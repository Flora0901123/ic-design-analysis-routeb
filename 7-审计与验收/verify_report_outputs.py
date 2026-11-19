"""Read-only consistency check for generated local review pages; no target execution."""
from html.parser import HTMLParser
from pathlib import Path
import json
import re
from report_evidence import sha

class ReportHTML(HTMLParser):
    def __init__(self):
        super().__init__()
        self.scripts = {}
        self.active = None
        self.evidence_keys = []
        self.links = []
    def handle_starttag(self, tag, attrs):
        attrs = dict(attrs)
        if tag == "script" and attrs.get("type") == "application/json":
            self.active = attrs["id"]
            self.scripts[self.active] = ""
        if "data-e" in attrs:
            self.evidence_keys.append(attrs["data-e"])
        if tag == "a" and "href" in attrs:
            self.links.append(attrs["href"])
    def handle_endtag(self, tag):
        if tag == "script":
            self.active = None
    def handle_data(self, data):
        if self.active:
            self.scripts[self.active] += data

def verify(root):
    root = Path(root)
    reports = [
        ("成果汇报与考核对照.html", "成果汇报数据.json", "report-data"),
        ("工程生产流程全景图.html", "工程全景数据.json", "project-data"),
    ]
    pages = []
    for html_name, json_name, script_id in reports:
        raw = (root / html_name).read_text(encoding="utf-8-sig")
        assert not re.search(r"__[A-Z][A-Z0-9_]*__", raw), "unrendered report placeholder"
        parser = ReportHTML()
        parser.feed(raw)
        data = json.loads((root / json_name).read_text(encoding="utf-8-sig"))
        assert json.loads(parser.scripts[script_id]) == data, "embedded and standalone data differ"
        from urllib.parse import unquote, urlsplit
        for href in parser.links:
            url = urlsplit(href)
            if not url.scheme and url.path:
                assert (root / unquote(url.path)).exists(), (html_name, href)
        pages.append((parser, data))
    report, atlas = pages[0][1], pages[1][1]
    assert (report["completion"], report["counts"]) == (atlas["completion"], atlas["counts"])
    flags = (report["gpu_numeric_progress"]["independently_sealed"],
             report["gpu_candidate_progress"]["independently_sealed"])
    assert not flags[1] or flags[0], "candidate skipped baseline seal"
    from report_evidence import load_frozen_delivery
    delivery = bool(load_frozen_delivery(root))
    assert report.get("frozen_delivery_verified",False) == atlas.get("frozen_delivery_verified",False) == delivery
    done = 9 + sum(flags) + delivery
    assert report["counts"] == dict(done=done, partial=15-done, todo=1)
    assert report["completion"] == (done + (15-done)*.5) / 16 * 100
    assert len(report["milestones"]) == 16 and sum(len(g["items"]) for g in report["rubric"]) == 22
    for parser, data in pages:
        if "evidence" in data:
            assert set(parser.evidence_keys) <= data["evidence"].keys(), "unknown evidence key"
            for evidence in data["evidence"].values():
                path = root / evidence["path"]
                assert path.is_file() and sha(path) == evidence["sha256"], evidence["path"]
        assert data["gpu_candidate_progress"]["official_weighted_gain"] is None
        assert data["gpu_candidate_progress"]["formal_promotion"] == "HOLD"
    node_ids = {n["id"] for n in atlas["nodes"]}
    assert len(node_ids) == len(atlas["nodes"])
    assert all(a in node_ids and b in node_ids for a,b in atlas["edges"])
    for node in atlas["nodes"]:
        for evidence in node["evidence"]:
            path = root / evidence["path"]
            assert path.exists(), evidence["path"]
            if evidence["sha256"]:
                assert sha(path) == evidence["sha256"], evidence["path"]
    assert report["physical_recovery"] == atlas["physical_recovery"]
    assert report["new_physical_preflight"] == atlas["new_physical_preflight"]
    assert report["new_physical_preflight"]["physical_signoff"] is False
    assert report["new_physical_mapping"] == atlas["new_physical_mapping"]
    assert report["new_physical_mapping"]["physical_signoff"] is False
    assert report["new_physical_followup"] == atlas["new_physical_followup"]
    assert report["new_physical_followup"]["physical_signoff"] is False
    return dict(status="REPORT_DATA_LINK_AND_CLAIM_CONSISTENCY_PASS", completion=report["completion"],
                counts=report["counts"], nodes=len(atlas["nodes"]), edges=len(atlas["edges"]),
                physical_exact=report["physical_recovery"]["exact_matches_after_source_recovery"],
                target_execution_performed=False)

if __name__ == "__main__":
    print(json.dumps(verify(Path(__file__).resolve().parents[1]), ensure_ascii=False, indent=2))
