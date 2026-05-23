#include "Heuristics.h"

static int evaluateLine(int aiCount, int humanCount, int emptyCount, int n) {
    if (aiCount > 0 && humanCount > 0) return 0;

    if (aiCount == n - 1 && emptyCount == 1) return +50;
    if (humanCount == n - 1 && emptyCount == 1) return -60;

    if (aiCount == n - 2 && emptyCount == 2) return +10;
    if (humanCount == n - 2 && emptyCount == 2) return -15;

    if (aiCount == 1 && emptyCount == n - 1) return +2;
    if (humanCount == 1 && emptyCount == n - 1) return -2;

    return 0;
}

int Heuristics::evaluate(const BoardModel& board, Cell ai, Cell human) {
    int n = board.getSize();
    int score = 0;

    // Rows
    for (int i = 0; i < n; i++) {
        int aiCount = 0, humanCount = 0, emptyCount = 0;
        for (int j = 0; j < n; j++) {
            Cell c = board.getCell(i, j);
            if (c == ai) aiCount++;
            else if (c == human) humanCount++;
            else emptyCount++;
        }
        score += evaluateLine(aiCount, humanCount, emptyCount, n);
    }

    // Columns
    for (int j = 0; j < n; j++) {
        int aiCount = 0, humanCount = 0, emptyCount = 0;
        for (int i = 0; i < n; i++) {
            Cell c = board.getCell(i, j);
            if (c == ai) aiCount++;
            else if (c == human) humanCount++;
            else emptyCount++;
        }
        score += evaluateLine(aiCount, humanCount, emptyCount, n);
    }

    // Main diagonal
    {
        int aiCount = 0, humanCount = 0, emptyCount = 0;
        for (int i = 0; i < n; i++) {
            Cell c = board.getCell(i, i);
            if (c == ai) aiCount++;
            else if (c == human) humanCount++;
            else emptyCount++;
        }
        score += evaluateLine(aiCount, humanCount, emptyCount, n);
    }

    // Anti-diagonal
    {
        int aiCount = 0, humanCount = 0, emptyCount = 0;
        for (int i = 0; i < n; i++) {
            Cell c = board.getCell(i, n - i - 1);
            if (c == ai) aiCount++;
            else if (c == human) humanCount++;
            else emptyCount++;
        }
        score += evaluateLine(aiCount, humanCount, emptyCount, n);
    }

    return score;
}
