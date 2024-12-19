from typing import Self


class EmulatorIPBlock:
    """IP block simulation for the Packetizer."""

    def __init__(self: Self) -> None:
        # const defaults

        # variables
        self.vid: int = 0  # VLAN identifier, for unique VLAN identification.
        self.vcc_id: int = 0  # Influences the Source MAC address.
        self.fs_id: int = 0  # Frequency slice identifier.
