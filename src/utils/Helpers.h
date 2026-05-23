#ifndef HELPERS_H
#define HELPERS_H

#include "Enums.h"

// Utility conversions (for console / debug / logs)
inline char cellToChar(Cell cell) {
    switch (cell) {
        case Cell::X:     return 'X';
        case Cell::O:     return 'O';
        case Cell::EMPTY: return '.';
    }
    return '.';
}

inline const char* difficultyToString(Difficulty diff) {
    switch (diff) {
        case Difficulty::EASY:       return "Easy";
        case Difficulty::MEDIUM:     return "Medium";
        case Difficulty::HARD:       return "Hard";
        case Difficulty::IMPOSSIBLE: return "Impossible";
    }
    return "Unknown";
}

inline const char* gameStatusToString(GameStatus status) {
    switch (status) {
        case GameStatus::RUNNING: return "Running";
        case GameStatus::WIN:     return "Win";
        case GameStatus::DRAW:    return "Draw";
    }
    return "Unknown";
}

#endif
