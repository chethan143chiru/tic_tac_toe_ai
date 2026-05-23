#ifndef BOARD_WIDGET_H
#define BOARD_WIDGET_H

#include <QWidget>
#include <QGridLayout>
<<<<<<< HEAD
#include "../board/BoardModel.h"
#include "CellButton.h"
=======
#include "board/BoardModel.h"
#include "ui_qt/CellButton.h"
>>>>>>> 3d367e3b7f4e39f291e69c37ef186f131aa6d364

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
