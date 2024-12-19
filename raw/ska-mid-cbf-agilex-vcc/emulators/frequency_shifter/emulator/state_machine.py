from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import BaseState, BaseTransitionTrigger, FiniteStateMachine, RoutingState


class FrequencyShifterState(BaseState):
    """Enum containing possible states for the Frequency Shifter IP block emulator.

    Implements :obj:`BaseState`.
    """

    ACTIVE = 'ACTIVE'
    """The Frequency Shifter is active."""

    FAULT = 'FAULT'
    """The Frequency Shifter has experienced a critical fault."""


class FrequencyShifterTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the Frequency Shifter IP block emulator.

    Implements :obj:`BaseTransitionTrigger`.
    """

    CRITICAL_FAULT = auto()
    """The Frequency Shifter experiences a critical fault."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the Frequency Shifter IP block emulator.

    Implements :obj:`FiniteStateMachine`.
    """

    @override
    @property
    def _states(self: Self) -> list[FrequencyShifterState]:
        return [
            FrequencyShifterState.ACTIVE,
            FrequencyShifterState.FAULT
        ]

    @override
    @property
    def _initial_state(self: Self) -> FrequencyShifterState:
        return FrequencyShifterState.ACTIVE

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                'source': RoutingState.FROM_ANY,
                'dest': FrequencyShifterState.FAULT,
                'trigger': FrequencyShifterTransitionTrigger.CRITICAL_FAULT
            }
        ]
