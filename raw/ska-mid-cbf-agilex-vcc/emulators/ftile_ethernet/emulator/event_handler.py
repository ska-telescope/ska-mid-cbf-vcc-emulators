from typing import Self, override
from ska_mid_cbf_emulators.common import EventSeverity, ManualEventSubType, ManualEvent, BaseEventHandler

from .state_machine import EthernetTransitionTrigger


class EmulatorEventHandler(BaseEventHandler):


    @override
    def handle_manual_event(self: Self, event: ManualEvent, **kwargs) -> None | list[ManualEvent]:
        """Handle an incoming manual event.

        Args:
            event (:obj:`ManualEvent`): The manual event to handle.
            **kwargs: Arbitrary keyword arguments.

        Returns:
            :obj:`None | list[ManualEvent]` Optionally, a list of one or more new manual events to automatically forward downstream.
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
