#ifndef ENUMS_H
#define ENUMS_H

// Cell state on the board
enum class Cell {
    EMPTY,
    X,
    O
};

// Difficulty levels for AI
enum class Difficulty {
    EASY,
    MEDIUM,
    HARD,
    IMPOSSIBLE
};

// Overall game status
enum class GameStatus {
    RUNNING,
    WIN,
    DRAW
};

#endif
