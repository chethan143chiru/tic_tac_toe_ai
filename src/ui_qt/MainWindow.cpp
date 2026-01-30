#include "MainWindow.h"
#include "ui_qt/GameDialog.h"

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
