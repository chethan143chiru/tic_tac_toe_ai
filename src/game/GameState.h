#ifndef GAME_STATE_H
#define GAME_STATE_H

<<<<<<< HEAD
#include "../board/BoardModel.h"
#include "../utils/Enums.h"
=======
#include "board/BoardModel.h"
#include "utils/Enums.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

class GameState {
private:
    BoardModel board;
    Cell currentPlayer;
    GameStatus status;
    Cell winner;

public:
    GameState(int boardSize, Cell startingPlayer);

    // getters
    const BoardModel& getBoard() const;
    Cell getCurrentPlayer() const;
    GameStatus getStatus() const;
    Cell getWinner() const;

    // setters
    void setCurrentPlayer(Cell player);
    void setStatus(GameStatus newStatus);
    void setWinner(Cell player);

    // board access
    BoardModel& accessBoard();
};

#endif
