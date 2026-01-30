#include "ResultEvaluator.h"
#include "rules/WinChecker.h"
#include "rules/DrawChecker.h"

void ResultEvaluator::evaluate(GameState& state) {
    const BoardModel& board = state.getBoard();
    Cell player = state.getCurrentPlayer();

    if (WinChecker::checkWin(board, player)) {
        state.setWinner(player);
        state.setStatus(GameStatus::WIN);
        return;
    }

    if (DrawChecker::isDraw(board)) {
        state.setStatus(GameStatus::DRAW);
    }
}
