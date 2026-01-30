#ifndef BOARD_GENERATOR_H
#define BOARD_GENERATOR_H

#include "BoardModel.h"

class BoardGenerator {
public:
    // Factory method to create a fresh board
    static BoardModel create(int size);
};

#endif
