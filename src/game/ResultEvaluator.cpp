#include "ResultEvaluator.h"
<<<<<<< HEAD
#include "../rules/WinChecker.h"
#include "../rules/DrawChecker.h"
=======
#include "rules/WinChecker.h"
#include "rules/DrawChecker.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

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
