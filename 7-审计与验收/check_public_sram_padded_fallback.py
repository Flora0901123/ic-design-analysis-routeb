"""Validate independent-lane padding with public SRAMs under frozen four-state stimuli."""
from collections import Counter
import hashlib
import json
from pathlib import Path
import re
import subprocess

from qualification_resource_guard import prepare, join

ROOT = Path(__file__).resolve().parents[1]
EXP = ROOT/'8-本轮实验'
SOURCE = EXP/'GPU新身份物理输入准备-20261110'
PUBLIC = EXP/'GPU公开SRAM视图-20261111'
NEW = EXP/'GPU-SRAM宏生成-20261111/run-20261112-175857'
OUTPUT = EXP/'GPU公开SRAM独立通道替代预检-20261112'
SHAPES = {'20x64':(20,6,32,8,'32x256','vortex_dp_80x64_w4'),
          '8x128':(8,7,8,10,'8x1024','vortex_sp_64x128_w8')}


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def public_name(shape):
    return f'sky130_sram_1kbyte_1rw1r_{shape}_8'


def public_view(shape, suffix):
    name = public_name(shape)
    return PUBLIC/name/(name+suffix)


def adapter(shape, widths):
    data, addr, actual_data, actual_addr, physical, _ = widths
    mask = actual_data//8
    upper = actual_data-data
    addr_pad = actual_addr-addr
    padded_data = f"{{{upper}'b0, din0}}" if upper else 'din0'
    return f"""module routeb_new_1w1r_{shape}(
  input wire clk0, csb0, input wire [{addr-1}:0] addr0,
  input wire [{data-1}:0] din0, input wire clk1, csb1,
  input wire [{addr-1}:0] addr1, output wire [{data-1}:0] dout1
);
  wire [{actual_data-1}:0] raw_read;
  assign dout1 = raw_read[{data-1}:0];
  {public_name(physical)} mem (
    .clk0(clk0), .csb0(csb0), .web0(1'b0), .wmask0({mask}'b{'1'*mask}),
    .addr0({{{addr_pad}'b0, addr0}}), .din0({padded_data}), .dout0(),
    .clk1(clk1), .csb1(csb1), .addr1({{{addr_pad}'b0, addr1}}), .dout1(raw_read)
  );
endmodule
"""


def area(lef):
    dims = re.search(r'\bSIZE\s+([\d.]+)\s+BY\s+([\d.]+)',lef.read_text()).groups()
    return float(dims[0])*float(dims[1])


def main():
    prepare()
    join()
    OUTPUT.mkdir(exist_ok=False)
    wrapper = SOURCE/'rtl/openram_wrappers.v'
    timescale = OUTPUT/'timescale.v'
    timescale.write_text('`timescale 1ns/1ps\n')
    seal = json.loads((EXP/'GPU公开SRAM原版模型预检-20261111/status.json').read_text())
    assert seal['status']=='TWO_PUBLIC_SRAM_MODELS_3624_TRANSACTIONS_PASS'
    checked_hashes = {v for row in seal['records'] for k,v in row['source_bindings'].items() if k.endswith('.v')}
    records = []
    raw_counts = json.loads((SOURCE/'resource-estimate.json').read_text())['raw_openram_instance_counts']
    fallback_counts = Counter()
    prior_area = 0
    for name,count in raw_counts.items():
        shape = name.removeprefix('routeb_new_1w1r_')
        if shape in SHAPES:
            physical = SHAPES[shape][4]
            prior_area += count*area(NEW/shape/(name+'.lef'))
        else:
            physical = shape
            prior_area += count*area(public_view(physical,'.lef'))
        fallback_counts[physical] += count
    for shape,widths in SHAPES.items():
        physical,logical = widths[4:]
        model = public_view(physical,'.v')
        assert sha(model) in checked_hashes
        bench = SOURCE/'verification'/f'tb_{logical}_openram.sv'
        vectors = SOURCE/'verification'/(logical+'.vectors')
        adapter_file = OUTPUT/(shape+'-adapter.v')
        adapter_file.write_text(adapter(shape,widths))
        exe = OUTPUT/(shape+'.vvp')
        build = OUTPUT/(shape+'-compile.log')
        log = OUTPUT/(shape+'-run.log')
        with build.open('wb') as stream:
            subprocess.run(['iverilog','-g2012','-s','tb','-Ptb.READ_SETTLE_NS=4','-o',str(exe),
                            *map(str,(timescale,model,adapter_file,wrapper,bench))],
                           cwd=SOURCE,stdout=stream,stderr=subprocess.STDOUT,check=True,timeout=60)
        with log.open('wb') as stream:
            subprocess.run(['vvp',str(exe)],cwd=SOURCE,stdout=stream,stderr=subprocess.STDOUT,check=True,timeout=60)
        text = log.read_text()
        total = len(vectors.read_text().splitlines())
        assert f'PASS openram {logical}: {total} records' in text and 'FATAL' not in text
        assert 'WARNING: Writing and reading' not in text
        records.append(dict(shape=shape,public_macro=public_name(physical),transactions=total,
                            sha256={str(p.relative_to(ROOT)):sha(p) for p in (model,bench,vectors,adapter_file,log)}))
    fallback_area = sum(count*area(public_view(shape,'.lef')) for shape,count in fallback_counts.items())
    status = dict(status='PADDED_PUBLIC_SRAM_FOUR_STATE_PASS',physical_signoff=False,
                  records=records,transactions=sum(row['transactions'] for row in records),
                  macro_counts=dict(fallback_counts),macro_outline_area_mm2={'generated_mixed':prior_area/1e6,
                                                                           'padded_public':fallback_area/1e6},
                  scope='verified wrapper simulation and sum of LEF macro outlines; no whole GPU timing or routing')
    (OUTPUT/'status.json').write_text(json.dumps(status,indent=2),encoding='utf-8')
    print(status['transactions'],status['macro_counts'],status['macro_outline_area_mm2'])


if __name__=='__main__':
    main()
