from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import BaseState, BaseTransitionTrigger, FiniteStateMachine, RoutingState


class CircuitSwitchState(BaseState):
    """Enum containing possible states for the Circuit Switch IP block emulator.

    Implements :obj:`BaseState`.
    """

    ACTIVE = "ACTIVE"
    """The Circuit Switch block is active."""

    FAULT = "FAULT"
    """The Circuit Switch block has experienced a critical fault."""


class CircuitSwitchTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the Circuit Switch IP block emulator.

    Implements :obj:`BaseTransitionTrigger`.
    """

    CRITICAL_FAULT = auto()
    """The Circuit Switch block experiences a critical fault."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the Circuit Switch IP block emulator.

    Implements :obj:`FiniteStateMachine`.
    """

    @override
    @property
    def _states(self: Self) -> list[CircuitSwitchState]:
        return [CircuitSwitchState.ACTIVE, CircuitSwitchState.FAULT]

    @override
    @property
    def _initial_state(self: Self) -> CircuitSwitchState:
        return CircuitSwitchState.ACTIVE

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                "source": RoutingState.FROM_ANY,
                "dest": CircuitSwitchState.FAULT,
                "trigger": CircuitSwitchTransitionTrigger.CRITICAL_FAULT,
            }
        ]
