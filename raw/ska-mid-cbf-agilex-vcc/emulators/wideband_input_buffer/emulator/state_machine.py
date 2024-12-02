from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import BaseState, BaseTransitionTrigger, FiniteStateMachine, RoutingState, TransitionCondition


class WidebandInputBufferState(BaseState):
    """Enum containing possible states for the Wideband Input Buffer IP block emulator.

    Implements :obj:`BaseState`.
    """

    RESET = 'RESET'
    """The WIB has not been configured."""

    CONFIGURING = 'CONFIGURING'
    """The WIB is currently being configured."""

    READY = 'READY'
    """The WIB has been configured but has not been enabled."""

    ENABLING = 'ENABLING'
    """The WIB is being enabled and is awaiting the next pulse."""

    ENABLED = 'ENABLED'
    """The WIB is enabled and outputting samples."""

    DISABLING = 'DISABLING'
    """The WIB is being disabled and is awaiting the next pulse."""

    FAULT = 'FAULT'
    """The WIB has experienced a critical fault."""


class WidebandInputBufferTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the Wideband Input Buffer IP block emulator.

    Implements :obj:`BaseTransitionTrigger`.
    """
    CONFIGURE = auto()
    """The WIB starts the configuration process."""

    FAIL_CONFIGURING = auto()
    """The WIB fails the configuration process."""

    FINISH_CONFIGURING = auto()
    """The WIB finishes the configuration process."""

    START = auto()
    """The WIB is started."""

    STOP = auto()
    """The WIB is stopped."""

    RECEIVE_PULSE = auto()
    """The WIB receives a new pulse."""

    CRITICAL_FAULT = auto()
    """The WIB experiences a critical fault."""

    RESET = auto()
    """The WIB is reset."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the Wideband Input Buffer IP block emulator.

    Implements :obj:`FiniteStateMachine`.
    """

    def is_packet_rate_nonzero(self, packet_rate=None, **kwargs):
        return packet_rate is not None and packet_rate > 0

    def is_packet_rate_zero(self, packet_rate=None, **kwargs):
        return packet_rate is not None and packet_rate == 0

    @override
    @property
    def _states(self: Self) -> list[WidebandInputBufferState]:
        return [
            WidebandInputBufferState.RESET,
            WidebandInputBufferState.CONFIGURING,
            WidebandInputBufferState.READY,
            WidebandInputBufferState.ENABLING,
            WidebandInputBufferState.ENABLED,
            WidebandInputBufferState.DISABLING,
            WidebandInputBufferState.FAULT,
        ]

    @override
    @property
    def _initial_state(self: Self) -> WidebandInputBufferState:
        return WidebandInputBufferState.RESET

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                'source': [WidebandInputBufferState.RESET, WidebandInputBufferState.READY],
                'dest': WidebandInputBufferState.CONFIGURING,
                'trigger': WidebandInputBufferTransitionTrigger.CONFIGURE
            },
            {
                'source': WidebandInputBufferState.CONFIGURING,
                'dest': WidebandInputBufferState.READY,
                'trigger': WidebandInputBufferTransitionTrigger.FINISH_CONFIGURING
            },
            {
                'source': WidebandInputBufferState.CONFIGURING,
                'dest': WidebandInputBufferState.RESET,
                'trigger': WidebandInputBufferTransitionTrigger.FAIL_CONFIGURING
            },
            {
                'source': WidebandInputBufferState.READY,
                'dest': WidebandInputBufferState.ENABLING,
                'trigger': WidebandInputBufferTransitionTrigger.START
            },
            {
                'source': [WidebandInputBufferState.ENABLING, WidebandInputBufferState.ENABLED],
                'dest': RoutingState.TO_SAME,
                'trigger': WidebandInputBufferTransitionTrigger.START
            },
            {
                'source': WidebandInputBufferState.ENABLED,
                'dest': WidebandInputBufferState.DISABLING,
                'trigger': WidebandInputBufferTransitionTrigger.STOP
            },
            {
                'source': WidebandInputBufferState.ENABLING,
                'dest': WidebandInputBufferState.READY,
                'trigger': WidebandInputBufferTransitionTrigger.STOP
            },
            {
                'source': [WidebandInputBufferState.READY, WidebandInputBufferState.DISABLING],
                'dest': RoutingState.TO_SAME,
                'trigger': WidebandInputBufferTransitionTrigger.STOP
            },
            {
                'source': WidebandInputBufferState.ENABLING,
                'dest': WidebandInputBufferState.ENABLED,
                'trigger': WidebandInputBufferTransitionTrigger.RECEIVE_PULSE,
                'conditions': TransitionCondition(
                    'packet rate > 0',
                    self.is_packet_rate_nonzero
                )
            },
            {
                'source': WidebandInputBufferState.ENABLING,
                'dest': RoutingState.TO_SAME,
                'trigger': WidebandInputBufferTransitionTrigger.RECEIVE_PULSE,
                'conditions': TransitionCondition(
                    'packet rate = 0',
                    self.is_packet_rate_zero
                )
            },
            {
                'source': WidebandInputBufferState.DISABLING,
                'dest': WidebandInputBufferState.READY,
                'trigger': WidebandInputBufferTransitionTrigger.RECEIVE_PULSE
            },
            {
                'source': [WidebandInputBufferState.READY, WidebandInputBufferState.ENABLED],
                'dest': RoutingState.TO_SAME,
                'trigger': WidebandInputBufferTransitionTrigger.RECEIVE_PULSE
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': WidebandInputBufferState.FAULT,
                'trigger': WidebandInputBufferTransitionTrigger.CRITICAL_FAULT
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': WidebandInputBufferState.RESET,
                'trigger': WidebandInputBufferTransitionTrigger.RESET
            }
        ]
