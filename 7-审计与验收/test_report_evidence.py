"""Offline report-gate tests. All synthetic PASS data stays in temporary fixtures."""
import hashlib
import json
from pathlib import Path
import tempfile
import unittest
from report_evidence import BASELINE, BOARD, load_gpu_progress

class ReportGateTests(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory(prefix="routeb-report-fixture-")
        self.root = Path(self.temp.name)
        self.addCleanup(self.temp.cleanup)
        self.write_state(BASELINE, "RUNNING", 657)

    def write_state(self, relative, status, count):
        folder = self.root / relative
        folder.mkdir(parents=True, exist_ok=True)
        rows = []
        for i in range(count):
            raw = f"isolated fixture ordinal {i}\n".encode()
            (folder / f"{i:04d}.log").write_bytes(raw)
            rows.append(dict(ordinal=i, log_sha256=hashlib.sha256(raw).hexdigest()))
        state = dict(status=status, records=rows)
        (folder / "status.json").write_text(json.dumps(state), encoding="utf-8")
        return state

    def seal(self, relative, run_status, seal_status):
        state = self.write_state(relative, run_status, 1000)
        folder = self.root / relative
        status_sha = hashlib.sha256((folder / "status.json").read_bytes()).hexdigest()
        manifest = {f"{r['ordinal']:04d}.log":r["log_sha256"] for r in state["records"]}
        manifest["status.json"] = status_sha
        (folder / "evidence-sha256.json").write_text(json.dumps(manifest), encoding="utf-8")
        seal = dict(status=seal_status, records=1000, cases=100, seeds_per_case=10,
                    status_sha256=status_sha, official_weighted_gain=None,
                    official_weights_supplied=False, formal_promotion="HOLD")
        (folder / "验收结论.json").write_text(json.dumps(seal), encoding="utf-8")
        return folder

    def baseline_seal(self):
        return self.seal(BASELINE, "SAME_HARDWARE_1000_NUMERIC_STATUS_PASS",
                         "SAME_HARDWARE_1000_REPLAY_INDEPENDENTLY_SEALED")

    def test_unsealed_checkpoint_stays_75(self):
        progress = load_gpu_progress(self.root)
        self.assertEqual((progress["completion"], progress["counts"]),
                         (75, dict(done=9, partial=6, todo=1)))
        self.assertFalse(progress["full_numeric"])
        self.write_state(BASELINE, "SAME_HARDWARE_1000_NUMERIC_STATUS_PASS", 1000)
        self.assertEqual(load_gpu_progress(self.root)["completion"], 75)

    def test_two_real_seal_gates_advance_separately(self):
        self.baseline_seal()
        self.assertEqual(load_gpu_progress(self.root)["completion"], 78.125)
        self.write_state(BOARD, "FULL_1000_CANDIDATE_BOARD_COLLECTED_NOT_PROMOTED", 1000)
        self.assertEqual(load_gpu_progress(self.root)["completion"], 78.125)
        self.seal(BOARD, "FULL_1000_CANDIDATE_BOARD_COLLECTED_NOT_PROMOTED",
                  "FULL_1000_CANDIDATE_BOARD_INDEPENDENTLY_SEALED")
        progress = load_gpu_progress(self.root)
        self.assertEqual((progress["completion"], progress["counts"]),
                         (81.25, dict(done=11, partial=4, todo=1)))

    def test_stale_status_and_changed_log_are_rejected(self):
        folder = self.baseline_seal()
        (folder / "0000.log").write_text("changed fixture", encoding="utf-8")
        with self.assertRaisesRegex(ValueError, "sealed evidence changed"):
            load_gpu_progress(self.root)
        self.baseline_seal()
        with (folder / "status.json").open("a", encoding="utf-8") as handle:
            handle.write(" ")
        with self.assertRaisesRegex(ValueError, "stale independent seal"):
            load_gpu_progress(self.root)

    def test_candidate_cannot_skip_baseline(self):
        self.seal(BOARD, "FULL_1000_CANDIDATE_BOARD_COLLECTED_NOT_PROMOTED",
                  "FULL_1000_CANDIDATE_BOARD_INDEPENDENTLY_SEALED")
        with self.assertRaisesRegex(ValueError, "requires the independently sealed baseline"):
            load_gpu_progress(self.root)

if __name__ == "__main__":
    unittest.main()
