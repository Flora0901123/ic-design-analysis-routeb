"""Check downloaded GDS records and cross-view identity for the two public SRAMs."""
from pathlib import Path
import hashlib
import json
import struct

root = Path(__file__).resolve().parents[1]
full = root / '8-本轮实验/GPU公开SRAM视图-20261111'
light = root / '8-本轮实验/GPU公开SRAM轻量视图-20261111'
sha = lambda path: hashlib.sha256(path.read_bytes()).hexdigest()
read = lambda path: json.loads(path.read_text(encoding='utf-8-sig'))
complete = read(full / 'download.json')
functional = read(light / 'download.json')
assert complete['commit'] == functional['commit']
records = {row['path']:row for row in complete['records']}
for row in functional['records']:
    path = row['path']
    assert sha(full / path) == sha(light / path) == row['sha256'] == records[path]['sha256']

def structure_names(path):
    data = path.read_bytes()
    position = 0
    structures = set()
    header_seen = False
    while position < len(data):
        size, record, dtype = struct.unpack_from('>HBB', data, position)
        assert size >= 4 and size % 2 == 0 and position + size <= len(data), (position,size)
        if position == 0:
            assert (record,dtype,size) == (0,2,6), 'Expected GDSII HEADER'
            header_seen = True
        if record == 6:
            assert dtype == 6
            structures.add(data[position+4:position+size].rstrip(b'\0').decode('ascii'))
        position += size
        if record == 4:
            assert size == 4 and header_seen and all(byte == 0 for byte in data[position:])
            return structures
    raise ValueError('Missing GDSII ENDLIB record')

verified = []
for shape in ('32x256','8x1024'):
    name = f'sky130_sram_1kbyte_1rw1r_{shape}_8'
    relative = f'{name}/{name}.gds'
    path = full / relative
    assert sha(path) == records[relative]['sha256']
    names = structure_names(path)
    assert name in names, (name, sorted(names)[-10:])
    verified.append(dict(cell=name,path=path.relative_to(root).as_posix(),sha256=sha(path),structures=len(names)))
result = dict(status='TWO_PUBLIC_SRAM_GDS_STRUCTURES_MATCH_V_LEF_LIB',physical_signoff=False,source_commit=complete['commit'],records=verified,
              download_manifest_sha256=sha(full/'download.json'),view_check_sha256=sha(light/'view-check.json'),
              scope='GDSII structural records, cell names and fixed-commit cross-view bytes. DRC, LVS and routed timing remain open.')
(full/'gds-check.json').write_text(json.dumps(result,indent=2),encoding='utf-8')
print(json.dumps(result,indent=2))