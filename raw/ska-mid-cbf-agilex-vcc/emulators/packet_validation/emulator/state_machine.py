from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import BaseState, BaseTransitionTrigger, FiniteStateMachine, RoutingState, TransitionCondition


class PacketValidationState(BaseState):
    """Enum containing possible states for the Packet Validation IP block emulator.

    Implements :obj:`BaseState`.
    """

    RESET = 'RESET'
    """The Packet Validation block is in reset state and is available to be started."""

    ENABLING = 'ENABLING'
    """The Packet Validation block is being enabled and is awaiting the next pulse."""

    ENABLED = 'ENABLED'
    """The Packet Validation block is enabled and processing packets."""

    DISABLING = 'DISABLING'
    """The Packet Validation block is being disabled and is awaiting the next pulse."""

    FAULT = 'FAULT'
    """The Packet Validation block has experienced a critical fault."""


class PacketValidationTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the Packet Validation IP block emulator.

    Implements :obj:`BaseTransitionTrigger`.
    """

    START = auto()
    """The Packet Validation block is started."""

    STOP = auto()
    """The Packet Validation block is stopped."""

    RECEIVE_PULSE = auto()
    """The Packet Validation block receives a new pulse."""

    CRITICAL_FAULT = auto()
    """The Packet Validation block experiences a critical fault."""

    RESET = auto()
    """The Packet Validation block is reset."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the Packet Validation IP block emulator.

    Implements :obj:`FiniteStateMachine`.
    """

    def is_packet_rate_nonzero(self, packet_rate=None, **kwargs):
        return packet_rate is not None and packet_rate > 0

    def is_packet_rate_zero(self, packet_rate=None, **kwargs):
        return packet_rate is not None and packet_rate == 0

    @override
    @property
    def _states(self: Self) -> list[PacketValidationState]:
        return [
            PacketValidationState.RESET,
            PacketValidationState.ENABLING,
            PacketValidationState.ENABLED,
            PacketValidationState.DISABLING,
            PacketValidationState.FAULT
        ]

    @override
    @property
    def _initial_state(self: Self) -> PacketValidationState:
        return PacketValidationState.RESET

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                'source': PacketValidationState.RESET,
                'dest': PacketValidationState.ENABLING,
                'trigger': PacketValidationTransitionTrigger.START
            },
            {
                'source': [
                    PacketValidationState.ENABLING,
                    PacketValidationState.ENABLED
                ],
                'dest': RoutingState.TO_SAME,
                'trigger': PacketValidationTransitionTrigger.START
            },
            {
                'source': PacketValidationState.ENABLED,
                'dest': PacketValidationState.DISABLING,
                'trigger': PacketValidationTransitionTrigger.STOP
            },
            {
                'source': PacketValidationState.ENABLING,
                'dest': PacketValidationState.RESET,
                'trigger': PacketValidationTransitionTrigger.STOP
            },
            {
                'source': [
                    PacketValidationState.DISABLING,
                    PacketValidationState.RESET
                ],
                'dest': RoutingState.TO_SAME,
                'trigger': PacketValidationTransitionTrigger.STOP
            },
            {
                'source': PacketValidationState.ENABLING,
                'dest': PacketValidationState.ENABLED,
                'trigger': PacketValidationTransitionTrigger.RECEIVE_PULSE,
                'conditions': TransitionCondition(
                    'packet rate > 0',
                    self.is_packet_rate_nonzero
                )
            },
            {
                'source': PacketValidationState.ENABLING,
                'dest': RoutingState.TO_SAME,
                'trigger': PacketValidationTransitionTrigger.RECEIVE_PULSE,
                'conditions': TransitionCondition(
                    'packet rate = 0',
                    self.is_packet_rate_zero
                )
            },
            {
                'source': PacketValidationState.DISABLING,
                'dest': PacketValidationState.RESET,
                'trigger': PacketValidationTransitionTrigger.RECEIVE_PULSE
            },
            {
                'source': [
                    PacketValidationState.RESET,
                    PacketValidationState.ENABLED
                ],
                'dest': RoutingState.TO_SAME,
                'trigger': PacketValidationTransitionTrigger.RECEIVE_PULSE
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': PacketValidationState.FAULT,
                'trigger': PacketValidationTransitionTrigger.CRITICAL_FAULT
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': PacketValidationState.RESET,
                'trigger': PacketValidationTransitionTrigger.RESET
            }
        ]
