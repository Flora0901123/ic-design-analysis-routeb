import hashlib, json, struct, sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1] / "student-mini-v1-cpu-gpu/sources"
sys.path[:0] = [str(ROOT), str(ROOT / "shared/python")]
from soc_ai_labs.student_mini_nano_runtime import MiniNanoRuntime
from scripts.export_student_mini_native_image import pack, header
from scripts.student_mini import sha

CKPT = next((Path(__file__).resolve().parents[1]/"8-本轮实验/历史原始证据归档/native-nano").glob("*/ptq.npz"))
INPUTS = CKPT.parent / "inputs.json"
question = "一加一等于几"

inputs = json.loads(INPUTS.read_text())
rt = MiniNanoRuntime.from_npz(CKPT)
blob, manifest = pack(rt, inputs["tokenizer"], question)

bindings = {"scripts/export_student_mini_native_image.py": sha(ROOT/"scripts/export_student_mini_native_image.py"),
            "shared/python/soc_ai_labs/student_mini_nano_runtime.py": sha(ROOT/"shared/python/soc_ai_labs/student_mini_nano_runtime.py")}
identity = hashlib.sha256(json.dumps(dict(question=question), sort_keys=True, ensure_ascii=False).encode()).hexdigest()
work = ROOT / "build/student-mini/native-image" / identity
work.mkdir(parents=True, exist_ok=True)
(work/"image.bin").write_bytes(blob)
(work/"student_mini_native_image.h").write_text(header(manifest))
manifest.update(status="DEVELOPMENT_ONLY", target_execution=False, formal_baseline=False,
                bindings=bindings, image_sha256=sha(work/"image.bin"), size_bytes=len(blob))
(work/"manifest.json").write_text(json.dumps(manifest, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")

tokens = rt.generate(manifest["prompt_tokens"])
reverse = {v: k for k, v in inputs["tokenizer"]["characters"].items()}
golden = dict(kind="host-reference-only-never-target-input", tokens=tokens,
              text="".join(reverse.get(t, "[UNK]") for t in tokens if t != 4),
              token_sha256=hashlib.sha256(struct.pack("<"+str(len(tokens))+"I", *tokens)).hexdigest(),
              image_sha256=manifest["image_sha256"], manifest_sha256=sha(work/"manifest.json"))
(work/"host-golden.json").write_text(json.dumps(golden, ensure_ascii=False, indent=2)+"\n", encoding="utf-8")

print(json.dumps(dict(work=str(work), image_bytes=len(blob), question=question,
                      expected_tokens=tokens, expected_text=golden["text"]), ensure_ascii=False, indent=2))
