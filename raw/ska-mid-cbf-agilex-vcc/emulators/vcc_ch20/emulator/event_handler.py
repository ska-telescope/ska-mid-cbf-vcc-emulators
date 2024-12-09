from typing import Self, override
from ska_mid_cbf_emulators.common import BaseEventHandler, EventSeverity, ManualEvent, ManualEventSubType, SignalUpdateEventList

from .state_machine import B123VccOsppfbChanneliserTransitionTrigger


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
        self.log_trace(f'B123VCC-OSPPFB Channeliser Signal Update event handler called for {event_list}')
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
        self.log_trace(f'B123VCC-OSPPFB Channeliser manual event handler called for {event}')

        match event.subtype:

            case ManualEventSubType.GENERAL:
                self.log_debug(f'{event.subtype} implementation TBD')

            case ManualEventSubType.INJECTION:
                if event.severity == EventSeverity.FATAL_ERROR:
                    self.subcontroller.trigger_if_allowed(
                        B123VccOsppfbChanneliserTransitionTrigger.CRITICAL_FAULT
                    )

            case _:
                self.log_debug(f'Unhandled event type {event.subtype}')
