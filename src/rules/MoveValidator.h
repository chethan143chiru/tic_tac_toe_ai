#ifndef MOVE_VALIDATOR_H
#define MOVE_VALIDATOR_H

<<<<<<< HEAD
#include "../board/BoardModel.h"
=======
#include "board/BoardModel.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

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
