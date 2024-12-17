from typing import Any, Self

import jsonschema

from ska_mid_cbf_emulators.common import BaseEmulatorApi, BodyParam, HttpMethod, InternalRestResponse, QueryParam

from .config_schema import config_schema
from .ip_block import EmulatorIPBlock


class EmulatorApi(BaseEmulatorApi):
    ip_block: EmulatorIPBlock

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def configure(
        self: Self, config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Configure the Circuit Switch block.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            jsonschema.validate(
                config,
                config_schema(self.ip_block.num_inputs, self.ip_block.num_outputs),
            )
        except Exception as e:
            self.log_error(e)
            return InternalRestResponse.bad_request(
                f"Configuration schema validation failed: {str(e)}"
            )

        self.ip_block.connections[config.get("output", 0)] = config.get("input", 0)
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def deconfigure(
        self: Self, config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Deconfigure the Circuit Switch block.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            jsonschema.validate(
                config,
                config_schema(self.ip_block.num_inputs, self.ip_block.num_outputs),
            )
        except Exception as e:
            self.log_error(e)
            return InternalRestResponse.bad_request(
                f"Configuration schema validation failed: {str(e)}"
            )

        self.ip_block.connections[config.get("output", 0)] = -1
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def recover(self: Self) -> InternalRestResponse:
        """Recover the Circuit Switch block.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        self.ip_block.connections = [-1] * self.ip_block.num_outputs

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def start(self: Self) -> InternalRestResponse:
        """Start the Circuit Switch block (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def stop(self: Self) -> InternalRestResponse:
        """Stop the Circuit Switch block (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.GET)
    def status(self: Self, clear: QueryParam[bool] = False) -> InternalRestResponse:
        """Update and get the status of the Circuit Switch block.

        Args:
            clear (:obj:`bool`): set to True to clear the counters. Default False.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            status = {
                "num_inputs": self.ip_block.num_inputs,
                "num_outputs": self.ip_block.num_outputs,
                "connected": [
                    {"output": i, "input": self.ip_block.connections[i]}
                    for i in range(self.ip_block.num_outputs)
                ],
            }

            if clear:
                # TODO: do something
                pass

        except Exception as e:
            return InternalRestResponse.internal_server_error(str(e))

        return InternalRestResponse.ok(status)
