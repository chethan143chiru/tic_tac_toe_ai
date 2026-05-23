#include "MoveValidator.h"

bool MoveValidator::isValidMove(
    const BoardModel& board,
    int row,
    int col
) {
    int n = board.getSize();

    // Check bounds
    if (row < 0 || row >= n || col < 0 || col >= n)
        return false;

    // Cell must be empty
    return board.getCell(row, col) == Cell::EMPTY;
}
