#include "AIEngine.h"
#include "AIStrategy.h"
#include "Minimax.h"

static int depthByDifficulty(Difficulty d, int boardSize) {
    switch (d) {
        case Difficulty::EASY: return 1;
        case Difficulty::MEDIUM: return 2;
        case Difficulty::HARD: return 4;
        case Difficulty::IMPOSSIBLE:
            if (boardSize == 3) return 9;
            if (boardSize == 5) return 5;
            return 3;
    }
    return 2;
}

std::pair<int,int> AIEngine::getBestMove(
    const BoardModel& board,
    Cell ai,
    Cell human,
    Difficulty difficulty
) {
    BoardModel tempBoard = board;
    std::pair<int,int> move;

    // 1. Immediate win
    if (AIStrategy::findImmediateMove(tempBoard, ai, move))
        return move;

    // 2. Immediate block
    if (AIStrategy::findImmediateMove(tempBoard, human, move))
        return move;

    // 3. Minimax
    int bestScore = -100000;
    std::pair<int,int> bestMove{-1, -1};
    int maxDepth = depthByDifficulty(difficulty, board.getSize());

    for (int i = 0; i < board.getSize(); i++) {
        for (int j = 0; j < board.getSize(); j++) {
            if (tempBoard.getCell(i, j) == Cell::EMPTY) {
                tempBoard.setCell(i, j, ai);
                int score = Minimax::search(
                    tempBoard, ai, human,
                    0, maxDepth,
                    false,
                    -100000, 100000
                );
                tempBoard.setCell(i, j, Cell::EMPTY);

                if (score > bestScore) {
                    bestScore = score;
                    bestMove = {i, j};
                }
            }
        }
    }

    return bestMove;
}
