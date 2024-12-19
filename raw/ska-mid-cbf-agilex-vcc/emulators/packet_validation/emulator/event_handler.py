from typing import Self, override
from ska_mid_cbf_emulators.common import EventSeverity, ManualEventSubType, ManualEvent, PulseEvent, BaseEventHandler, SignalUpdateEventList

from .state_machine import PacketValidationTransitionTrigger


class EmulatorEventHandler(BaseEventHandler):

    @override
    def handle_pulse_event(self: Self, event: PulseEvent, **kwargs) -> None:
        """Handle an incoming pulse event.

        Args:
            event (:obj:`PulseEvent`): The event to handle.
            **kwargs: Arbitrary keyword arguments.
        """
        self.log_trace(f'Packet Validation Pulse event handler called for {event}')

        self.subcontroller.trigger_if_allowed(
            PacketValidationTransitionTrigger.RECEIVE_PULSE,
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
        self.packet_rate = min(event_list.events, key=lambda e: float(e.value.get('packet_rate', 0))).value.get('packet_rate', 0)

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
        self.log_trace(f'Packet Validation manual event handler called for {event}')

        match event.subtype:

            case ManualEventSubType.GENERAL:
                self.log_debug(f'{event.subtype} implementation TBD')

            case ManualEventSubType.INJECTION:
                if event.severity == EventSeverity.FATAL_ERROR:
                    self.subcontroller.trigger_if_allowed(
                        PacketValidationTransitionTrigger.CRITICAL_FAULT
                    )

            case _:
                self.log_debug(f'Unhandled event type {event.subtype}')
