from pathlib import Path
import hashlib,json
R=Path(__file__).resolve().parents[1];p=R/'student-mini-v1-cpu-gpu/sources/integration/student-mini/gpu_status_command_adapter.sv'
before_sha='9709855410d00767ed0dec79d2ae0d71971a51187ecdb7d400397f22b2b41f04';after_sha='be1bfa47470ecf242547e7b3a497a6384e2b69e34d041904de04d0e194e1d131'
current=hashlib.sha256(p.read_bytes()).hexdigest()
if current==after_sha:print(json.dumps({'status':'ALREADY_APPLIED','sha256':current}))
elif current==before_sha:
 text=p.read_text(encoding='utf-8');old="localparam logic [ADDR_WIDTH-1:0] STATUS_ADDR = '1;";new="// Explicit replication preserves all-ones width across tool frontends.\n  localparam logic [ADDR_WIDTH-1:0] STATUS_ADDR = {ADDR_WIDTH{1'b1}};";assert text.count(old)==1
 updated=text.replace(old,new).encode('utf-8');assert hashlib.sha256(updated).hexdigest()==after_sha
 p.write_bytes(updated);print(json.dumps({'status':'APPLIED','sha256':after_sha}))
else:raise SystemExit('Unknown adapter source; refusing to overwrite '+current)
