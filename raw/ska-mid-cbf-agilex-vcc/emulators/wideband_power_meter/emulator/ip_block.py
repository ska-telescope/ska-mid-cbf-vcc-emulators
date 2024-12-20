from typing import Self
import numpy as np


class EmulatorIPBlock:
    """IP block simulation for the Wideband Power Meter."""

    def __init__(self: Self) -> None:
        # const defaults

        # variables
        averaging_time: float = 0.0  # Averaging interval in seconds
        sample_rate: int = 0  # Sample rate in sampes per second
        # Handling for flagged data, 0 - ignore, 1 - use, 2 - saturate and use
        flagging: int = 0
