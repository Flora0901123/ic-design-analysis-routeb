import json, sys
from pathlib import Path
import numpy as np

ROOT = Path("/home/camellia/socai/student-mini-v1-cpu-gpu/sources")
sys.path[:0] = [str(ROOT), str(ROOT / "shared/python")]
from soc_ai_labs.student_mini_nano_runtime import MiniNanoRuntime

CKPT = ROOT / "build/student-mini/native-nano/876398eac822028468e275044f350988a847429d5c3a2f3aed2be1e74ca47572/ptq.npz"
inputs = json.loads((ROOT / "build/student-mini/native-nano/876398eac822028468e275044f350988a847429d5c3a2f3aed2be1e74ca47572/inputs.json").read_text())
tok = inputs["tokenizer"]
special = tok["special"]
chars = tok["characters"]
reverse = {v: k for k, v in chars.items()}
reverse.update({v: {"PAD":0,"BOS":1,"USER":2,"ASSISTANT":3,"EOS":4,"UNK":5}.get(k, k) for k, v in special.items()})
for k, v in special.items():
    reverse[v] = f"<{k}>"

rt = MiniNanoRuntime.from_npz(CKPT)

def ask(question):
    prompt = [1, 2] + [chars.get(c, 5) for c in question] + [3]
    print(f"\n=== 问题: {question!r} ===")
    print("prompt tokens:", prompt)
    out = rt.generate(prompt, count=12, eos_id=4, tokenizer=None)
    text = "".join(reverse.get(t, f"<?{t}>") for t in out)
    print("生成 tokens:", out)
    print("生成文本:", repr(text))

ask("5+7=？")
ask("1+1是多少？")
ask("一加一等于几？")
