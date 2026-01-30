#ifndef CELL_BUTTON_H
#define CELL_BUTTON_H

#include <QPushButton>

class CellButton : public QPushButton {
    Q_OBJECT

public:
    CellButton(int r, int c, QWidget* parent = nullptr);

    int row() const;
    int col() const;

private:
    int m_row;
    int m_col;
};

#endif
