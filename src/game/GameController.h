#ifndef GAME_CONTROLLER_H
#define GAME_CONTROLLER_H

#include "GameState.h"
<<<<<<< HEAD
#include "../utils/Enums.h"
=======
#include "utils/Enums.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

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
