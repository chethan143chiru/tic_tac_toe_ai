# Tic-Tac-Toe AI 🎮  
**Console + Qt GUI | C++17 | Minimax + Heuristics | 3×3 / 5×5 / 7×7**

A fully-engineered Tic-Tac-Toe game featuring a **deterministic, unbeatable AI (99%)**, supporting **multiple board sizes**, **difficulty levels**, **replay**, and **tournament mode**.

This project is designed with **strict layered architecture** to demonstrate clean separation between **UI, game logic, rules, and AI**, making it ideal for:
- AI / DSA projects
- C++ architecture demonstrations
- Academic submissions & viva
- Portfolio & GitHub showcase

---

## ✨ Key Features

- ✅ Board sizes: **3×3, 5×5, 7×7**
- 🧠 AI with **Minimax + Alpha–Beta Pruning**
- 🎯 Difficulty levels (Easy / Medium / Hard)
- 🔁 Replay & Tournament modes
- 🖥️ **Console version**
- 🪟 **Qt GUI version**
- ❌ No cheating, no randomness, no hidden state
- ♻️ Deterministic AI (same board → same move)

---

## 🧠 Architecture Overview

The project follows a **layered, dependency-safe architecture**:


### Design Rules (Strictly Enforced)
- ❌ No AI logic in UI
- ❌ No UI logic in AI
- ❌ No global state
- ❌ No move memory
- ✅ Stateless, deterministic AI
- ✅ Rules independent of UI & AI

---

## 📂 Project Structure
tic_tac_toe_ai/
│
├── README.md                          // Submission-ready explanation
├── CMakeLists.txt                    // Build system (Qt + C++)
│
├── docs/
│   ├── Architecture.md               // Layered architecture explanation
│   ├── UML_Diagram.txt               // Class diagram (text / draw.io)
│   └── AI_Design.md                  // Minimax + heuristics explanation
│
└── src/
    │
    ├── main.cpp                      // Console playable version
    │
    ├── dashboard/
    │   ├── Dashboard.h
    │   ├── Dashboard.cpp
    │   ├── GameSettings.h
    │   └── GameSettings.cpp
    │
    ├── board/
    │   ├── CellModel.h               // enum Cell { EMPTY, X, O }
    │   ├── BoardModel.h              // NxN board
    │   ├── BoardModel.cpp
    │   ├── BoardGenerator.h
    │   └── BoardGenerator.cpp
    │
    ├── rules/
    │   ├── WinChecker.h              // works for any N
    │   ├── WinChecker.cpp
    │   ├── DrawChecker.h
    │   ├── DrawChecker.cpp
    │   ├── MoveValidator.h
    │   └── MoveValidator.cpp
    │
    ├── game/
    │   ├── GameState.h
    │   ├── GameState.cpp
    │   ├── TurnManager.h
    │   ├── TurnManager.cpp
    │   ├── ResultEvaluator.h
    │   ├── ResultEvaluator.cpp
    │   ├── ReplayManager.h           // replay & reset
    │   ├── ReplayManager.cpp
    │   ├── TournamentManager.h       // multiple games stats
    │   ├── TournamentManager.cpp
    │   ├── GameController.h          // single point of control
    │   └── GameController.cpp
    │
    ├── ai/
    │   ├── AIEngine.h                // difficulty-aware AI
    │   ├── AIEngine.cpp
    │   ├── AIStrategy.h              // hybrid strategy rules
    │   ├── AIStrategy.cpp
    │   ├── Minimax.h                 // depth-limited + alpha-beta
    │   ├── Minimax.cpp
    │   ├── Heuristics.h              // line & threat evaluation
    │   ├── Heuristics.cpp
    │   ├── MoveEvaluator.h
    │   └── MoveEvaluator.cpp
    │
    ├── ui_qt/                        // Qt GUI (NO game logic)
    │   ├── MainWindow.h
    │   ├── MainWindow.cpp
    │   ├── BoardWidget.h
    │   ├── BoardWidget.cpp
    │   ├── CellButton.h
    │   ├── CellButton.cpp
    │   ├── GameDialog.h              // win / draw dialog
    │   └── GameDialog.cpp
    │
    └── utils/
        ├── Enums.h                   // Cell, Difficulty, GameStatus
        ├── Constants.h               // scores, limits
        └── Helpers.h

(Each folder contains `.h` and `.cpp` files as audited.)

<img width="1078" height="825" alt="Screenshot 2026-01-31 at 12 01 36 PM" src="https://github.com/user-attachments/assets/1c2d6d34-b815-495a-9882-6b4fa1cd888e" />


## 🛠️ Technologies Used

- **C++17**
- **Qt 6 (Widgets)**
- **CMake**
- **Minimax Algorithm**
- **Alpha–Beta Pruning**
- **Heuristic Evaluation**

---

## ⚙️ Build & Run Instructions

### 🔹 Prerequisites

- C++ compiler supporting **C++17**
- **CMake ≥ 3.16**
- **Qt 6** (for GUI build)
- Linux / macOS / Windows

---

## 🚀 Option 1: Console Version (No Qt Required)

### Step 1: Clone the Repository
```bash
git clone https://github.com/chethan143chiru/tic_tac_toe_ai.git
cd TicTacToe-AI
