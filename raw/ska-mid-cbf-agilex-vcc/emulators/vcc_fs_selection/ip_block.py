from typing import Self


class EmulatorIPBlock:
    """IP block simulation for the Frequency Slice Selection block."""

    def __init__(self: Self) -> None:
        # variables
        self.band_select: int = -1
        self.band_start_channel = [-1, -1]
