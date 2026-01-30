#include "Dashboard.h"

Dashboard::Dashboard() : settings() {}

void Dashboard::chooseBoardSize(int size) {
    settings.setBoardSize(size);
}

void Dashboard::chooseHumanSymbol(Cell symbol) {
    settings.setHumanSymbol(symbol);
}

void Dashboard::chooseDifficulty(Difficulty diff) {
    settings.setDifficulty(diff);
}

GameController* Dashboard::startGame() const {
    return new GameController(
        settings.getBoardSize(),
        settings.getHumanSymbol(),
        settings.getDifficulty()
    );
}

GameSettings Dashboard::getSettings() const {
    return settings;
}
