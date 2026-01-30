#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "GameSettings.h"
#include "game/GameController.h"

class Dashboard {
private:
    GameSettings settings;

public:
    Dashboard();

    // configuration methods
    void chooseBoardSize(int size);
    void chooseHumanSymbol(Cell symbol);
    void chooseDifficulty(Difficulty diff);

    // final action
    GameController* startGame() const;

    // access settings (for UI display)
    GameSettings getSettings() const;
};

#endif
