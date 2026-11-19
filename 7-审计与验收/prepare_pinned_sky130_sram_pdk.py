"""Extract and verify the fixed Sky130A distribution in the D-drive build cache."""
from pathlib import Path
import hashlib
import json
import tarfile

import zstandard

ROOT = Path(__file__).resolve().parents[1]
OUTPUT = ROOT / '8-本轮实验/GPU-SRAM宏生成-20261111'
WORK = Path('/root/.cache/routeb-openram-b2b069c')
PDK = (WORK / 'pdk').resolve()
CACHE = ROOT / '9-GPU复现/downloads/openram-b2b069c'
assert PDK == CACHE / 'pdk'
ARCHIVES = {
    'common.tar.zst': 'a37160e9a00e39e540e5e7746c064537c7331d6542ebd7a3b05b5801ef7cf044',
    'sky130_fd_pr.tar.zst': '9795dee2b08e0ca794e39a041f661b72168cba1dd4140474bde94320d75bcb46',
    'sky130_fd_sc_hd.tar.zst': '8f3f9cf649d2a2d12bf02d922476fbcdae3bb2182f28a35b0dd9c08e594e9289',
}
VERSION = 'e8294524e5f67c533c5d0c3afa0bcc5b2a5fa066'
records = []
for name, expected in ARCHIVES.items():
    path = CACHE / name
    with path.open('rb') as raw:
        actual = hashlib.file_digest(raw, 'sha256').hexdigest()
        assert actual == expected, (name, actual)
        raw.seek(0)
        with zstandard.ZstdDecompressor().stream_reader(raw) as reader:
            with tarfile.open(fileobj=reader, mode='r|') as archive:
                members = (member for member in archive if member.name.startswith('sky130A/'))
                archive.extractall(PDK, members=members, filter='data')
    records.append(dict(file=name,sha256=actual,bytes=path.stat().st_size))
    print(name, 'verified and extracted', flush=True)
tech = PDK / 'sky130A/libs.tech'
for name in ('magic/sky130A.magicrc','ngspice/sky130.lib.spice','netgen/setup.tcl'):
    assert (tech / name).is_file(), name
sources = PDK / 'sky130A/SOURCES'
(OUTPUT/'sky130A-SOURCES.txt').write_bytes(sources.read_bytes())
(OUTPUT/'pdk-setup.json').write_text(json.dumps(dict(status='PINNED_SKY130A_TECH_FILES_READY',version=VERSION,
    release='https://github.com/fossi-foundation/ciel-releases/releases/tag/sky130-'+VERSION,
    archives=records, sources_sha256=hashlib.sha256(sources.read_bytes()).hexdigest()),indent=2),encoding='utf-8')
print(sources.read_text())