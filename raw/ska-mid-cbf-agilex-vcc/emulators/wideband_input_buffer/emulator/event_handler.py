from typing import Self, override
import jsonschema
from ska_mid_cbf_emulators.common import BaseEventHandler, EventSeverity, ManualEvent, ManualEventSubType, PulseEvent, SignalUpdateEventList

from .state_machine import WidebandInputBufferTransitionTrigger
from .schemas import injection_schemas


class EmulatorEventHandler(BaseEventHandler):

    @override
    def handle_pulse_event(self: Self, event: PulseEvent, **kwargs) -> None:
        """Handle an incoming pulse event.

        Args:
            event (:obj:`PulseEvent`): The event to handle.
            **kwargs: Arbitrary keyword arguments.
        """
        self.log_trace(f'Wideband Input Buffer Pulse event handler called for {event}')

        self.subcontroller.trigger_if_allowed(
            WidebandInputBufferTransitionTrigger.RECEIVE_PULSE,
            packet_rate=getattr(self, 'packet_rate', 0)
        )

    @override
    def handle_signal_update_events(self: Self, event_list: SignalUpdateEventList, **kwargs) -> SignalUpdateEventList:
        """Handle an incoming Signal Update event list.

        Args:
            event_list (:obj:`SignalUpdateEventList`): The signal update event list to handle.
            **kwargs: Arbitrary keyword arguments.

        Returns:
            :obj:`SignalUpdateEventList` The signal update event list to send to the next block.
        """
        self.log_trace(f'Wideband Input Buffer Signal Update event handler called for {event_list}')

        # TODO: temporary, don't know how multiple inputs (band 5) will actually be handled here
        self.packet_rate = min(*event_list.events, key=lambda e: float(e.value.get('packet_rate', 0))).value.get('packet_rate', 0)

        if len(event_list) > 1:
            event_list.events = event_list.events[:1]

        return event_list

    @override
    def handle_manual_event(self: Self, event: ManualEvent, **kwargs) -> None | list[ManualEvent]:
        """Handle an incoming manual event.

        Args:
            event (:obj:`ManualEvent`): The manual event to handle.
            **kwargs: Arbitrary keyword arguments.

        Returns:
            :obj:`None | list[ManualEvent]` Optionally, a list of one or more new manual events \
                to automatically forward downstream.
        """
        self.log_trace(f'Wideband Input Buffer manual event handler called for {event}')

        match event.subtype:

            case ManualEventSubType.GENERAL:
                self.log_debug(f'{event.subtype} implementation TBD')

            case ManualEventSubType.INJECTION:
                injection_type = event.value.get('injection_type')
                try:
                    if injection_type is not None:
                        if injection_schemas.get(injection_type) is not None:
                            jsonschema.validate(event.value, injection_schemas[injection_type])

                        match injection_type:
                            case 'force_register_value':
                                if hasattr(self.ip_block, event.value['register_name']):
                                    setattr(self.ip_block, event.value['register_name'], event.value['register_value'])
                                else:
                                    self.log_error(f'No register found with name `{event.value['register_name']}`.')

                            case 'power_cycle':
                                self.subcontroller.trigger_if_allowed(
                                    WidebandInputBufferTransitionTrigger.RESET
                                )

                            case _:
                                self.subcontroller.log_warning(f'injection_type not implemented for WIB: {injection_type}')

                        if event.severity == EventSeverity.FATAL_ERROR:
                            self.subcontroller.trigger_if_allowed(
                                WidebandInputBufferTransitionTrigger.CRITICAL_FAULT
                            )
                    else:
                        self.log_error(f'Injected event with value `{event.value}` missing required injection_type.')
                except jsonschema.ValidationError as e:
                    self.log_error(f'Injected event value failed schema validation: {str(e)}')

            case _:
                self.log_debug(f'Unhandled event type {event.subtype}')
