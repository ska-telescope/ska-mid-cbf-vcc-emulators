from typing import Any, Self

import jsonschema

from ska_mid_cbf_emulators.common import BaseEmulatorApi, BodyParam, HttpMethod, InternalRestResponse, QueryParam

from .config_schema import config_schema
from .ip_block import EmulatorIPBlock


class EmulatorApi(BaseEmulatorApi):
    ip_block: EmulatorIPBlock

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def configure(
        self: Self,
        config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Configure the Wideband Frequency Shifter.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            jsonschema.validate(config, config_schema)
        except Exception as e:
            self.module.log_error(e)
            return InternalRestResponse.bad_request(
                f'Configuration schema validation failed: {str(e)}'
            )

        self.ip_block.shift_frequency = config.get('shift_frequency', 0.0)
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def deconfigure(
        self: Self,
        config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Deconfigure the Wideband Frequency Shifter.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        self.ip_block.shift_frequency = 0.0

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def recover(self: Self) -> InternalRestResponse:
        """Recover the Wideband Frequency Shifter.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        self.ip_block.shift_frequency = 0.0

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def start(self: Self) -> InternalRestResponse:
        """Start the Wideband Frequency Shifter (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def stop(self: Self) -> InternalRestResponse:
        """Stop the Wideband Frequency Shifter (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.GET)
    def status(
        self: Self,
        clear: QueryParam[bool] = False
    ) -> InternalRestResponse:
        """Update and get the status of the Wideband Frequency Shifter.

        Args:
            clear (:obj:`bool`): set to True to clear the counters. Default False.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            status = {
                'shift_frequency': self.ip_block.shift_frequency
            }

            if clear:
                # TODO: do something
                pass

        except Exception as e:
            return InternalRestResponse.internal_server_error(str(e))

        return InternalRestResponse.ok(status)
