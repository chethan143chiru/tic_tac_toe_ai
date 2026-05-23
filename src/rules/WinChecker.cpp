#include "WinChecker.h"

bool WinChecker::checkWin(const BoardModel& board, Cell player) {
    int n = board.getSize();

    // Check rows
    for (int i = 0; i < n; i++) {
        bool win = true;
        for (int j = 0; j < n; j++) {
            if (board.getCell(i, j) != player) {
                win = false;
                break;
            }
        }
        if (win) return true;
    }

    // Check columns
    for (int j = 0; j < n; j++) {
        bool win = true;
        for (int i = 0; i < n; i++) {
            if (board.getCell(i, j) != player) {
                win = false;
                break;
            }
        }
        if (win) return true;
    }

    // Check main diagonal
    bool win = true;
    for (int i = 0; i < n; i++) {
        if (board.getCell(i, i) != player) {
            win = false;
            break;
        }
    }
    if (win) return true;

    // Check anti-diagonal
    win = true;
    for (int i = 0; i < n; i++) {
        if (board.getCell(i, n - i - 1) != player) {
            win = false;
            break;
        }
    }

    return win;
}
