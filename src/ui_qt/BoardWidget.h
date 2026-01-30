#ifndef BOARD_WIDGET_H
#define BOARD_WIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "board/BoardModel.h"
#include "ui_qt/CellButton.h"

class BoardWidget : public QWidget {
    Q_OBJECT

public:
    explicit BoardWidget(QWidget* parent = nullptr);
    void buildBoard(const BoardModel& board);
    void updateBoard(const BoardModel& board);

signals:
    void cellClicked(int row, int col);

private:
    QGridLayout* grid;
};

#endif
