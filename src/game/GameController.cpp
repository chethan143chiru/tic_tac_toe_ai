#include "GameController.h"
#include "rules/MoveValidator.h"
#include "ai/AIEngine.h"
#include "game/TurnManager.h"
#include "game/ResultEvaluator.h"

GameController::GameController(int boardSize, Cell humanSymbol, Difficulty diff)
    : state(boardSize, humanSymbol),
      human(humanSymbol),
      ai(humanSymbol == Cell::X ? Cell::O : Cell::X),
      difficulty(diff) {}

void GameController::humanMove(int row, int col) {
    if (state.getStatus() != GameStatus::RUNNING)
        return;

    if (!MoveValidator::isValidMove(state.getBoard(), row, col))
        return;

    state.accessBoard().setCell(row, col, human);
    ResultEvaluator::evaluate(state);

    if (state.getStatus() != GameStatus::RUNNING)
        return;

    state.setCurrentPlayer(ai);
    handleAITurn();
}

void GameController::handleAITurn() {
    auto move = AIEngine::getBestMove(
        state.getBoard(),
        ai,
        human,
        difficulty
    );

    state.accessBoard().setCell(move.first, move.second, ai);
    ResultEvaluator::evaluate(state);

    if (state.getStatus() == GameStatus::RUNNING)
        state.setCurrentPlayer(human);
}

bool GameController::isGameOver() const {
    return state.getStatus() != GameStatus::RUNNING;
}

const BoardModel& GameController::getBoard() const {
    return state.getBoard();
}

Cell GameController::getWinner() const {
    return state.getWinner();
}

GameStatus GameController::getStatus() const {
    return state.getStatus();
}
