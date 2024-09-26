from typing import Self


class EmulatorIPBlock():
    """IP block simulation for the Wideband Input Buffer."""

    def __init__(self: Self):
        # const defaults

        # variables
        self.expected_sample_rate: int = 0
        self.noise_diode_transition_holdoff_seconds: float = 0.0
        self.buffer_underflowed: bool = False
        self.buffer_overflowed: bool = False
        self.loss_of_signal_seconds: int = 0
        self.band_id: int = 0
