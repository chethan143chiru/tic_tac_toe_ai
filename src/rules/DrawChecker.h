#ifndef DRAW_CHECKER_H
#define DRAW_CHECKER_H

#include "board/BoardModel.h"

class DrawChecker {
public:
    // Returns true if the game is a draw
    static bool isDraw(const BoardModel& board);
};

#endif
