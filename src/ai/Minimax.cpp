#include "Minimax.h"
#include "MoveEvaluator.h"

int Minimax::search(
    BoardModel& board,
    Cell ai,
    Cell human,
    int depth,
    int maxDepth,
    bool maximizing,
    int alpha,
    int beta
) {
    int eval = MoveEvaluator::evaluateBoard(board, ai, human);

    if (depth >= maxDepth || abs(eval) >= 1000 || board.isFull())
        return eval - depth;

    int best;

    if (maximizing) {
        best = -100000;
        for (int i = 0; i < board.getSize(); i++) {
            for (int j = 0; j < board.getSize(); j++) {
                if (board.getCell(i, j) == Cell::EMPTY) {
                    board.setCell(i, j, ai);
                    best = std::max(
                        best,
                        search(board, ai, human, depth + 1, maxDepth, false, alpha, beta)
                    );
                    board.setCell(i, j, Cell::EMPTY);

                    alpha = std::max(alpha, best);
                    if (beta <= alpha) return best;
                }
            }
        }
    } else {
        best = 100000;
        for (int i = 0; i < board.getSize(); i++) {
            for (int j = 0; j < board.getSize(); j++) {
                if (board.getCell(i, j) == Cell::EMPTY) {
                    board.setCell(i, j, human);
                    best = std::min(
                        best,
                        search(board, ai, human, depth + 1, maxDepth, true, alpha, beta)
                    );
                    board.setCell(i, j, Cell::EMPTY);

                    beta = std::min(beta, best);
                    if (beta <= alpha) return best;
                }
            }
        }
    }

    return best;
}
