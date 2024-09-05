from enum import auto
from typing import Any, Self, override

from ska_mid_cbf_emulators.common import BaseState, BaseTransitionTrigger, FiniteStateMachine, RoutingState, TransitionCondition


class MacState(BaseState):
    """Enum containing possible states for the Ethernet MAC module.

    Implements :obj:`BaseState`.
    """

    RESET = 'RESET'
    """The MAC is in reset state."""

    NO_LINK = 'NO_LINK'
    """The MAC is started but not receiving packets (packet rate == 0)."""

    LINK = 'LINK'
    """The MAC is receiving packets with no or low badness (packet rate > 0, badness < 0.5)."""

    DEGRADED = 'DEGRADED'
    """The MAC is receiving packets with high badness (packet rate > 0, badness >= 0.5)."""

    FAULT = 'FAULT'
    """The MAC has experienced a critical fault."""


class MacTransitionTrigger(BaseTransitionTrigger):
    """Enum containing transitions for the Ethernet MAC module.

    Implements :obj:`BaseTransitionTrigger`.
    """

    START = auto()
    """The MAC is started."""

    STOP = auto()
    """The MAC is stopped."""

    RESET = auto()
    """The MAC is reset."""

    RECEIVE_PULSE = auto()
    """The MAC receives a new pulse."""

    UPDATE_BADNESS = auto()
    """The MAC receives a new badness score (e.g. from an injected event)."""

    CRITICAL_FAULT = auto()
    """The MAC experiences a critical fault."""


class EmulatorStateMachine(FiniteStateMachine):
    """State machine for the Ethernet MAC module.

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
    def _states(self: Self) -> list[MacState]:
        return [
            MacState.RESET,
            MacState.NO_LINK,
            MacState.LINK,
            MacState.DEGRADED,
            MacState.FAULT
        ]

    @override
    @property
    def _initial_state(self: Self) -> MacState:
        return MacState.RESET

    @override
    @property
    def _transitions(self) -> list[dict[str, Any]]:
        return [
            {
                'source': MacState.RESET,
                'dest': MacState.NO_LINK,
                'trigger': MacTransitionTrigger.START
            },
            {
                'source': [MacState.NO_LINK, MacState.LINK],
                'dest': MacState.LINK,
                'trigger': MacTransitionTrigger.RECEIVE_PULSE,
                'conditions': TransitionCondition(
                    'packet rate > 0',
                    self.is_packet_rate_nonzero
                )
            },
            {
                'source': [MacState.NO_LINK, MacState.LINK, MacState.DEGRADED],
                'dest': MacState.NO_LINK,
                'trigger': MacTransitionTrigger.RECEIVE_PULSE,
                'conditions': TransitionCondition(
                    'packet rate = 0',
                    self.is_packet_rate_zero
                )
            },
            {
                'source': MacState.LINK,
                'dest': MacState.DEGRADED,
                'trigger': MacTransitionTrigger.UPDATE_BADNESS,
                'conditions': TransitionCondition(
                    '>= 0.5',
                    self.is_badness_unacceptable
                )
            },
            {
                'source': MacState.DEGRADED,
                'dest': MacState.LINK,
                'trigger': MacTransitionTrigger.UPDATE_BADNESS,
                'conditions': TransitionCondition(
                    '< 0.5',
                    self.is_badness_acceptable
                )
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': MacState.RESET,
                'trigger': MacTransitionTrigger.RESET
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': MacState.RESET,
                'trigger': MacTransitionTrigger.STOP
            },
            {
                'source': RoutingState.FROM_ANY,
                'dest': MacState.FAULT,
                'trigger': MacTransitionTrigger.CRITICAL_FAULT
            }
        ]
