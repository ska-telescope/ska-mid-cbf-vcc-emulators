from typing import Self
import numpy as np


class EmulatorIPBlock:
    """IP block simulation for the Packetizer."""

    def __init__(self: Self) -> None:
        # const defaults

        # variables
        vid: int = 0  # VLAN identifier, for unique VLAN identification.
        vcc_id: int = 0  # Influences the Source MAC address.
        fs_id: int = 0  # Frequency slice identifier.
