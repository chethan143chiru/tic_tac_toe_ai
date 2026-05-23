#include "GameDialog.h"

void GameDialog::showResult(GameStatus status, Cell winner) {
    if (status == GameStatus::WIN) {
        QString msg = (winner == Cell::X) ? "X Wins!" : "O Wins!";
        QMessageBox::information(nullptr, "Game Over", msg);
    } else if (status == GameStatus::DRAW) {
        QMessageBox::information(nullptr, "Game Over", "Draw!");
    }
}
