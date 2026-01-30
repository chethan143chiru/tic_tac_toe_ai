#ifndef TOURNAMENT_MANAGER_H
#define TOURNAMENT_MANAGER_H

struct TournamentStats {
    int playerWins = 0;
    int aiWins = 0;
    int draws = 0;
};

class TournamentManager {
private:
    TournamentStats stats;

public:
    void recordWin(bool humanWon);
    void recordDraw();
    TournamentStats getStats() const;
};

#endif
