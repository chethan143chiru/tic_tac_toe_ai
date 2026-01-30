#ifndef GAME_DIALOG_H
#define GAME_DIALOG_H

#include <QMessageBox>
#include "utils/Enums.h"

class GameDialog {
public:
    static void showResult(GameStatus status, Cell winner);
};

#endif
