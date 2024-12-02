from typing import Self
import numpy as np


class EmulatorIPBlock:
    """IP block simulation for the Packetizer."""

    def __init__(self: Self) -> None:
        # const defaults

        # variables
        vid: np.uint16  # VLAN identifier, for unique VLAN identification.
        vcc_id: np.uint16  # Influences the Source MAC address.
        fs_id: np.uint16  # Frequency slice identifier.
