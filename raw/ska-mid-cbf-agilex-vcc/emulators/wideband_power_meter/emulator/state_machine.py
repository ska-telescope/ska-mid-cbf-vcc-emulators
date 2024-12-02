from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import (
    BaseState,
    BaseTransitionTrigger,
    FiniteStateMachine,
    RoutingState,
)


class WidebandPowerMeterState(BaseState):
    """Enum containing possible states for the Wideband Power Meter module.

    Implements :obj:`BaseState`.
    """

    ACTIVE = "ACTIVE"
    """The Wideband Power Meter is active."""

    FAULT = "FAULT"
    """The Wideband Power Meter has experienced a critical fault."""


class WidebandPowerMeterTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the Wideband Power Meter module.

    Implements :obj:`BaseTransitionTrigger`.
    """

    CRITICAL_FAULT = auto()
    """The Wideband Power Meter experiences a critical fault."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the Wideband Power Meter module.

    Implements :obj:`FiniteStateMachine`.
    """

    @override
    @property
    def _states(self: Self) -> list[WidebandPowerMeterState]:
        return [WidebandPowerMeterState.ACTIVE, WidebandPowerMeterState.FAULT]

    @override
    @property
    def _initial_state(self: Self) -> WidebandPowerMeterState:
        return WidebandPowerMeterState.ACTIVE

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                "source": RoutingState.FROM_ANY,
                "dest": WidebandPowerMeterState.FAULT,
                "trigger": WidebandPowerMeterTransitionTrigger.CRITICAL_FAULT,
            }
        ]
