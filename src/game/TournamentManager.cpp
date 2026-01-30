#include "TournamentManager.h"

void TournamentManager::recordWin(bool humanWon) {
    if (humanWon)
        stats.playerWins++;
    else
        stats.aiWins++;
}

void TournamentManager::recordDraw() {
    stats.draws++;
}

TournamentStats TournamentManager::getStats() const {
    return stats;
}
