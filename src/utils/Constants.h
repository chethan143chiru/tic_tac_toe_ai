#ifndef CONSTANTS_H
#define CONSTANTS_H

// Evaluation scores
constexpr int WIN_SCORE        = 1000;
constexpr int LOSS_SCORE       = -1000;

// Alpha–Beta bounds
constexpr int ALPHA_INIT       = -100000;
constexpr int BETA_INIT        = 100000;

// Heuristic weights
constexpr int NEAR_WIN_SCORE   = 50;
constexpr int BLOCK_WIN_SCORE  = -60;
constexpr int STRONG_LINE      = 10;
constexpr int WEAK_LINE        = 2;

// Board limits
constexpr int MIN_BOARD_SIZE  = 3;
constexpr int MAX_BOARD_SIZE  = 7;

// Default settings
constexpr int DEFAULT_BOARD_SIZE = 3;

#endif
