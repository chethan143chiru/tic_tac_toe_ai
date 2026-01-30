#ifndef MOVE_VALIDATOR_H
#define MOVE_VALIDATOR_H

#include "board/BoardModel.h"

class MoveValidator {
public:
    // Checks if a move is legal
    static bool isValidMove(
        const BoardModel& board,
        int row,
        int col
    );
};

#endif
