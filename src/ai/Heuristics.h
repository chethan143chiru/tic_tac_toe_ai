#ifndef HEURISTICS_H
#define HEURISTICS_H

#include "board/BoardModel.h"
#include "board/CellModel.h"

class Heuristics {
public:
    // Evaluates board position for AI
    static int evaluate(const BoardModel& board, Cell ai, Cell human);
};

#endif
