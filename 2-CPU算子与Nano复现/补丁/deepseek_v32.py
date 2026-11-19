# Minimal IntEnum stub for the missing soc_ai_labs.deepseek_v32 module.
# Used only by litex_contract.AcceleratorCSRModel (Status.OK / Status(int)).
from enum import IntEnum


class Status(IntEnum):
    OK = 0
    BAD_LENGTH = 1
    NUMERIC_ERROR = 2
    BUS_ERROR = 3
    BAD_DESCRIPTOR = 4
