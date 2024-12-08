import jsonschema
from ska_mid_cbf_emulators.common import BaseEvent, BaseModule, EventSeverity, ProcessingEventSubType, PulseEventSubType

from .state_machine import WidebandInputBufferTransitionTrigger
from .ip_block import EmulatorIPBlock
from .schemas import injection_schemas


def handle_event(module: BaseModule, event: BaseEvent, **kwargs) -> None:
    """Handle an incoming event.

    Args:
        module (:obj:`BaseModule`): The module handling this event.
        event (:obj:`BaseEvent`): The event to handle.
        **kwargs: Arbitrary keyword arguments.
    """
    ip_block: EmulatorIPBlock = module.ip_block
    module.log_trace(f'WIB event callback called for {event}')

    match event.subtype:

        # PulseEvent types
        case PulseEventSubType.PULSE:
            if event.value.get('packet_rate') is None:
                return
            module.trigger_if_allowed(
                WidebandInputBufferTransitionTrigger.RECEIVE_PULSE,
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
            injection_type = event.value.get('injection_type')
            try:
                if injection_type is not None:
                    if injection_schemas.get(injection_type) is not None:
                        jsonschema.validate(event.value, injection_schemas[injection_type])

                    match injection_type:
                        case 'force_register_value':
                            if hasattr(ip_block, event.value['register_name']):
                                setattr(ip_block, event.value['register_name'], event.value['register_value'])
                            else:
                                module.log_error(f'No register found with name `{event.value['register_name']}`.')

                        case 'power_cycle':
                            module.trigger_if_allowed(
                                WidebandInputBufferTransitionTrigger.RESET
                            )

                        case _:
                            module.log_warning(f'injection_type not implemented for WIB: {injection_type}')

                    if event.severity == EventSeverity.FATAL_ERROR:
                        module.trigger_if_allowed(
                            WidebandInputBufferTransitionTrigger.CRITICAL_FAULT
                        )
                else:
                    module.log_error(f'Injected event with value `{event.value}` missing required injection_type.')
            except jsonschema.ValidationError as e:
                module.log_error(f'Injected event value failed schema validation: {str(e)}')

        case _:
            module.log_debug(f'Unhandled event type: {event.subtype}')
