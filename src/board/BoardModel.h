#ifndef BOARD_MODEL_H
#define BOARD_MODEL_H

#include <vector>
#include "CellModel.h"

class BoardModel {
private:
    int size;   // N for NxN board
    std::vector<std::vector<Cell>> grid;

public:
    // Constructor
    explicit BoardModel(int n);

    // Board info
    int getSize() const;

    // Cell access
    Cell getCell(int row, int col) const;
    void setCell(int row, int col, Cell value);

    // State checks
    bool isFull() const;
    void reset();

    // Read-only access for AI / UI
    const std::vector<std::vector<Cell>>& getGrid() const;
};

#endif
