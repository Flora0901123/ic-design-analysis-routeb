from pathlib import Path
import json
R=Path(__file__).resolve().parents[1];p=R/'9-GPU复现/整机DMA重建/staged-openram-banked-manifest.json';d=json.loads(p.read_text());d['status']='FUNCTIONAL_MODELS_GENERATED_PENDING_VALIDATION';d.pop('test_evidence',None);p.write_text(json.dumps(d,indent=2))
