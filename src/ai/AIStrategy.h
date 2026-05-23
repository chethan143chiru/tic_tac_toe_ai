#ifndef AI_STRATEGY_H
#define AI_STRATEGY_H

<<<<<<< HEAD
#include "../board/BoardModel.h"
#include "../board/CellModel.h"
=======
#include "board/BoardModel.h"
#include "board/CellModel.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

class AIStrategy {
public:
    static bool findImmediateMove(
        BoardModel& board,
        Cell player,
        std::pair<int,int>& move
    );
};

#endif
