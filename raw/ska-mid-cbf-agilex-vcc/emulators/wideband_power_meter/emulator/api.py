from typing import Any, Self

import jsonschema

from ska_mid_cbf_emulators.common import (
    BaseEmulatorApi,
    BodyParam,
    HttpMethod,
    InternalRestResponse,
    QueryParam,
)

from .config_schema import config_schema
from .ip_block import EmulatorIPBlock


class EmulatorApi(BaseEmulatorApi):
    ip_block: EmulatorIPBlock

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def configure(
        self: Self, config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Configure the Wideband Power Meter.

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
                f"Configuration schema validation failed: {str(e)}"
            )

        self.ip_block.averaging_time = config.get("averaging_time", 0.0)
        self.ip_block.sample_rate = config.get("sample_rate", 0)
        self.ip_block.flagging = config.get("flagging", 0)
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def deconfigure(
        self: Self, config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Deconfigure the Wideband Power Meter.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def recover(self: Self) -> InternalRestResponse:
        """Recover the Wideband Power Meter.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def start(self: Self) -> InternalRestResponse:
        """Start the Wideband Power Meter (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def stop(self: Self) -> InternalRestResponse:
        """Stop the Wideband Power Meter (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.GET)
    def status(self: Self, clear: QueryParam[bool] = False) -> InternalRestResponse:
        """Update and get the status of the Wideband Power Meter.

        Args:
            clear (:obj:`bool`): set to True to clear the counters. Default False.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            status = {
                "timestamp": 0.0,
                "avg_power_polX": 0.0,
                "avg_power_polY": 0.0,
                "avg_power_polX_noise_diode_on": 0.0,
                "avg_power_polY_noise_diode_on": 0.0,
                "avg_power_polX_noise_diode_off": 0.0,
                "abg_power_polY_noise_diode_off": 0.0,
                "flag": 0,
                "overflow": 0,
            }

            if clear:
                # TODO: do something
                pass

        except Exception as e:
            return InternalRestResponse.internal_server_error(str(e))

        return InternalRestResponse.ok(status)
