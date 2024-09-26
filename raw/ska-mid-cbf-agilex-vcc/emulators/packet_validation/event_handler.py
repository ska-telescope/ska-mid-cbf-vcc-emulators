from ska_mid_cbf_emulators.common import BaseEvent, BaseModule, EventSeverity, ProcessingEventSubType, PulseEventSubType

from .state_machine import PacketValidationTransitionTrigger


def handle_event(module: BaseModule, event: BaseEvent, **kwargs) -> None:
    """Handle an incoming event.

    Args:
        module (:obj:`BaseModule`): The module handling this event.
        event (:obj:`BaseEvent`): The event to handle.
        **kwargs: Arbitrary keyword arguments.
    """
    module.log_trace(f'Packet Validation event callback called for {event}')

    match event.subtype:

        # PulseEvent types
        case PulseEventSubType.PULSE:
            if event.value.get('packet_rate') is None:
                return
            module.trigger_if_allowed(
                PacketValidationTransitionTrigger.RECEIVE_PULSE,
                packet_rate=float(event.value.get('packet_rate'))
            )

        case PulseEventSubType.ERROR:
            module.log_debug(f'{event.subtype} implementation TBD')

        # ProcessingEvent types
        case ProcessingEventSubType.GENERAL:
            module.log_debug(f'{event.subtype} implementation TBD')

        case ProcessingEventSubType.UPDATE_SELF:
            module.log_debug(f'{event.subtype} implementation TBD')

        case ProcessingEventSubType.INJECTION:
            if event.severity == EventSeverity.FATAL_ERROR:
                module.trigger_if_allowed(
                    PacketValidationTransitionTrigger.CRITICAL_FAULT
                )

        case _:
            module.log_debug(f'Unhandled event type {event.subtype}')
