from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import BaseState, BaseTransitionTrigger, FiniteStateMachine, RoutingState


class B123VccOsppfbChanneliserState(BaseState):
    """Enum containing possible states for the B123VCC-OSPPFB Channeliser IP block emulator.

    Implements :obj:`BaseState`.
    """

    ACTIVE = 'ACTIVE'
    """The B123VCC-OSPPFB Channeliser is active."""

    FAULT = 'FAULT'
    """The B123VCC-OSPPFB Channeliser has experienced a critical fault."""


class B123VccOsppfbChanneliserTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the B123VCC-OSPPFB Channeliser IP block emulator.

    Implements :obj:`BaseTransitionTrigger`.
    """

    CRITICAL_FAULT = auto()
    """The B123VCC-OSPPFB Channeliser experiences a critical fault."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the B123VCC-OSPPFB Channeliser IP block emulator.

    Implements :obj:`FiniteStateMachine`.
    """

    @override
    @property
    def _states(self: Self) -> list[B123VccOsppfbChanneliserState]:
        return [
            B123VccOsppfbChanneliserState.ACTIVE,
            B123VccOsppfbChanneliserState.FAULT
        ]

    @override
    @property
    def _initial_state(self: Self) -> B123VccOsppfbChanneliserState:
        return B123VccOsppfbChanneliserState.ACTIVE

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                'source': RoutingState.FROM_ANY,
                'dest': B123VccOsppfbChanneliserState.FAULT,
                'trigger': B123VccOsppfbChanneliserTransitionTrigger.CRITICAL_FAULT
            }
        ]
