from typing import Any, Self

from ska_mid_cbf_emulators.common import BaseEmulatorApi, BodyParam, HttpMethod, InternalRestResponse, QueryParam

from .ip_block import EmulatorIPBlock
from .state_machine import EthernetTransitionTrigger


class EmulatorApi(BaseEmulatorApi):
    ip_block: EmulatorIPBlock

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def configure(
        self: Self,
        config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Configure the F-tile Ethernet block.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        if (rx_loopback_enable := config.get('rx_loopback_enable', None)) is not None:
            self.ip_block.rx_loopback = rx_loopback_enable

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def deconfigure(
        self: Self,
        config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Deconfigure the F-tile Ethernet block.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        if config.get('rx_loopback_enable', None) is not None:
            self.ip_block.rx_loopback = False

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def recover(self: Self) -> InternalRestResponse:
        """Recover the F-tile Ethernet block.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        self.subcontroller.trigger(EthernetTransitionTrigger.RESET)

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def start(self: Self) -> InternalRestResponse:
        """Start the F-tile Ethernet block.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        if self.subcontroller.may_trigger(EthernetTransitionTrigger.START):
            self.subcontroller.trigger(EthernetTransitionTrigger.START)
            self.subcontroller.force_signal_update()
            return InternalRestResponse.ok()

        return InternalRestResponse.conflict(
            f'Cannot start the F-tile Ethernet block while in state {self.subcontroller.get_state()}.'
        )

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def stop(self: Self) -> InternalRestResponse:
        """Stop the F-tile Ethernet block.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        self.subcontroller.trigger(EthernetTransitionTrigger.STOP)

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.GET)
    def status(
        self: Self,
        clear: QueryParam[bool] = False
    ) -> InternalRestResponse:
        """Update and get the status of the F-tile Ethernet block.

        Args:
            clear (:obj:`bool`): set to True to clear the counters. Default False.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            status = {
                'phy': {
                    'num_fibres': self.ip_block.num_fibres,
                    'num_lanes': self.ip_block.num_lanes,
                    'rx_loopback': self.ip_block.rx_loopback,
                    'rx_freq_lock': self.ip_block.rx_freq_lock,
                    'rx_word_lock': self.ip_block.rx_word_lock
                },
                'fec': {
                    'rx_corrected_code_words': self.ip_block.rx_corrected_code_words,
                    'rx_uncorrected_code_words': self.ip_block.rx_uncorrected_code_words
                },
                'mac': {
                    'rx_fragments': self.ip_block.rx_fragments,
                    'rx_runt': self.ip_block.rx_runt,
                    'rx_64_bytes': self.ip_block.rx_64_bytes,
                    'rx_65_to_127_bytes': self.ip_block.rx_65_to_127_bytes,
                    'rx_128_to_255_bytes': self.ip_block.rx_128_to_255_bytes,
                    'rx_256_to_511_bytes': self.ip_block.rx_256_to_511_bytes,
                    'rx_512_to_1023_bytes': self.ip_block.rx_512_to_1023_bytes,
                    'rx_1024_to_1518_bytes': self.ip_block.rx_1024_to_1518_bytes,
                    'rx_1519_to_max_bytes': self.ip_block.rx_1519_to_max_bytes,
                    'rx_oversize': self.ip_block.rx_oversize,
                    'rx_frame_octets_ok': self.ip_block.rx_frame_octets_ok,
                    'rx_crcerr': self.ip_block.rx_crcerr,
                    'tx_fragments': self.ip_block.tx_fragments,
                    'tx_runt': self.ip_block.tx_runt,
                    'tx_64_bytes': self.ip_block.tx_64_bytes,
                    'tx_65_to_127_bytes': self.ip_block.tx_65_to_127_bytes,
                    'tx_128_to_255_bytes': self.ip_block.tx_128_to_255_bytes,
                    'tx_256_to_511_bytes': self.ip_block.tx_256_to_511_bytes,
                    'tx_512_to_1023_bytes': self.ip_block.tx_512_to_1023_bytes,
                    'tx_1024_to_1518_bytes': self.ip_block.tx_1024_to_1518_bytes,
                    'tx_1519_to_max_bytes': self.ip_block.tx_1519_to_max_bytes,
                    'tx_oversize': self.ip_block.tx_oversize,
                    'tx_frame_octets_ok': self.ip_block.tx_frame_octets_ok,
                    'tx_crcerr': self.ip_block.tx_crcerr
                }
            }

            if clear:
                # TODO: do something
                pass

        except Exception as e:
            return InternalRestResponse.internal_server_error(str(e))

        return InternalRestResponse.ok(status)
