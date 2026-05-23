#ifndef MINIMAX_H
#define MINIMAX_H

<<<<<<< HEAD
#include "../board/BoardModel.h"
#include "../board/CellModel.h"
=======
#include "board/BoardModel.h"
#include "board/CellModel.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

class Minimax {
public:
    static int search(
        BoardModel& board,
        Cell ai,
        Cell human,
        int depth,
        int maxDepth,
        bool maximizing,
        int alpha,
        int beta
    );
};

#endif
