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
        """Configure the B123VCC-OSPPFB Channeliser.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            jsonschema.validate(config, config_schema(self.ip_block.num_channels, self.ip_block.num_polarisations))
        except Exception as e:
            self.module.log_error(e)
            return InternalRestResponse.bad_request(
                f'Configuration schema validation failed: {str(e)}'
            )

        if (expected_sample_rate := config.get('sample_rate', None)) is not None:
            self.ip_block.expected_sample_rate = expected_sample_rate

        if (gain := config.get('gain', None)) is not None:
            pol = config.get('pol', 0)
            channel = config.get('channel', 0)
            self.ip_block.gains[pol * self.ip_block.num_channels + channel] = {
                'pol': pol,
                'channel': channel,
                'gain': gain
            }

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def deconfigure(
        self: Self,
        config: BodyParam[dict[str, Any]]
    ) -> InternalRestResponse:
        """Deconfigure the B123VCC-OSPPFB Channeliser.

        Args:
            config (:obj:`dict[str, Any]`): Config object

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            jsonschema.validate(config, config_schema(self.ip_block.num_channels, self.ip_block.num_polarisations))
        except Exception as e:
            self.module.log_error(e)
            return InternalRestResponse.bad_request(
                f'Configuration schema validation failed: {str(e)}'
            )

        if (channel := config.get('channel', None)) is not None:
            config['gain'] = 1.0
            self.ip_block.gains[config.get('pol', 0) * self.ip_block.num_channels + channel] = config

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def recover(self: Self) -> InternalRestResponse:
        """Recover the B123VCC-OSPPFB Channeliser.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        for i in range(len(self.ip_block.gains)):
            self.ip_block.gains[i]['gain'] = 1.0
        self.ip_block.expected_sample_rate = 3_960_000_000

        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def start(self: Self) -> InternalRestResponse:
        """Start the B123VCC-OSPPFB Channeliser (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.POST)
    def stop(self: Self) -> InternalRestResponse:
        """Stop the B123VCC-OSPPFB Channeliser (does nothing).

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        return InternalRestResponse.ok()

    @BaseEmulatorApi.route(http_method=HttpMethod.GET)
    def status(
        self: Self,
        clear: QueryParam[bool] = False
    ) -> InternalRestResponse:
        """Update and get the status of the B123VCC-OSPPFB Channeliser.

        Args:
            clear (:obj:`bool`): set to True to clear the counters. Default False.

        Returns:
            :obj:`InternalRestResponse` the response.
        """
        try:
            status = {
                'sample_rate': self.ip_block.sample_rate,
                'num_channels': self.ip_block.num_channels,
                'num_polarisations': self.ip_block.num_polarisations,
                'gains': self.ip_block.gains
            }

            if clear:
                # TODO: do something
                pass

        except Exception as e:
            return InternalRestResponse.internal_server_error(str(e))

        return InternalRestResponse.ok(status)
