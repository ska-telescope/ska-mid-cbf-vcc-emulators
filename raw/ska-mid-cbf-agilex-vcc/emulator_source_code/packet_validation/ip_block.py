from typing import Self


class EmulatorIPBlock():
    """IP block simulation for the Packet Validation block."""

    def __init__(self: Self) -> None:
        # const defaults
        self.expected_ethertype = 0xFEED

        # variables
        self.packet_crc_error_count: int = 0
        self.packet_ethertype_error_count: int = 0
        self.packet_seq_error_count: int = 0
        self.ethertype: int = 0
        self.band_id: int = 0
        self.sample_rate: int = 0
        self.dish_id: int = 0
        self.time_code: int = 0
        self.hardware_id: int = 0
