from typing import Self, override
from ska_mid_cbf_emulators.common import EventSeverity, ManualEventSubType, SignalUpdateEventList, ManualEvent, BaseEventHandler

from .state_machine import PacketValidationTransitionTrigger


class EmulatorEventHandler(BaseEventHandler):


    @override
    def handle_signal_update_events(self: Self, event_list: SignalUpdateEventList, **kwargs) -> SignalUpdateEventList:
        """Handle an incoming Signal Update event list.

        Args:
            event_list (:obj:`SignalUpdateEventList`): The signal update event list to handle.
            **kwargs: Arbitrary keyword arguments.

        Returns:
            :obj:`SignalUpdateEventList` The signal update event list to send to the next block.
        """
        self.subcontroller.log_trace(f'Packet Validation Signal Update event handler called for {event_list}')
        return event_list


    @override
    def handle_manual_event(self: Self, event: ManualEvent, **kwargs) -> None | list[ManualEvent]:
        """Handle an incoming manual event.

        Args:
            event (:obj:`ManualEvent`): The manual event to handle.
            **kwargs: Arbitrary keyword arguments.

        Returns:
            :obj:`None | list[ManualEvent]` Optionally, a list of one or more new manual events to automatically forward downstream.
        """
        self.subcontroller.log_trace(f'Packet Validation manual event handler called for {event}')

        match event.subtype:

            case ManualEventSubType.GENERAL:
                self.subcontroller.log_debug(f'{event.subtype} implementation TBD')

            case ManualEventSubType.INJECTION:
                if event.severity == EventSeverity.FATAL_ERROR:
                    self.subcontroller.trigger_if_allowed(
                        PacketValidationTransitionTrigger.CRITICAL_FAULT
                    )

            case _:
                self.subcontroller.log_debug(f'Unhandled event type {event.subtype}')
