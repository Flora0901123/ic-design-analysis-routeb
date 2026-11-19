from pathlib import Path
R=Path(__file__).resolve().parents[1];p=R/'7-审计与验收/build_fresh_dma_platform.py';s=p.read_text();a="p=C/'platform-producer.py';p.write_text(s);";s=s.replace(a,"s=s.replace('VL_FLAGS += --timing','VL_FLAGS += -fno-dfg --timing')\n"+a);p.write_text(s)
