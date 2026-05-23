#include "ReplayManager.h"

void ReplayManager::reset(GameState& state, Cell startingPlayer) {
    state.accessBoard().reset();
    state.setCurrentPlayer(startingPlayer);
    state.setStatus(GameStatus::RUNNING);
    state.setWinner(Cell::EMPTY);
}
