from typing import Self


class EmulatorIPBlock:
    """IP block simulation for the Wideband Input Buffer."""

    def __init__(self: Self):
        # const defaults

        # variables
        self.expected_sample_rate: int = 0
        self.noise_diode_transition_holdoff_seconds: float = 0.0
        self.expected_dish_band = 0

        self.buffer_underflowed: bool = False
        self.buffer_overflowed: bool = False
        self.loss_of_signal: int = 0
        self.error: bool = False
        self.loss_of_signal_seconds: int = 0
        self.meta_band_id: int = 1
        self.meta_dish_id: int = 1
        self.rx_sample_rate: int = 0
        self.meta_transport_sample_rate: int = 0
