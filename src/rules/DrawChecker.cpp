#include "DrawChecker.h"

bool DrawChecker::isDraw(const BoardModel& board) {
    // Draw means board is full and no winner
    return board.isFull();
}
