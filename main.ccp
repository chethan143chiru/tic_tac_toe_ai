#include <iostream>
#include "dashboard/Dashboard.h"
#include "utils/Helpers.h"

void printBoard(const BoardModel& board) {
    int n = board.getSize();
    std::cout << "\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << " " << cellToChar(board.getCell(i, j)) << " ";
            if (j < n - 1) std::cout << "|";
        }
        std::cout << "\n";
        if (i < n - 1) {
            for (int k = 0; k < n; k++) {
                std::cout << "---";
                if (k < n - 1) std::cout << "+";
            }
            std::cout << "\n";
        }
    }
    std::cout << "\n";
}

Difficulty askDifficulty() {
    int choice;
    std::cout << "Select Difficulty:\n";
    std::cout << "0 - Easy\n";
    std::cout << "1 - Medium\n";
    std::cout << "2 - Hard\n";
    std::cout << "3 - Impossible\n";
    std::cout << "Choice: ";
    std::cin >> choice;

    switch (choice) {
        case 0: return Difficulty::EASY;
        case 1: return Difficulty::MEDIUM;
        case 2: return Difficulty::HARD;
        case 3: return Difficulty::IMPOSSIBLE;
        default: return Difficulty::MEDIUM;
    }
}

int askBoardSize() {
    int size;
    std::cout << "Choose board size (3 / 5 / 7): ";
    std::cin >> size;

    if (size != 3 && size != 5 && size != 7) {
        std::cout << "Invalid choice. Defaulting to 3.\n";
        return 3;
    }
    return size;
}

Cell askHumanSymbol() {
    char c;
    std::cout << "Choose your symbol (X / O): ";
    std::cin >> c;

    if (c == 'O' || c == 'o') return Cell::O;
    return Cell::X;
}

int main() {
    std::cout << "===== TIC TAC TOE AI (Console) =====\n";

    bool playAgain = true;

    while (playAgain) {
        Dashboard dashboard;

        int boardSize = askBoardSize();
        Cell humanSymbol = askHumanSymbol();
        Difficulty difficulty = askDifficulty();

        dashboard.chooseBoardSize(boardSize);
        dashboard.chooseHumanSymbol(humanSymbol);
        dashboard.chooseDifficulty(difficulty);

        GameController* game = dashboard.startGame();

        while (!game->isGameOver()) {
            printBoard(game->getBoard());

            int row, col;
            std::cout << "Enter your move (row col): ";
            std::cin >> row >> col;

            game->humanMove(row, col);
        }

        printBoard(game->getBoard());

        if (game->getStatus() == GameStatus::WIN) {
            if (game->getWinner() == humanSymbol)
                std::cout << "🎉 You win!\n";
            else
                std::cout << "🤖 AI wins!\n";
        } else {
            std::cout << "🤝 It's a draw.\n";
        }

        delete game;

        char choice;
        std::cout << "Play again? (y/n): ";
        std::cin >> choice;

        playAgain = (choice == 'y' || choice == 'Y');
    }

    std::cout << "Thanks for playing!\n";
    return 0;
}

