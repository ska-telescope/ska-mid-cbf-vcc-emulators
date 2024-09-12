from typing import Self


class EmulatorIPBlock():
    """IP block simulation for the Ethernet MAC."""

    def __init__(self: Self) -> None:
        # const defaults
        self.num_fibres = 4
        self.num_lanes = 4

        # variables
        self.rx_loopback: bool = False
        self.rx_freq_lock: list[bool] = []
        self.rx_word_lock: list[bool] = []
        self.rx_corrected_code_words: int = 0
        self.rx_uncorrected_code_words: int = 0
        self.rx_fragments: int = 0
        self.rx_runt: int = 0
        self.rx_64_bytes: int = 0
        self.rx_65_to_127_bytes: int = 0
        self.rx_128_to_255_bytes: int = 0
        self.rx_256_to_511_bytes: int = 0
        self.rx_512_to_1023_bytes: int = 0
        self.rx_1024_to_1518_bytes: int = 0
        self.rx_1519_to_max_bytes: int = 0
        self.rx_oversize: int = 0
        self.rx_frame_octets_ok: int = 0
        self.rx_crcerr: int = 0
        self.tx_fragments: int = 0
        self.tx_runt: int = 0
        self.tx_64_bytes: int = 0
        self.tx_65_to_127_bytes: int = 0
        self.tx_128_to_255_bytes: int = 0
        self.tx_256_to_511_bytes: int = 0
        self.tx_512_to_1023_bytes: int = 0
        self.tx_1024_to_1518_bytes: int = 0
        self.tx_1519_to_max_bytes: int = 0
        self.tx_oversize: int = 0
        self.tx_frame_octets_ok: int = 0
        self.tx_crcerr: int = 0
