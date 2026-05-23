#ifndef AI_ENGINE_H
#define AI_ENGINE_H

<<<<<<< HEAD
#include "../board/BoardModel.h"
#include "../utils/Enums.h"
=======
#include "board/BoardModel.h"
#include "utils/Enums.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364
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
