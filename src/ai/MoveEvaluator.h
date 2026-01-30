#ifndef MOVE_EVALUATOR_H
#define MOVE_EVALUATOR_H

#include "board/BoardModel.h"
#include "board/CellModel.h"

class MoveEvaluator {
public:
    static int evaluateBoard(
        const BoardModel& board,
        Cell ai,
        Cell human
    );
};

#endif
