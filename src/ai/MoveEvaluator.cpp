#include "MoveEvaluator.h"
#include "rules/WinChecker.h"
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
