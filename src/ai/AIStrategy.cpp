#include "AIStrategy.h"
<<<<<<< HEAD
#include "../rules/WinChecker.h"
=======
#include "rules/WinChecker.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

bool AIStrategy::findImmediateMove(
    BoardModel& board,
    Cell player,
    std::pair<int,int>& move
) {
    for (int i = 0; i < board.getSize(); i++) {
        for (int j = 0; j < board.getSize(); j++) {
            if (board.getCell(i, j) == Cell::EMPTY) {
                board.setCell(i, j, player);
                if (WinChecker::checkWin(board, player)) {
                    board.setCell(i, j, Cell::EMPTY);
                    move = {i, j};
                    return true;
                }
                board.setCell(i, j, Cell::EMPTY);
            }
        }
    }
    return false;
}
