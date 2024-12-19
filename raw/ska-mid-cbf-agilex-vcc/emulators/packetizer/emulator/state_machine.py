from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import (
    BaseState,
    BaseTransitionTrigger,
    FiniteStateMachine,
    RoutingState,
)


class PacketizerState(BaseState):
    """Enum containing possible states for the Packetizer IP block emulator.

    Implements :obj:`BaseState`.
    """

    ACTIVE = "ACTIVE"
    """The Packetizer is active."""

    FAULT = "FAULT"
    """The Packetizer has experienced a critical fault."""


class PacketizerTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the Packetizer IP block emulator.

    Implements :obj:`BaseTransitionTrigger`.
    """

    CRITICAL_FAULT = auto()
    """The Packetizer experiences a critical fault."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the Packetizer IP block emulator.

    Implements :obj:`FiniteStateMachine`.
    """

    @override
    @property
    def _states(self: Self) -> list[PacketizerState]:
        return [PacketizerState.ACTIVE, PacketizerState.FAULT]

    @override
    @property
    def _initial_state(self: Self) -> PacketizerState:
        return PacketizerState.ACTIVE

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                "source": RoutingState.FROM_ANY,
                "dest": PacketizerState.FAULT,
                "trigger": PacketizerTransitionTrigger.CRITICAL_FAULT,
            }
        ]
