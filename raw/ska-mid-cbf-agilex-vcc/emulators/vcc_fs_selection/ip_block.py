from typing import Self


class EmulatorIPBlock():
    """IP block simulation for the Frequency Slice Selection block."""

    def __init__(self: Self) -> None:
        # const defaults
        self.num_inputs = 26
        self.num_outputs = 6

        # variables
        self.connections = [-1] * self.num_outputs
