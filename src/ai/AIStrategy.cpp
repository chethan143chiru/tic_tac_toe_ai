#include "AIStrategy.h"
#include "rules/WinChecker.h"

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
