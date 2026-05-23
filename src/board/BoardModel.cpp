#include "BoardModel.h"
#include "../utils/Enums.h"
#include <vector>

BoardModel::BoardModel(int n) : size(n), grid(n, std::vector<Cell>(n, Cell::EMPTY)) {}

int BoardModel::getSize() const {
    return size;
}

Cell BoardModel::getCell(int row, int col) const {
    if (row < 0 || row >= size || col < 0 || col >= size)
        return Cell::EMPTY;
    return grid[row][col];
}

void BoardModel::setCell(int row, int col, Cell value) {
    if (row >= 0 && row < size && col >= 0 && col < size)
        grid[row][col] = value;
}

bool BoardModel::isFull() const {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (grid[i][j] == Cell::EMPTY)
                return false;
        }
    }
    return true;
}

void BoardModel::reset() {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            grid[i][j] = Cell::EMPTY;
        }
    }
}

const std::vector<std::vector<Cell>>& BoardModel::getGrid() const {
    return grid;
}
