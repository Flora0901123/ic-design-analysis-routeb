"""Offline QA: AST-extracted validators, four real logs, and a nonblocking flock probe.
No runner/sealer main module or target program is executed. Mutations stay in memory.
"""
from pathlib import Path
import ast
import copy
import datetime
import fcntl
import hashlib
import json
import re
import sys
from collections import defaultdict

R = Path(__file__).resolve().parents[2]
QA = Path(__file__).resolve().parent
S = R / "student-mini-v1-cpu-gpu/sources"
sys.path.insert(0, str(S))
sys.path.insert(0, str(R / "7-审计与验收"))
from qualification_resource_guard import prepare, join, snapshot
prepare(); join()
from scripts.assemble_student_mini_gpu_results import parse

def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()

def extract(path, name, namespace):
    tree = ast.parse(Path(path).read_text())
    node = next(n for n in tree.body if isinstance(n, ast.FunctionDef) and n.name == name)
    exec(compile(ast.Module(body=[node], type_ignores=[]), str(path) + "::" + name, "exec"), namespace)
    return namespace[name]

baseline = R / "8-本轮实验/GPU同硬件全1000-20261108"
controls = R / "8-本轮实验/GPU锁定硬件四组候选-20261109"
trace = json.loads((R / "9-GPU复现/整机DMA重建/trace-build/completion.json").read_text())
W = Path(trace["work"])
meta = json.loads((W / "build.json").read_text())
inputdir = Path(meta["input_directory"].replace("/mnt/c/Users/Camellia/Desktop/集成电路设计与分析-RouteB交付", str(R)))
inputpath = inputdir / "inputs.bin"
blob = inputpath.read_bytes()
assert len(blob) == 1936 * 1000
G = [json.loads(line) for line in (S.parent / "data/golden/vectors.jsonl").read_text().splitlines()]
assert len(G) == 1000
parent = {row["ordinal"]: row for row in json.loads((baseline / "status.json").read_text())["records"]}
collector = R / "7-审计与验收/run_gpu_full_candidate_board.py"
sealer = R / "7-审计与验收/seal_gpu_full_candidate_board.py"
namespace = dict(G=G, parse=parse, re=re, parent=parent, BASE=baseline, blob=blob, hashlib=hashlib, sha=sha)
validate = extract(collector, "validate", namespace)
assert_rechecked_row = extract(sealer, "assert_rechecked_row", namespace)
routed = json.loads((controls / "routed-control-status-v2.json").read_text())
control_rows = {(row["variant"], row["ordinal"]): row for row in routed["records"]}
mutators = {
    "case_id": lambda v: v + "-MUTATED", "seed": lambda v: v + 1,
    "device_fault": lambda v: not v, "parent_cycles": lambda v: v + 1,
    "parent_instructions": lambda v: v + 1, "speedup": lambda v: v + .01,
    "cycle_reduction_pct": lambda v: v + 1, "cycles_regress_over_5_percent": lambda v: not v,
    "external_total_beat_change_pct": lambda v: 1 if v is None else v + 1,
    "external_read_change_pct": lambda v: 1 if v is None else v + 1,
    "parent_read_beats": lambda v: v + 1, "parent_write_beats": lambda v: v + 1,
    "selected_implementation": lambda v: "combined" if v != "combined" else "rne",
    "input_record_sha256": lambda v: "0" * 64 if v != "0" * 64 else "1" * 64,
    "cycles": lambda v: v + 1, "instructions": lambda v: v + 1,
    "external_read_beats": lambda v: v + 1, "external_write_beats": lambda v: v + 1,
}
checked = []
for ordinal in [0, 100, 330, 660]:
    log = controls / "routed-controls-v2" / f"combined-{ordinal:04d}.log"
    before = sha(log)
    old = control_rows[("combined", ordinal)]
    assert before == old["log_sha256"]
    computed = validate(ordinal, log, old["seconds"], True)
    assert_rechecked_row(computed, computed)
    for name in ["cycles", "instructions", "external_read_beats", "external_write_beats"]:
        assert computed[name] == old[name], (ordinal, name)
    rejected = []
    for field, mutate in mutators.items():
        bad = copy.deepcopy(computed)
        bad[field] = mutate(bad[field])
        try:
            assert_rechecked_row(bad, computed)
        except AssertionError:
            rejected.append(field)
        else:
            raise AssertionError(("mutated field accepted", ordinal, field))
    missing = copy.deepcopy(computed)
    del missing["parent_cycles"]
    try:
        assert_rechecked_row(missing, computed)
    except AssertionError:
        pass
    else:
        raise AssertionError("missing recomputed field accepted")
    diagnostic = copy.deepcopy(computed)
    diagnostic["reused_validated_candidate_log"] = False
    assert_rechecked_row(diagnostic, computed)
    assert sha(log) == before
    checked.append(dict(ordinal=ordinal, log=log.relative_to(R).as_posix(), log_sha256=before,
                        selected_implementation=computed["selected_implementation"], cycles=computed["cycles"],
                        instructions=computed["instructions"], numeric_status_selected_primitive_pass=True,
                        read_write_counter_matches_DMA=True, mutation_fields_rejected=rejected,
                        missing_field_rejected=True, reuse_diagnostic_only_difference_allowed=True))

# A failed nonblocking acquire does not modify or release the active writer's lock.
lockpath = baseline / ".numeric-run.lock"
lock_before = lockpath.stat()
with lockpath.open("r") as lock:
    try:
        fcntl.flock(lock, fcntl.LOCK_EX | fcntl.LOCK_NB)
    except BlockingIOError:
        second_writer_rejected = True
    else:
        fcntl.flock(lock, fcntl.LOCK_UN)
        second_writer_rejected = False
assert second_writer_rejected, "expected active numeric writer lock is not held"
lock_after = lockpath.stat()
assert (lock_before.st_ino, lock_before.st_size, lock_before.st_mtime_ns) == (lock_after.st_ino, lock_after.st_size, lock_after.st_mtime_ns)

syntax_checked = []
for name in ["run_gpu_same_hardware_1000.py", "run_gpu_same_hardware_1000_parallel.py",
             "run_gpu_full_candidate_board.py", "seal_gpu_same_hardware_1000.py",
             "seal_gpu_full_candidate_board.py", "continue_gpu_full_boards.py", "route_locked_gpu_candidate.py"]:
    path = R / "7-审计与验收" / name
    compile(path.read_text(), str(path), "exec")
    syntax_checked.append(dict(path=path.relative_to(R).as_posix(), sha256=sha(path)))

# Check all known copy sources and path transformations before the long run reaches sealing.
required = [W / name for name in ["student_mini", "student_mini.cu", "device_compat.cc", "device_compat.o", "Makefile", "run-command.sh", "common.h"]]
required += [W / "vortex-build/sw/runtime" / name for name in ["libvortex.so", "librtlsim.so", "libvortex-rtlsim.so"]]
required += [S / "software/include/numeric_luts.h", R / "9-GPU复现/整机DMA重建/project-banked.v",
             R / "9-GPU复现/整机DMA重建/staged-openram-banked-manifest.json", inputpath]
models = R / "9-GPU复现/整机DMA重建/models"
assert models.is_dir() and any(p.is_file() for p in models.rglob("*"))
history = baseline / "driver-source-history-20261110.json"
info = json.loads(history.read_text())
relative = Path(info["active_numeric_driver_snapshot_relative"])
assert not relative.is_absolute() and ":" not in str(relative)
actual = (R / relative).resolve()
assert actual.is_relative_to(R.resolve()) and sha(actual) == info["active_numeric_driver_snapshot_sha256"]
required += [history, actual]
apps = json.loads((controls / "build.json").read_text())["records"]
required += [Path(row["work"]) / name for row in apps for name in ["student_mini", "student_mini.cu"]]
MC = R / "8-本轮实验/GPU单轮多类计数运行库-20261108/runtime"
required += [MC / name for name in ["libvortex.so", "librtlsim.so", "libvortex-rtlsim.so"]]
assert all(path.is_file() for path in required), [str(path) for path in required if not path.is_file()]

# Same-name librtlsim copies are intentionally identical; no output manifest includes itself.
assert routed["bindings"][str(W / "vortex-build/sw/runtime/librtlsim.so")] == routed["bindings"][str(MC / "librtlsim.so")]
baseline_sealer = (R / "7-审计与验收/seal_gpu_same_hardware_1000.py").read_text()
candidate_sealer = sealer.read_text()
assert "for p in B.rglob('*')" in baseline_sealer and "for p in A.rglob('*')" in candidate_sealer
assert "for p in O.rglob('*')" not in baseline_sealer + candidate_sealer
assert "existing immutable candidate seal reverified; not rewritten" in candidate_sealer
assert "existing immutable 1000 seal reverified; not rewritten" in baseline_sealer
result = dict(status="FOUR_REAL_LOG_RECHECK_AND_MUTATION_REJECTION_PASS", observed_at=datetime.datetime.now(datetime.timezone.utc).isoformat(),
              scope="offline validator QA only; not full-1000 qualification or promotion", actual_target_processes_launched=0,
              real_logs_rechecked=len(checked), mutated_rows_rejected=len(checked)*len(mutators), mutation_fields_per_log=len(mutators),
              numeric_lock=dict(path=lockpath.relative_to(R).as_posix(), nonblocking_second_writer_rejected=True, lock_file_metadata_unchanged=True),
              syntax_checked=syntax_checked, copy_source_paths_checked=len(required), driver_snapshot_relative_path_verified=True,
              manifest_self_reference_detected=False, immutable_seal_guards_present=True, records=checked, resources=snapshot(),
              limitations=["Only four existing control logs rechecked; complete candidate board is not yet independently sealed.",
                           "Copy-path and syntax checks do not execute either sealer's full-1000 main flow.",
                           "Official weights, teacher physical identity, PPA and formal promotion remain separate HOLD gates."])
output = QA / "qa_candidate_recheck_receipt.json"
output.write_text(json.dumps(result, ensure_ascii=False, indent=2))
print(json.dumps({k:v for k,v in result.items() if k not in ["records", "resources", "syntax_checked"]}, ensure_ascii=False, indent=2))
