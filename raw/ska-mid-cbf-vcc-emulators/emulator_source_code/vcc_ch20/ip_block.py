from typing import Any, Self


class EmulatorIPBlock():
    """IP block simulation for the B123VCC-OSPPFB Channeliser."""

    def __init__(self: Self) -> None:
        # const defaults
        self.num_channels = 10
        self.num_polarisations = 2

        # variables
        self.sample_rate: int = 0
        self.expected_sample_rate: int = 3_960_000_000
        self.gains: list[dict[str, Any]] = [{
            'pol': p,
            'channel': c,
            'gain': 1.0
        } for pol in range(self.num_polarisations) for c, p in (enumerate([pol] * self.num_channels))]
