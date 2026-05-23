#ifndef WIN_CHECKER_H
#define WIN_CHECKER_H

<<<<<<< HEAD
#include "../board/BoardModel.h"
#include "../board/CellModel.h"
=======
#include "board/BoardModel.h"
#include "board/CellModel.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

class WinChecker {
public:
    // Returns true if the given player has won
    static bool checkWin(const BoardModel& board, Cell player);
};

#endif
