#include "MoveEvaluator.h"
<<<<<<< HEAD
#include "../rules/WinChecker.h"
=======
#include "rules/WinChecker.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364
#include "Heuristics.h"

int MoveEvaluator::evaluateBoard(
    const BoardModel& board,
    Cell ai,
    Cell human
) {
    if (WinChecker::checkWin(board, ai)) return 1000;
    if (WinChecker::checkWin(board, human)) return -1000;

    return Heuristics::evaluate(board, ai, human);
}
