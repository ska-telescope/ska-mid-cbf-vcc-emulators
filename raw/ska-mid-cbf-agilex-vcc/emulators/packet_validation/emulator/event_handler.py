from ska_mid_cbf_emulators.common import BaseEvent, BaseSubcontroller, EventSeverity, ManualEventSubType, PulseEventSubType

from .state_machine import PacketValidationTransitionTrigger


def handle_event(subcontroller: BaseSubcontroller, event: BaseEvent, **kwargs) -> None:
    """Handle an incoming event.

    Args:
        subcontroller (:obj:`BaseSubcontroller`): The subcontroller handling this event.
        event (:obj:`BaseEvent`): The event to handle.
        **kwargs: Arbitrary keyword arguments.
    """
    subcontroller.log_trace(f'Packet Validation event callback called for {event}')

    match event.subtype:

        # PulseEvent types
        case PulseEventSubType.PULSE:
            if event.value.get('packet_rate') is None:
                return
            subcontroller.trigger_if_allowed(
                PacketValidationTransitionTrigger.RECEIVE_PULSE,
                packet_rate=float(event.value.get('packet_rate'))
            )

        case PulseEventSubType.ERROR:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        # ManualEvent types
        case ManualEventSubType.GENERAL:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        case ManualEventSubType.UPDATE_SELF:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        case ManualEventSubType.INJECTION:
            if event.severity == EventSeverity.FATAL_ERROR:
                subcontroller.trigger_if_allowed(
                    PacketValidationTransitionTrigger.CRITICAL_FAULT
                )

        case _:
            subcontroller.log_debug(f'Unhandled event type {event.subtype}')
