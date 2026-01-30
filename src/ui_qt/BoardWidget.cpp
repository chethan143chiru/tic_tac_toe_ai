#include "BoardWidget.h"

BoardWidget::BoardWidget(QWidget* parent)
    : QWidget(parent), grid(new QGridLayout(this)) {
    setLayout(grid);
}

void BoardWidget::buildBoard(const BoardModel& board) {
    QLayoutItem* item;
    while ((item = grid->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    int n = board.getSize();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            CellButton* btn = new CellButton(i, j, this);
            grid->addWidget(btn, i, j);

            connect(btn, &QPushButton::clicked, this, [=]() {
                emit cellClicked(btn->row(), btn->col());
            });
        }
    }
}

void BoardWidget::updateBoard(const BoardModel& board) {
    int n = board.getSize();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            QWidget* w = grid->itemAtPosition(i, j)->widget();
            CellButton* btn = qobject_cast<CellButton*>(w);

            if (!btn) continue;

            Cell cell = board.getCell(i, j);
            if (cell == Cell::X) btn->setText("X");
            else if (cell == Cell::O) btn->setText("O");
            else btn->setText("");
        }
    }
}
