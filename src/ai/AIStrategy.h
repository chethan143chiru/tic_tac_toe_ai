#ifndef AI_STRATEGY_H
#define AI_STRATEGY_H

#include "board/BoardModel.h"
#include "board/CellModel.h"

class AIStrategy {
public:
    static bool findImmediateMove(
        BoardModel& board,
        Cell player,
        std::pair<int,int>& move
    );
};

#endif
