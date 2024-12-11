from typing import Self, override
from ska_mid_cbf_emulators.common import EventSeverity, ManualEventSubType, ManualEvent, BaseEventHandler, SignalUpdateEventList

from .state_machine import EthernetTransitionTrigger


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
        self.log_trace(f'F-tile Ethernet Signal Update event handler called for {event_list}')

        # TODO: temporary, don't know how multiple inputs (band 5) will actually be handled here
        self.log_debug(f'event_list.events={event_list.events}')
        z = min(*event_list.events, key=lambda e: float(e.value.get('packet_rate', 0)))
        self.log_debug(f'min(*event_list.events, key=lambda e: float(e.value.get(\'packet_rate\', 0)))={z}')
        self.log_debug(f'z.value.get(\'packet_rate\', 0)={z.value.get('packet_rate', 0)}')
        packet_rate = min(*event_list.events, key=lambda e: float(e.value.get('packet_rate', 0))).value.get('packet_rate', 0)
        self.subcontroller.trigger_if_allowed(EthernetTransitionTrigger.PACKET_RATE_UPDATE, packet_rate=packet_rate)

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
        self.log_trace(f'F-tile Ethernet manual event handler called for {event}')

        match event.subtype:

            case ManualEventSubType.GENERAL:
                self.log_debug(f'{event.subtype} implementation TBD')

            case ManualEventSubType.INJECTION:
                if event.value.get('badness') is not None:
                    self.subcontroller.trigger_if_allowed(
                        EthernetTransitionTrigger.UPDATE_BADNESS,
                        badness=float(event.value.get('badness'))
                    )

                if event.severity == EventSeverity.FATAL_ERROR:
                    self.subcontroller.trigger_if_allowed(
                        EthernetTransitionTrigger.CRITICAL_FAULT
                    )

            case _:
                self.log_debug(f'Unhandled event type {event.subtype}')
