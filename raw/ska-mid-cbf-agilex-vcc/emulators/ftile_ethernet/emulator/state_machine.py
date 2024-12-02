from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import BaseState, BaseTransitionTrigger, FiniteStateMachine, RoutingState, TransitionCondition


class EthernetState(BaseState):
    """Enum containing possible states for the F-tile Ethernet IP block emulator.

    Implements :obj:`BaseState`.
    """

    RESET = 'RESET'
    """The Ethernet block is in reset state."""

    NO_LINK = 'NO_LINK'
    """The Ethernet block is started but not receiving packets (packet rate == 0)."""

    LINK = 'LINK'
    """The Ethernet block is receiving packets with no or low badness (packet rate > 0, badness < 0.5)."""

    DEGRADED = 'DEGRADED'
    """The Ethernet block is receiving packets with high badness (packet rate > 0, badness >= 0.5)."""

    FAULT = 'FAULT'
    """The Ethernet block has experienced a critical fault."""


class EthernetTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the F-tile Ethernet IP block emulator.

    Implements :obj:`BaseTransitionTrigger`.
    """

    START = auto()
    """The Ethernet block is started."""

    STOP = auto()
    """The Ethernet block is stopped."""

    RESET = auto()
    """The Ethernet block is reset."""

    RECEIVE_PULSE = auto()
    """The Ethernet block receives a new pulse."""

    UPDATE_BADNESS = auto()
    """The Ethernet block receives a new badness score (e.g. from an injected event)."""

    CRITICAL_FAULT = auto()
    """The Ethernet block experiences a critical fault."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the F-tile Ethernet IP block emulator.

    Implements :obj:`FiniteStateMachine`.
    """

    def is_packet_rate_nonzero(self, packet_rate=None, **kwargs):
        return packet_rate is not None and packet_rate > 0

    def is_packet_rate_zero(self, packet_rate=None, **kwargs):
        return packet_rate is not None and packet_rate == 0

    def is_badness_acceptable(self, badness=None, **kwargs):
        return badness is not None and badness < 0.5

    def is_badness_unacceptable(self, badness=None, **kwargs):
        return badness is not None and badness >= 0.5

    @override
    @property
    def _states(self: Self) -> list[EthernetState]:
        return [
            EthernetState.RESET,
            EthernetState.NO_LINK,
            EthernetState.LINK,
            EthernetState.DEGRADED,
            EthernetState.FAULT
        ]

    @override
    @property
    def _initial_state(self: Self) -> EthernetState:
        return EthernetState.RESET

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                'source': EthernetState.RESET,
                'dest': EthernetState.NO_LINK,
                'trigger': EthernetTransitionTrigger.START
            },
            {
                'source': [EthernetState.NO_LINK, EthernetState.LINK],
                'dest': EthernetState.LINK,
                'trigger': EthernetTransitionTrigger.RECEIVE_PULSE,
                'conditions': TransitionCondition(
                    'packet rate > 0',
                    self.is_packet_rate_nonzero
                )
            },
            {
                'source': [EthernetState.NO_LINK, EthernetState.LINK, EthernetState.DEGRADED],
                'dest': EthernetState.NO_LINK,
                'trigger': EthernetTransitionTrigger.RECEIVE_PULSE,
                'conditions': TransitionCondition(
                    'packet rate = 0',
                    self.is_packet_rate_zero
                )
            },
            {
                'source': EthernetState.LINK,
                'dest': EthernetState.DEGRADED,
                'trigger': EthernetTransitionTrigger.UPDATE_BADNESS,
                'conditions': TransitionCondition(
                    '>= 0.5',
                    self.is_badness_unacceptable
                )
            },
            {
                'source': EthernetState.DEGRADED,
                'dest': EthernetState.LINK,
                'trigger': EthernetTransitionTrigger.UPDATE_BADNESS,
                'conditions': TransitionCondition(
                    '< 0.5',
                    self.is_badness_acceptable
                )
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': EthernetState.RESET,
                'trigger': EthernetTransitionTrigger.RESET
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': EthernetState.RESET,
                'trigger': EthernetTransitionTrigger.STOP
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': EthernetState.FAULT,
                'trigger': EthernetTransitionTrigger.CRITICAL_FAULT
            }
        ]
