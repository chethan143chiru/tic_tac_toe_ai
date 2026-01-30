#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H

#include "GameState.h"
#include "utils/Enums.h"

class GameController {
private:
    GameState state;
    Cell human;
    Cell ai;
    Difficulty difficulty;

    void handleAITurn();

public:
    GameController(int boardSize, Cell humanSymbol, Difficulty diff);

    // gameplay
    void humanMove(int row, int col);

    // state queries
    bool isGameOver() const;
    const BoardModel& getBoard() const;
    Cell getWinner() const;
    GameStatus getStatus() const;
};

#endif
