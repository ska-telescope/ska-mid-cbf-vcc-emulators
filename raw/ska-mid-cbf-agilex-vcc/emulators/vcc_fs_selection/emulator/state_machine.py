from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import BaseState, BaseTransitionTrigger, FiniteStateMachine, RoutingState


class FrequencySliceSelectionState(BaseState):
    """Enum containing possible states for the Frequency Slice Selection IP block emulator.

    Implements :obj:`BaseState`.
    """

    ACTIVE = 'ACTIVE'
    """The Frequency Slice Selection block is active."""

    FAULT = 'FAULT'
    """The Frequency Slice Selection block has experienced a critical fault."""


class FrequencySliceSelectionTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the Frequency Slice Selection IP block emulator.

    Implements :obj:`BaseTransitionTrigger`.
    """

    CRITICAL_FAULT = auto()
    """The Frequency Slice Selection block experiences a critical fault."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the Frequency Slice Selection IP block emulator.

    Implements :obj:`FiniteStateMachine`.
    """

    @override
    @property
    def _states(self: Self) -> list[FrequencySliceSelectionState]:
        return [
            FrequencySliceSelectionState.ACTIVE,
            FrequencySliceSelectionState.FAULT
        ]

    @override
    @property
    def _initial_state(self: Self) -> FrequencySliceSelectionState:
        return FrequencySliceSelectionState.ACTIVE

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                'source': RoutingState.FROM_ANY,
                'dest': FrequencySliceSelectionState.FAULT,
                'trigger': FrequencySliceSelectionTransitionTrigger.CRITICAL_FAULT
            }
        ]
