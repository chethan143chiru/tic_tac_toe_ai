#include "TurnManager.h"

Cell TurnManager::switchTurn(Cell current) {
    return (current == Cell::X) ? Cell::O : Cell::X;
}
