#ifndef DRAW_CHECKER_H
#define DRAW_CHECKER_H

<<<<<<< HEAD
#include "../board/BoardModel.h"
=======
#include "board/BoardModel.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

class DrawChecker {
public:
    // Returns true if the game is a draw
    static bool isDraw(const BoardModel& board);
};

#endif
