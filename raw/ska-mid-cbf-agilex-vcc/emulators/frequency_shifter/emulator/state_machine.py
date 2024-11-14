from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import BaseState, BaseTransitionTrigger, FiniteStateMachine, RoutingState


class WidebandFrequencyShifterState(BaseState):
    """Enum containing possible states for the Wideband Frequency Shifter module.

    Implements :obj:`BaseState`.
    """

    ACTIVE = 'ACTIVE'
    """The Wideband Frequency Shifter is active."""

    FAULT = 'FAULT'
    """The Wideband Frequency Shifter has experienced a critical fault."""


class WidebandFrequencyShifterTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the Wideband Frequency Shifter module.

    Implements :obj:`BaseTransitionTrigger`.
    """

    CRITICAL_FAULT = auto()
    """The Wideband Frequency Shifter experiences a critical fault."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the Wideband Frequency Shifter module.

    Implements :obj:`FiniteStateMachine`.
    """

    @override
    @property
    def _states(self: Self) -> list[WidebandFrequencyShifterState]:
        return [
            WidebandFrequencyShifterState.ACTIVE,
            WidebandFrequencyShifterState.FAULT
        ]

    @override
    @property
    def _initial_state(self: Self) -> WidebandFrequencyShifterState:
        return WidebandFrequencyShifterState.ACTIVE

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                'source': RoutingState.FROM_ANY,
                'dest': WidebandFrequencyShifterState.FAULT,
                'trigger': WidebandFrequencyShifterTransitionTrigger.CRITICAL_FAULT
            }
        ]
