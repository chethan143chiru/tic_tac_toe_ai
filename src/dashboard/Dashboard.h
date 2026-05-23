#ifndef DASHBOARD_H
#define DASHBOARD_H

#include "GameSettings.h"
<<<<<<< HEAD
#include "../game/GameController.h"
=======
#include "game/GameController.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

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
