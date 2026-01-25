# AI Design – Tic Tac Toe (NxN)

## AI Philosophy

The AI is designed to be:
- Honest
- Deterministic
- Stateless
- Explainable

It does NOT:
- Memorize past games
- Learn from players
- Cheat by reading UI state

Every move is calculated fresh from the current board.

---

## Core Algorithm: Minimax

Minimax is a recursive decision-making algorithm for two-player, zero-sum games.

- AI tries to maximize score
- Human tries to minimize score
- Both are assumed to play optimally

---

## Why Depth Limiting Is Required

For larger boards:
- 3×3 → full Minimax is feasible
- 5×5 → branching grows rapidly
- 7×7 → full search is impractical

Solution:
- Limit search depth
- Use heuristic evaluation at cut-off depth

---

## Alpha–Beta Pruning

Alpha–Beta pruning improves Minimax by:
- Eliminating branches that cannot influence the final decision
- Reducing computation time dramatically

This allows real-time AI response even for 7×7 boards.

---

## Heuristic Evaluation

When depth limit is reached, the board is scored using heuristics.

### Heuristic Rules
- Near win for AI → strong positive score
- Near win for human → strong negative score
- Open lines are favored
- Blocked lines are ignored

This allows the AI to:
- Block threats
- Create pressure
- Avoid traps

---

## Hybrid Strategy

Before running Minimax, the AI checks:
1. Can AI win immediately?
2. Can human win next move? (block)
3. Otherwise, use Minimax

This makes the AI feel fast and intelligent.

---

## Difficulty Levels

| Difficulty | Depth | Behavior |
|-----------|-------|---------|
| Easy | 1 | Makes mistakes |
| Medium | 2 | Basic blocking |
| Hard | 4 | Strong play |
| Impossible | Dynamic | Near-unbeatable |

---

## Determinism Guarantee

- Same board → same decision
- No randomness
- No memory

This ensures fairness and reproducibility.

---

## Conclusion

The AI is:
- Transparent
- Efficient
- Scalable
- Academically sound

This design is suitable for:
- AI coursework
- Game AI demonstrations
- Portfolio projects
