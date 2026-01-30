#ifndef AI_ENGINE_H
#define AI_ENGINE_H

#include "board/BoardModel.h"
#include "utils/Enums.h"
#include <utility>

class AIEngine {
public:
    static std::pair<int,int> getBestMove(
        const BoardModel& board,
        Cell ai,
        Cell human,
        Difficulty difficulty
    );
};

#endif
