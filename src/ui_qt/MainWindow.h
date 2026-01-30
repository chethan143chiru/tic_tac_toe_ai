#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>
#include "game/GameController.h"
#include "ui_qt/BoardWidget.h"

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
