from typing import Any, Self

from ska_mid_cbf_emulators.common import BaseEmulatorApi, BodyParam, HttpMethod, InternalRestResponse, QueryParam

from .ip_block import EmulatorIPBlock
from .state_machine import PacketValidationTransitionTrigger


class EmulatorApi(BaseEmulatorApi):
    ip_block: EmulatorIPBlock

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def configure(
        self: Self,
        config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Configure the Packet Validation block (does nothing).

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def deconfigure(
        self: Self,
        config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Deconfigure the Packet Validation block (does nothing).

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def recover(self: Self) -> InternalRestResponse:
        """Recover the Packet Validation block.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        self.module.trigger(PacketValidationTransitionTrigger.RESET)
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def start(self: Self) -> InternalRestResponse:
        """Start the Packet Validation block.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        if self.module.may_trigger(PacketValidationTransitionTrigger.START):
            self.module.trigger(PacketValidationTransitionTrigger.START)
            return InternalRestResponse.ok()

        return InternalRestResponse.conflict(
            f'Cannot start the Packet Validation block while in state {self.module.get_state()}.'
        )

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def stop(self: Self) -> InternalRestResponse:
        """Stop the Packet Validation block.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        if self.module.may_trigger(PacketValidationTransitionTrigger.STOP):
            self.module.trigger(PacketValidationTransitionTrigger.STOP)
            return InternalRestResponse.ok()

        return InternalRestResponse.conflict(
            f'Cannot stop the Packet Validation block while in state {self.module.get_state()}.'
        )

    @BaseEmulatorApi.route(http_method=HttpMethod.GET)
    def status(
        self: Self,
        clear: QueryParam[bool] = False
    ) -> InternalRestResponse:
        """Update and get the status of the Packet Validation block.

        Args:
            clear (:obj:`bool`): set to True to clear the counters. Default False.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            status = {
                'expected_ethertype': hex(self.ip_block.expected_ethertype),
                'packet_crc_error_count': self.ip_block.packet_crc_error_count,
                'packet_ethertype_error_count': self.ip_block.packet_ethertype_error_count,
                'packet_seq_error_count': self.ip_block.packet_seq_error_count,
                'meta_frame': {
                    'ethertype': self.ip_block.ethertype,
                    'band_id': self.ip_block.band_id,
                    'sample_rate': self.ip_block.sample_rate,
                    'dish_id': self.ip_block.dish_id,
                    'time_code': self.ip_block.time_code,
                    'hardware_id': self.ip_block.hardware_id
                }
            }

            if clear:
                # TODO: do something
                pass

        except Exception as e:
            return InternalRestResponse.internal_server_error(str(e))

        return InternalRestResponse.ok(status)
