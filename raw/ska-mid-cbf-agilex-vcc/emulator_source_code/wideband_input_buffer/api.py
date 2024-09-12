from typing import Any, Self

import jsonschema

from ska_mid_cbf_emulators.common import BaseEmulatorApi, BodyParam, HttpMethod, InternalRestResponse, QueryParam

from .config_schema import config_schema
from .ip_block import EmulatorIPBlock
from .state_machine import WidebandInputBufferTransitionTrigger


class EmulatorApi(BaseEmulatorApi):
    ip_block: EmulatorIPBlock

    @BaseEmulatorApi.route(HttpMethod.POST)
    def configure(
        self: Self,
        config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Configure the Wideband Input Buffer.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        if self.module.may_trigger(WidebandInputBufferTransitionTrigger.CONFIGURE):
            self.module.trigger(WidebandInputBufferTransitionTrigger.CONFIGURE)
            try:
                jsonschema.validate(config, config_schema)
            except Exception as e:
                self.module.log_error(e)
                self.module.trigger_if_allowed(WidebandInputBufferTransitionTrigger.FAIL_CONFIGURING)
                return InternalRestResponse.bad_request(
                    f'Configuration schema validation failed: {str(e)}'
                )

            if (expected_sample_rate := config.get('expected_sample_rate', None)) is not None:
                self.ip_block.expected_sample_rate = expected_sample_rate
            if (nd_sec := config.get('noise_diode_transition_holdoff_seconds', None)) is not None:
                self.ip_block.noise_diode_transition_holdoff_seconds = nd_sec

            self.module.trigger(WidebandInputBufferTransitionTrigger.FINISH_CONFIGURING)
            return InternalRestResponse.ok()
        return InternalRestResponse.internal_server_error(
            f'Cannot configure the Wideband Input Buffer while in state {self.module.get_state()}.'
        )

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def deconfigure(
        self: Self,
        config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Deconfigure the Wideband Input Buffer (does nothing).

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def recover(self: Self) -> InternalRestResponse:
        """Recover the Wideband Input Buffer.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        self.module.trigger(WidebandInputBufferTransitionTrigger.RESET)
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def start(self: Self) -> InternalRestResponse:
        """Start the Wideband Input Buffer.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        if self.module.may_trigger(WidebandInputBufferTransitionTrigger.START):
            self.module.trigger(WidebandInputBufferTransitionTrigger.START)
            return InternalRestResponse.ok()

        return InternalRestResponse.conflict(
            f'Cannot start the Wideband Input Buffer while in state {self.module.get_state()}.'
        )

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def stop(self: Self) -> InternalRestResponse:
        """Stop the Wideband Input Buffer.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        if self.module.may_trigger(WidebandInputBufferTransitionTrigger.STOP):
            self.module.trigger(WidebandInputBufferTransitionTrigger.STOP)
            return InternalRestResponse.ok()

        return InternalRestResponse.conflict(
            f'Cannot stop the Wideband Input Buffer while in state {self.module.get_state()}.'
        )

    @BaseEmulatorApi.route(http_method=HttpMethod.GET)
    def status(
        self: Self,
        clear: QueryParam[bool] = False
    ) -> InternalRestResponse:
        """Update and get the status of the Wideband Input Buffer.

        Args:
            clear (:obj:`bool`): set to True to clear the counters. Default False.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            status = {
                'buffer_underflowed': self.ip_block.buffer_underflowed,
                'buffer_overflowed': self.ip_block.buffer_overflowed,
                'loss_of_signal_seconds': self.ip_block.loss_of_signal_seconds,
                'band_id': self.ip_block.band_id
            }

            if clear:
                # TODO: do something
                pass

        except Exception as e:
            return InternalRestResponse.internal_server_error(str(e))

        return InternalRestResponse.ok(status)
