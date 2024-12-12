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
        """Configure the Packetizer.

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

        self.ip_block.vid = config.get("vid", 0)
        self.ip_block.vcc_id = config.get("vcc_id", 0)
        self.ip_block.fs_id = config.get("fs_id", 0)
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def deconfigure(
        self: Self, config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Deconfigure the Packetizer.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def recover(self: Self) -> InternalRestResponse:
        """Recover the Packetizer.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def start(self: Self) -> InternalRestResponse:
        """Start the Packetizer (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def stop(self: Self) -> InternalRestResponse:
        """Stop the Packetizer (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.GET)
    def status(self: Self, clear: QueryParam[bool] = False) -> InternalRestResponse:
        """Update and get the status of the Packetizer.

        Args:
            clear (:obj:`bool`): set to True to clear the counters. Default False.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            status = {
                "mac_source_register": 0,
                "vid_register": self.ip_block.vid,
                "flags_register": 0,
                "psn_register": 0,
                "packet_count_register": 0,
            }

            if clear:
                # TODO: do something
                pass

        except Exception as e:
            return InternalRestResponse.internal_server_error(str(e))

        return InternalRestResponse.ok(status)
