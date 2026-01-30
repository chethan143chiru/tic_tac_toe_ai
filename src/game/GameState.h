#ifndef GAME_STATE_H
#define GAME_STATE_H

#include "board/BoardModel.h"
#include "utils/Enums.h"

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
