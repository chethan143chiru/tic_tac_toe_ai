#ifndef WIN_CHECKER_H
#define WIN_CHECKER_H

#include "board/BoardModel.h"
#include "board/CellModel.h"

class WinChecker {
public:
    // Returns true if the given player has won
    static bool checkWin(const BoardModel& board, Cell player);
};

#endif
