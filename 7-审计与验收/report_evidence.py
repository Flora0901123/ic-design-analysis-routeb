"""Read-only, shared evidence gates for the two generated review pages."""
from pathlib import Path
import hashlib
import json
import time

BASELINE = "8-本轮实验/GPU同硬件全1000-20261108"
BOARD = "8-本轮实验/GPU完整候选板-20261109"
PHYSICAL = "8-本轮实验/GPU生成规则物理恢复-20261110/binding-recheck.json"

def sha(path):
    digest = hashlib.sha256()
    with Path(path).open("rb") as handle:
        for block in iter(lambda: handle.read(1024 * 1024), b""):
            digest.update(block)
    return digest.hexdigest()

def read_snapshot(path):
    # Parse and hash the same bytes; a live writer cannot split the two views.
    for attempt in range(10):
        raw = Path(path).read_bytes()
        try:
            return json.loads(raw.decode("utf-8-sig")), hashlib.sha256(raw).hexdigest()
        except json.JSONDecodeError:
            if attempt == 9:
                raise
            time.sleep(.1)

def verify_manifest(folder, status_hash, records):
    folder = Path(folder).resolve()
    manifest, _ = read_snapshot(folder / "evidence-sha256.json")
    if manifest.get("status.json") != status_hash:
        raise ValueError(f"seal manifest does not bind the current status: {folder}")
    for row in records:
        name = f"{row['ordinal']:04d}.log"
        if manifest.get(name) != row.get("log_sha256"):
            raise ValueError(f"seal manifest does not bind record {name}")
    for name, expected in manifest.items():
        path = (folder / name).resolve()
        if not path.is_relative_to(folder) or not path.is_file() or sha(path) != expected:
            raise ValueError(f"sealed evidence changed: {name}")

def sealed_run(root, relative, expected_run, expected_seal, snapshot=None):
    folder = Path(root) / relative
    seal_path = folder / "验收结论.json"
    if not seal_path.exists():
        return None
    state, status_hash = snapshot or read_snapshot(folder / "status.json")
    seal, _ = read_snapshot(seal_path)
    rows = state.get("records", [])
    if (state.get("status") != expected_run or seal.get("status") != expected_seal
            or seal.get("status_sha256") != status_hash
            or len(rows) != 1000 or {r.get("ordinal") for r in rows} != set(range(1000))
            or (seal.get("records"), seal.get("cases"), seal.get("seeds_per_case")) != (1000, 100, 10)):
        raise ValueError(f"incomplete or stale independent seal: {folder}")
    verify_manifest(folder, status_hash, rows)
    return seal

def load_frozen_delivery(root):
    root = Path(root)
    folder = root / "7-审计与验收/GPU全量复跑与冻结封包-20261114"
    status = folder / "status.json"
    if not status.is_file():
        return None
    result, _ = read_snapshot(status)
    if result.get("status") != "REPLAY_AND_FROZEN_ZIP_VERIFIED":
        return None
    archive = root / "RouteB-复现验收冻结快照-20261114.zip"
    receipt = archive.with_name(archive.stem+"-receipt.json")
    record, digest = read_snapshot(receipt)
    if (result["archive"] != archive.name or digest != result["receipt_sha256"]
            or record["archive"] != archive.name or record["status"] != "ARCHIVE_SIZE_AND_CRC_PASS"
            or not 0 < archive.stat().st_size == record["archive_bytes"] <= 1024**3
            or not 0 < record["archive_expanded_bytes"] <= 3*1024**3
            or record["verified_payload_sha256_files"] != record["files"]
            or sha(archive) != result["archive_sha256"]):
        raise ValueError("Frozen archive receipt failed verification")
    seal, _ = read_snapshot(folder/"replay-seal.json")
    checks = {
        "cpu_sha256": root/"7-审计与验收/ZIP洁净目录CPU全12题-20261114/status.json",
        "gpu_relocated_sha256": root/"7-审计与验收/GPU洁净安装与平台输入迁移-v2-20261114/status.json",
        "full_gpu_sha256": root/"7-审计与验收/ZIP洁净目录GPU全量-20261114/independent-1000.json",
    }
    if seal.get("status") != "CPU_GPU_REPLAY_EVIDENCE_SEALED" or any(sha(p) != seal.get(k) for k,p in checks.items()):
        raise ValueError("Frozen archive replay bindings changed")
    full, _ = read_snapshot(checks["full_gpu_sha256"])
    if (full.get("status") != "GPU_ZIP_REPLAY_1000_INDEPENDENT_PASS"
            or full.get("verified") != 1000
            or set(full["verified_log_sha256"]) != {f"{i:04d}" for i in range(1000)}
            or (result["cpu_questions"],result["gpu_target_records"],result["gpu_relocated_controls"]) != (12,1000,6)
            or result["physical_signoff"] is not False):
        raise ValueError("Frozen archive replay coverage is incomplete")
    return dict(path=status.relative_to(root).as_posix(), receipt=result, package=record)


def load_gpu_progress(root):
    root = Path(root)
    baseline_snapshot = read_snapshot(root / BASELINE / "status.json")
    current, current_sha256 = baseline_snapshot
    full_seal = sealed_run(root, BASELINE, "SAME_HARDWARE_1000_NUMERIC_STATUS_PASS",
                           "SAME_HARDWARE_1000_REPLAY_INDEPENDENTLY_SEALED", baseline_snapshot)
    board_seal = sealed_run(root, BOARD, "FULL_1000_CANDIDATE_BOARD_COLLECTED_NOT_PROMOTED",
                            "FULL_1000_CANDIDATE_BOARD_INDEPENDENTLY_SEALED")
    if board_seal and not full_seal:
        raise ValueError("candidate board requires the independently sealed baseline")
    if board_seal and (board_seal.get("official_weighted_gain") is not None
                       or board_seal.get("official_weights_supplied") is not False
                       or board_seal.get("formal_promotion") != "HOLD"):
        raise ValueError("candidate board claim exceeds the supplied evidence")
    count = len(current.get("records", []))
    if full_seal:
        numeric_note = "100案例×10seed已独立封存；其他候选、物理身份与正式资格分别验收。"
    elif count == 1000:
        numeric_note = "1000条已采集，独立封存尚未完成，不作为全量PASS。"
    else:
        numeric_note = f"已核验{count}/1000条；检查点状态{current['status']}，尚未全量独立封存。"
    board_status = root / BOARD / "status.json"
    board_state = read_snapshot(board_status)[0] if board_status.exists() else None
    if board_seal:
        board_note = "同硬件100案例×10seed候选对照板已独立封存；周期、流量与回退逐条留存。"
    elif board_state:
        board_note = f"候选板已采集{len(board_state.get('records', []))}/1000条；检查点状态{board_state['status']}，尚未独立封存。"
    else:
        board_note = "完整候选板待基线独立封存后采集及验收；16+8控制不能代替完整板。"
    delivery = load_frozen_delivery(root)
    done = 9 + bool(full_seal) + bool(board_seal) + bool(delivery)
    partial = 15 - done
    return dict(current=current, current_sha256=current_sha256, full_seal=full_seal,
                board_seal=board_seal, full_numeric=bool(full_seal), full_board=bool(board_seal),
                numeric_note=numeric_note, board_note=board_note, delivery=delivery,
                counts=dict(done=done, partial=partial, todo=1),
                completion=(done + partial * .5) / 16 * 100)

def load_physical_progress(root):
    # The selected receipt is updated only after a real source audit is sealed.
    receipt_path = Path(root) / PHYSICAL
    receipt, receipt_hash = read_snapshot(receipt_path)
    verification_path = receipt_path.with_name("verification.json")
    verification, _ = read_snapshot(verification_path)
    completion_path = receipt_path.with_name("completion.json")
    if (verification.get("status") != "PASS_32_EXACT_BINDINGS_18_UNRESOLVED_PHYSICAL_IDENTITY_HOLD"
            or verification.get("binding_audit_sha256") != receipt_hash
            or verification.get("recovery_completion_sha256") != sha(completion_path)):
        raise ValueError("physical-source verification does not bind the current audit")
    total = receipt["original_checks"]
    exact = receipt["exact_matches_after_source_recovery"]
    missing = receipt["remaining_unmatched_checks"]
    if (exact + missing != total or receipt.get("teacher_physical_identity_established") is not False
            or (verification.get("binding_checks"), verification.get("verified_binding_matches"), verification.get("remaining_unmatched")) != (total, exact, missing)):
        raise ValueError("unexpected physical-source audit scope")
    return dict(path=PHYSICAL, verification_path=verification_path.relative_to(root).as_posix(), receipt=receipt, total=total, exact=exact, missing=missing,
                note=f"物理来源{exact}/{total}项SHA精确匹配，仍{missing}项未匹配；原物理身份与本轮PPA仍未建立。")

def render_template(template, replacements, data_marker, data):
    for name, value in replacements.items():
        template = template.replace(name, str(value))
    template = template.replace(data_marker, json.dumps(data, ensure_ascii=False, separators=(",", ":")).replace("</", "<" + chr(92) + "/"))
    import re
    remaining = re.findall(r"__[A-Z][A-Z0-9_]*__", template)
    if remaining:
        raise ValueError(f"unresolved report placeholders: {remaining}")
    return template


def load_new_physical_preflight(root):
    root=Path(root)
    relative="8-本轮实验/GPU新物理入口实测-20261110-v2/验收结论.json"
    folder=(root/relative).parent
    receipt,_=read_snapshot(root/relative)
    manifest_path=folder/"evidence-sha256.json"
    if (receipt.get("status")!="NEW_FF_FOUR_STATE_AND_STRUCTURAL_PREFLIGHT_INDEPENDENTLY_SEALED"
        or receipt.get("physical_signoff") is not False
        or receipt.get("original_physical_identity") is not False
        or receipt.get("total_four_state_records")!=5326
        or receipt.get("evidence_manifest_sha256")!=sha(manifest_path)
        or receipt.get("status_sha256")!=sha(folder/"status.json")):
        raise ValueError("new FF preflight is not independently sealed")
    bindings,_=read_snapshot(manifest_path)
    for name,expected in bindings.items():
        path=(root/name).resolve()
        if not path.is_relative_to(root.resolve()) or sha(path)!=expected:
            raise ValueError(f"new FF preflight evidence changed: {name}")
    return dict(path=relative,receipt=receipt,note="新FF物理输入：4种存储形状5326条四态检查及整机结构检查已独立封存；标准单元映射、布局布线、STA及功耗继续验收。原物理身份与PPA仍HOLD。")


def load_new_physical_mapping(root):
    root=Path(root)
    relative="8-本轮实验/GPU新FF标准单元映射-20261110-v2/验收结论.json"
    folder=(root/relative).parent
    receipt,_=read_snapshot(root/relative)
    manifest_path=folder/"evidence-sha256.json"
    if (receipt.get("status")!="NEW_FF_GPU_STANDARD_CELL_MAPPING_INDEPENDENTLY_SEALED_NOT_PPA"
        or receipt.get("physical_signoff") is not False
        or receipt.get("full_mapped_functional_equivalence") is not False
        or receipt.get("original_physical_identity") is not False
        or receipt.get("unresolved_leaf_types")!=0
        or receipt.get("standard_cell_count")!=1547376
        or receipt.get("mapped_netlist_sha256")!=sha(folder/"ff-mapped.v")
        or receipt.get("evidence_manifest_sha256")!=sha(manifest_path)):
        raise ValueError("new FF standard-cell mapping is not independently sealed")
    bindings,_=read_snapshot(manifest_path)
    for name,expected in bindings.items():
        path=(root/name).resolve()
        if not path.is_relative_to(root.resolve()) or sha(path)!=expected:
            raise ValueError(f"mapped GPU evidence changed: {name}")
    return dict(path=relative,receipt=receipt,note="新FF标准单元映射已独立重读封存：1547376个单元、79种真实库单元，未解析叶单元为0；综合单元面积21.096mm²，属于代价测量。整机映射后等价、布局布线、STA和功耗仍待验，不代表PPA合格。")


def load_physical_followup(root):
    """Read completed STA and SRAM preflight evidence without starting tools."""
    root = Path(root).resolve()
    sta_dir = root / "8-本轮实验/GPU新FF综合后STA-20261111-v5"
    wrapper_dir = root / "8-本轮实验/GPU新SRAM包装四态预检-20261111"
    binding_dir = root / "8-本轮实验/GPU新SRAM整机绑定预检-20261111"
    sta_path, wrapper_path, binding_path = (p / "status.json" for p in (sta_dir, wrapper_dir, binding_dir))
    sta, sta_sha = read_snapshot(sta_path)
    wrappers, wrapper_sha = read_snapshot(wrapper_path)
    bindings, binding_sha = read_snapshot(binding_path)
    if (sta["status"] != "EXPLORATORY_CELL_DELAY_STA_COMPLETED_NOT_PHYSICAL_SIGNOFF"
            or sta["target_period_ns"] != 10 or sta["setup_worst_slack_ns"] >= 0
            or sta["full_physical_timing_pass"] is not False):
        raise ValueError("STA does not match the completed 10 ns diagnostic scope")
    if (wrappers["status"] != "FOUR_WRAPPERS_5326_SURROGATE_TRANSACTIONS_PASS"
            or len(wrappers["records"]) != 4
            or sum(r["transactions"] for r in wrappers["records"]) != 5326
            or bindings["status"] != "WHOLE_GPU_SRAM_WRAPPER_BINDINGS_PASS"
            or bindings["actual_macro_counts"] != bindings["expected_macro_counts"]
            or sum(bindings["actual_macro_counts"].values()) != 164
            or any(item["physical_signoff"] is not False for item in (sta, wrappers, bindings))):
        raise ValueError("SRAM wrapper or whole-design binding evidence incomplete")
    manifest, _ = read_snapshot(sta_dir / "evidence-sha256.json")
    checked = {p.relative_to(root).as_posix():manifest[p.relative_to(root).as_posix()]
               for p in (sta_path, sta_dir / "sta.log", sta_dir / "actual-constraints.sdc")}
    for stage in (wrappers, bindings):
        checked.update(stage["source_bindings"])
    for row in wrappers["records"]:
        checked[(wrapper_dir / row["run_log"]).relative_to(root).as_posix()] = row["run_log_sha256"]
    for name, digest in bindings["artifact_hashes"].items():
        checked[(binding_dir / name).relative_to(root).as_posix()] = digest
    for name, digest in checked.items():
        path = (root / name).resolve()
        if not path.is_relative_to(root) or sha(path) != digest:
            raise ValueError(f"GPU physical followup evidence changed: {name}")
    raw = (sta_dir / "sta.log").read_text(encoding="utf-8")
    if ("ROUTEB_STA_ANALYSIS_COMPLETE" not in raw or "Path Type: max" not in raw
            or f"worst slack max {sta['setup_worst_slack_ns']:.2f}" not in raw
            or f"worst slack min {sta['hold_worst_slack_ns']:.2f}" not in raw):
        raise ValueError("STA log does not support the reported setup and hold slack")
    public_dir = root / "8-本轮实验/GPU公开SRAM轻量视图-20261111"
    public_check_path = public_dir / "view-check.json"
    public_sim_dir = root / "8-本轮实验/GPU公开SRAM原版模型预检-20261111"
    public_sim_path = public_sim_dir / "status.json"
    public_views, public_views_sha = read_snapshot(public_check_path)
    public_sim, public_sim_sha = read_snapshot(public_sim_path)
    download_path = public_dir / "download.json"
    download, download_sha = read_snapshot(download_path)
    if (public_views["status"] != "TWO_PUBLIC_MACRO_LEF_PORTS_AND_TT_LIBERTY_PASS"
            or public_sim["status"] != "TWO_PUBLIC_SRAM_MODELS_3624_TRANSACTIONS_PASS"
            or public_views["functional_status_sha256"] != public_sim_sha
            or public_views["download_manifest_sha256"] != download_sha
            or public_views["source_commit"] != download["commit"]
            or public_sim["source_commit"] != download["commit"]
            or len(public_sim["records"]) != 2
            or sum(row["transactions"] for row in public_sim["records"]) != 3624):
        raise ValueError("Public macro view evidence incomplete")
    public_inputs = {(public_dir / row["path"]).relative_to(root).as_posix():row["sha256"]
                     for row in download["records"]}
    public_inputs[(public_dir / "liberty-read.log").relative_to(root).as_posix()] = public_views["liberty_read_log_sha256"]
    for row in public_sim["records"]:
        public_inputs.update(row["source_bindings"])
        raw_shape = "32x256" if row["shape"] == "vortex_sp_32x256_w1" else "8x1024"
        public_inputs[(public_sim_dir / f"{raw_shape}-run.log").relative_to(root).as_posix()] = row["transcript_sha256"]
    for name, digest in public_inputs.items():
        path = (root / name).resolve()
        if not path.is_relative_to(root) or sha(path) != digest:
            raise ValueError(f"Public macro evidence changed: {name}")
    layout_dir = root / "8-本轮实验/GPU公开SRAM视图-20261111"
    layout_path = layout_dir / "gds-check.json"
    layout, layout_sha = read_snapshot(layout_path)
    if (layout["status"] != "TWO_PUBLIC_SRAM_GDS_STRUCTURES_MATCH_V_LEF_LIB"
            or layout["physical_signoff"] is not False or len(layout["records"]) != 2
            or layout["source_commit"] != download["commit"]
            or layout["view_check_sha256"] != public_views_sha
            or layout["download_manifest_sha256"] != sha(layout_dir / "download.json")):
        raise ValueError("Public SRAM GDS check not bound to the other macro views")
    for row in layout["records"]:
        path = (root / row["path"]).resolve()
        if not path.is_relative_to(root) or sha(path) != row["sha256"]:
            raise ValueError(f"Public SRAM layout changed: {row['path']}")
    return {
        "sta_path": sta_path.relative_to(root).as_posix(),
        "sta_log": (sta_dir / "sta.log").relative_to(root).as_posix(),
        "wrapper_path": wrapper_path.relative_to(root).as_posix(),
        "binding_path": binding_path.relative_to(root).as_posix(),
        "public_view_path": public_check_path.relative_to(root).as_posix(),
        "public_sim_path": public_sim_path.relative_to(root).as_posix(),
        "public_layout_path": layout_path.relative_to(root).as_posix(),
        "sta_seconds": sta["seconds"],
        "sram_seconds": wrappers["seconds"] + bindings["seconds"],
        "sta_note": f"10 ns综合后STA已完成，setup最差裕量{sta['setup_worst_slack_ns']:.2f} ns，hold最差裕量{sta['hold_worst_slack_ns']:.2f} ns。最差setup路径从指令缓存寄存器进入FF存储写入逻辑。当前使用理想时钟和单元延迟，布线寄生与CTS待补，PPA保持HOLD。",
        "sram_note": "4种SRAM包装通过5326条四态事务，整机Yosys层级和端口检查确认164个宏实例。事务使用半周期替代模型，层级检查绑定接口声明。两种公开宏的原版模型通过3624条事务，LEF端口、TT Liberty和GDS单元名均已核对。剩余两种宏、整机时序等价及物理签核待验。",
        "summary": {"target_period_ns": 10, "setup_worst_slack_ns": sta["setup_worst_slack_ns"],
                    "hold_worst_slack_ns": sta["hold_worst_slack_ns"], "wrapper_transactions": 5326,
                    "macro_instance_counts": bindings["actual_macro_counts"], "physical_signoff": False,
                    "sta_status_sha256": sta_sha, "wrapper_status_sha256": wrapper_sha,
                    "binding_status_sha256": binding_sha, "public_macro_model_transactions": 3624,
                    "public_view_check_sha256": public_views_sha, "public_sim_status_sha256": public_sim_sha,
                    "public_gds_check_sha256": layout_sha, "public_macro_view_sets": 2},
    }
