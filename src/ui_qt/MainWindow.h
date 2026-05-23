#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
<<<<<<< HEAD
#include "../game/GameController.h"
#include "BoardWidget.h"
=======
#include "game/GameController.h"
#include "ui_qt/BoardWidget.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = nullptr);

private slots:
    void onCellClicked(int row, int col);

private:
    GameController* game;
    BoardWidget* boardWidget;

    void refreshUI();
};

#endif
