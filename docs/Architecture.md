# System Architecture – Tic Tac Toe AI

## Overview
This project follows a strict layered architecture to ensure:
- Fair gameplay
- Honest AI behavior
- Clean separation of concerns
- Easy scalability and maintenance

Each layer has a single responsibility and communicates only through well-defined interfaces.

---

## Layered Design

### 1. UI Layer (Qt / Console)
**Location:** `ui_qt/`, `main.cpp`

Responsibilities:
- Render the board
- Capture user input
- Display game results

Restrictions:
- ❌ No AI logic
- ❌ No rule evaluation
- ❌ No board manipulation

The UI communicates only with `GameController`.

---

### 2. Game Layer
**Location:** `game/`

Responsibilities:
- Manage turns
- Control game flow
- Handle replay and tournament logic
- Maintain current game state

Key classes:
- `GameController` (single point of control)
- `GameState`
- `TurnManager`
- `ReplayManager`
- `TournamentManager`

---

### 3. Rules Layer
**Location:** `rules/`

Responsibilities:
- Validate moves
- Detect wins
- Detect draws

Rules are pure logic:
- Stateless
- Deterministic
- Independent of UI and AI

---

### 4. AI Layer
**Location:** `ai/`

Responsibilities:
- Decide AI moves
- Evaluate board positions
- Ensure difficulty scaling

Characteristics:
- Stateless (no memory)
- Deterministic
- Fair (no cheating)

Algorithms used:
- Depth-limited Minimax
- Alpha–Beta pruning
- Heuristic evaluation

---

### 5. Board Layer
**Location:** `board/`

Responsibilities:
- Store board state
- Support dynamic NxN boards (3×3, 5×5, 7×7)

No rule or AI logic exists here.

---

### 6. Utils Layer
**Location:** `utils/`

Responsibilities:
- Shared enums
- Constants
- Helper functions

No state. No behavior that affects outcomes.

---

## Communication Flow

UI → GameController → (Rules + AI + Board)

There is no sideways or backward dependency.

---

## Architectural Guarantees

✔ No UI logic in AI  
✔ No AI logic in UI  
✔ No global state  
✔ No move memory  
✔ Same board → same AI decision  
✔ Different board → different strategy  

This architecture ensures transparency, fairness, and testability.
