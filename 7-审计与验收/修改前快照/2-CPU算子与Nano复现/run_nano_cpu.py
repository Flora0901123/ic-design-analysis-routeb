import json, os, subprocess, sys, time, threading, queue
from pathlib import Path

ROOT = Path("/home/camellia/socai/student-mini-v1-cpu-gpu/sources")
IMAGE_DIR = Path("/home/camellia/socai/student-mini-v1-cpu-gpu/sources/build/student-mini/native-image/77cbe9783ffd4b2bfca34c424a7f9e3e13d0b0d64a5ef7bff27839a08c5d2b7e")

os.environ["PATH"] = str(ROOT/".venv/bin") + ":" + os.environ.get("PATH", "")
os.environ["PYTHON"] = str(ROOT/".venv/bin/python")
os.environ["COURSE_ROOT"] = str(ROOT)
os.environ["COURSE_NATIVE_IMAGE_DIR"] = str(IMAGE_DIR)
os.environ["COURSE_VERILATOR_BIN"] = "/home/soclab/tools/verilator-5.040/bin/verilator"
os.environ["MAKEFLAGS"] = "-j2"

sys.path.insert(0, str(ROOT))

# monkey-patch bios package -> native_nano_bios
from litex.soc.integration.builder import Builder
from integration.litex.soc import build_soc
original = Builder.add_software_package
def add_package(self, name, *args, **kwargs):
    if name == "bios":
        return original(self, name, str(ROOT/"integration/litex/native_nano_bios"))
    return original(self, name, *args, **kwargs)
Builder.add_software_package = add_package

work = ROOT / "build/student-mini/native-cpu-run"
image = work / "loader.bin"
work.mkdir(parents=True, exist_ok=True)
blob = (IMAGE_DIR/"image.bin").read_bytes()
(image).write_bytes(blob + bytes((-len(blob)) % 1936))

print("== building native CPU SoC ==", flush=True)
start = time.time()
try:
    build_soc(output_dir=work/"soc", run=False, cpu_b0=True, control_smoke=True,
              cpu_variant="full", student_mini_image=image, student_mini_count=image.stat().st_size//1936)
except Exception as e:
    print("BUILD_FAIL", type(e).__name__, str(e)[:600], flush=True)
    sys.exit(1)
print(f"== build OK elapsed={time.time()-start:.0f}s ==", flush=True)

print("== running Vsim (native Nano session) ==", flush=True)
p = subprocess.Popen([str(work/"soc/gateware/obj_dir/Vsim")], cwd=work/"soc/gateware",
                     stdout=subprocess.PIPE, stderr=subprocess.STDOUT, text=True, errors="replace", bufsize=1)
seen = []
try:
    for line in p.stdout:
        seen.append(line)
        if "STUDENT_NATIVE_CPU_COMPLETE" in line or "NANO_METRIC" in line:
            pass
        if "STUDENT_NATIVE_CPU_COMPLETE" in line:
            break
except Exception:
    pass
finally:
    p.terminate()

for l in seen:
    if any(k in l for k in ["STUDENT_NATIVE", "NANO_METRIC", "TOKEN", "DECODE_CYCLES", "ASSISTANT", "NANO_IRQ", "Memtest"]):
        sys.stdout.write(l)
print("== done ==", flush=True)
