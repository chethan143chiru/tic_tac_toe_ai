#ifndef REPLAY_MANAGER_H
#define REPLAY_MANAGER_H

#include "GameState.h"

class ReplayManager {
public:
    static void reset(GameState& state, Cell startingPlayer);
};

#endif
