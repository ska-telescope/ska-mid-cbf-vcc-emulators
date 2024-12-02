from ska_mid_cbf_emulators.common import BaseEvent, BaseSubcontroller, EventSeverity, ProcessingEventSubType, PulseEventSubType

from .state_machine import B123VccOsppfbChanneliserTransitionTrigger


def handle_event(subcontroller: BaseSubcontroller, event: BaseEvent, **kwargs) -> None:
    """Handle an incoming event.

    Args:
        subcontroller (:obj:`BaseSubcontroller`): The subcontroller handling this event.
        event (:obj:`BaseEvent`): The event to handle.
        **kwargs: Arbitrary keyword arguments.
    """
    subcontroller.log_trace(f'B123VCC-OSPPFB Channeliser event callback called for {event}')

    match event.subtype:

        # PulseEvent types
        case PulseEventSubType.PULSE:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        case PulseEventSubType.ERROR:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        # ProcessingEvent types
        case ProcessingEventSubType.GENERAL:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        case ProcessingEventSubType.UPDATE_SELF:
            subcontroller.log_debug(f'{event.subtype} implementation TBD')

        case ProcessingEventSubType.INJECTION:
            if event.severity == EventSeverity.FATAL_ERROR:
                subcontroller.trigger_if_allowed(
                    B123VccOsppfbChanneliserTransitionTrigger.CRITICAL_FAULT
                )

        case _:
            subcontroller.log_debug(f'Unhandled event type {event.subtype}')
