#ifndef HEURISTICS_H
#define HEURISTICS_H

<<<<<<< HEAD
#include "../board/BoardModel.h"
#include "../board/CellModel.h"
=======
#include "board/BoardModel.h"
#include "board/CellModel.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

class Heuristics {
public:
    // Evaluates board position for AI
    static int evaluate(const BoardModel& board, Cell ai, Cell human);
};

#endif
