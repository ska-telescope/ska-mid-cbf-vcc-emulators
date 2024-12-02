from ska_mid_cbf_emulators.common import BaseEvent, BaseSubcontroller, EventSeverity, ProcessingEventSubType, PulseEventSubType

from .state_machine import CircuitSwitchTransitionTrigger


def handle_event(subcontroller: BaseSubcontroller, event: BaseEvent, **kwargs) -> None:
    """Handle an incoming event.

    Args:
        subcontroller (:obj:`BaseSubcontroller`): The subcontroller handling this event.
        event (:obj:`BaseEvent`): The event to handle.
        **kwargs: Arbitrary keyword arguments.
    """
    subcontroller.log_trace(f"Circuit Switch event callback called for {event}")

    match event.subtype:

        # PulseEvent types
        case PulseEventSubType.PULSE:
            subcontroller.log_debug(f"{event.subtype} implementation TBD")

        case PulseEventSubType.ERROR:
            subcontroller.log_debug(f"{event.subtype} implementation TBD")

        # ProcessingEvent types
        case ProcessingEventSubType.GENERAL:
            subcontroller.log_debug(f"{event.subtype} implementation TBD")

        case ProcessingEventSubType.UPDATE_SELF:
            subcontroller.log_debug(f"{event.subtype} implementation TBD")

        case ProcessingEventSubType.INJECTION:
            if event.severity == EventSeverity.FATAL_ERROR:
                subcontroller.trigger_if_allowed(CircuitSwitchTransitionTrigger.CRITICAL_FAULT)

        case _:
            subcontroller.log_debug(f"Unhandled event type {event.subtype}")
