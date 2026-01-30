#ifndef MINIMAX_H
#define MINIMAX_H

#include "board/BoardModel.h"
#include "board/CellModel.h"

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
