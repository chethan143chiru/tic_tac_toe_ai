#include "MainWindow.h"
<<<<<<< HEAD
#include "GameDialog.h"
=======
#include "ui_qt/GameDialog.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

MainWindow::MainWindow(QWidget* parent)
    : QMainWindow(parent) {

    game = new GameController(3, Cell::X, Difficulty::HARD);

    boardWidget = new BoardWidget(this);
    boardWidget->buildBoard(game->getBoard());

    setCentralWidget(boardWidget);
    setWindowTitle("Tic Tac Toe AI");

    connect(boardWidget, &BoardWidget::cellClicked,
            this, &MainWindow::onCellClicked);
}

void MainWindow::onCellClicked(int row, int col) {
    if (game->isGameOver())
        return;

    game->humanMove(row, col);
    refreshUI();

    if (game->isGameOver()) {
        GameDialog::showResult(
            game->getStatus(),
            game->getWinner()
        );
    }
}

void MainWindow::refreshUI() {
    boardWidget->updateBoard(game->getBoard());
}
