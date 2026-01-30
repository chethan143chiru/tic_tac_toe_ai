#ifndef GAME_SETTINGS_H
#define GAME_SETTINGS_H

#include "utils/Enums.h"

class GameSettings {
private:
    int boardSize;            // 3, 5, or 7
    Cell humanSymbol;         // X or O
    Difficulty difficulty;    // EASY, MEDIUM, HARD, IMPOSSIBLE

public:
    GameSettings();

    // setters
    void setBoardSize(int size);
    void setHumanSymbol(Cell symbol);
    void setDifficulty(Difficulty diff);

    // getters
    int getBoardSize() const;
    Cell getHumanSymbol() const;
    Cell getAISymbol() const;
    Difficulty getDifficulty() const;
};

#endif
