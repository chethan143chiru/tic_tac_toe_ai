#include "CellButton.h"

CellButton::CellButton(int r, int c, QWidget* parent)
    : QPushButton(parent), m_row(r), m_col(c) {
    setFixedSize(60, 60);
    setText("");
}

int CellButton::row() const { return m_row; }
int CellButton::col() const { return m_col; }
