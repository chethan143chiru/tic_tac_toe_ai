#include "GameSettings.h"

GameSettings::GameSettings()
    : boardSize(3),
      humanSymbol(Cell::X),
      difficulty(Difficulty::MEDIUM) {}

void GameSettings::setBoardSize(int size) {
    if (size == 3 || size == 5 || size == 7)
        boardSize = size;
}

void GameSettings::setHumanSymbol(Cell symbol) {
    if (symbol == Cell::X || symbol == Cell::O)
        humanSymbol = symbol;
}

void GameSettings::setDifficulty(Difficulty diff) {
    difficulty = diff;
}

int GameSettings::getBoardSize() const {
    return boardSize;
}

Cell GameSettings::getHumanSymbol() const {
    return humanSymbol;
}

Cell GameSettings::getAISymbol() const {
    return (humanSymbol == Cell::X) ? Cell::O : Cell::X;
}

Difficulty GameSettings::getDifficulty() const {
    return difficulty;
}
