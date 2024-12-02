from ska_mid_cbf_emulators.common import BaseEvent, BaseSubcontroller, EventSeverity, ProcessingEventSubType, PulseEventSubType

from .state_machine import EthernetTransitionTrigger


def handle_event(subcontroller: BaseSubcontroller, event: BaseEvent, **kwargs) -> None:
    """Handle an incoming event.

    Args:
        subcontroller (:obj:`BaseSubcontroller`): The subcontroller handling this event.
        event (:obj:`BaseEvent`): The event to handle.
        **kwargs: Arbitrary keyword arguments.
    """
    subcontroller.log_trace(f'F-tile Ethernet event callback called for {event}')

    match event.subtype:

        # PulseEvent types
        case PulseEventSubType.PULSE:
            if event.value.get('packet_rate') is None:
                return
            subcontroller.trigger_if_allowed(
                EthernetTransitionTrigger.RECEIVE_PULSE,
                packet_rate=float(event.value.get('packet_rate'))
            )

        case PulseEventSubType.ERROR:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        # ProcessingEvent types
        case ProcessingEventSubType.GENERAL:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        case ProcessingEventSubType.UPDATE_SELF:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        case ProcessingEventSubType.INJECTION:
            if event.value.get('badness') is not None:
                subcontroller.trigger_if_allowed(
                    EthernetTransitionTrigger.UPDATE_BADNESS,
                    badness=float(event.value.get('badness'))
                )

            if event.severity == EventSeverity.FATAL_ERROR:
                subcontroller.trigger_if_allowed(
                    EthernetTransitionTrigger.CRITICAL_FAULT
                )

        case _:
            subcontroller.log_debug(f'Unhandled event type {event.subtype}')
