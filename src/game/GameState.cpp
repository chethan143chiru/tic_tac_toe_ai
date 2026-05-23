#include "GameState.h"

GameState::GameState(int boardSize, Cell startingPlayer)
    : board(boardSize),
      currentPlayer(startingPlayer),
      status(GameStatus::RUNNING),
      winner(Cell::EMPTY) {}

const BoardModel& GameState::getBoard() const {
    return board;
}

BoardModel& GameState::accessBoard() {
    return board;
}

Cell GameState::getCurrentPlayer() const {
    return currentPlayer;
}

void GameState::setCurrentPlayer(Cell player) {
    currentPlayer = player;
}

GameStatus GameState::getStatus() const {
    return status;
}

void GameState::setStatus(GameStatus newStatus) {
    status = newStatus;
}

Cell GameState::getWinner() const {
    return winner;
}

void GameState::setWinner(Cell player) {
    winner = player;
}
