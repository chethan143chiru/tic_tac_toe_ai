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
├── README.md
├── CMakeLists.txt                    
│
├── docs/
│   ├── Architecture.md
│   ├── UML_Diagram.txt              
│   └── AI_Design.md                 
│
└── src/
    │
    ├── main.cpp
    │
    ├── dashboard/
    │   ├── Dashboard.h
    │   ├── Dashboard.cpp
    │   ├── GameSettings.h
    │   └── GameSettings.cpp
    │
    ├── board/
    │   ├── CellModel.h
    │   ├── BoardModel.h             
    │   ├── BoardModel.cpp
    │   ├── BoardGenerator.h
    │   └── BoardGenerator.cpp
    │
    ├── rules/
    │   ├── WinChecker.h
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
    │   ├── ReplayManager.h          
    │   ├── ReplayManager.cpp
    │   ├── TournamentManager.h      
    │   ├── TournamentManager.cpp
    │   ├── GameController.h          
    │   └── GameController.cpp
    │
    ├── ai/
    │   ├── AIEngine.h               
    │   ├── AIEngine.cpp
    │   ├── AIStrategy.h             
    │   ├── AIStrategy.cpp
    │   ├── Minimax.h                
    │   ├── Minimax.cpp
    │   ├── Heuristics.h             
    │   ├── Heuristics.cpp
    │   ├── MoveEvaluator.h
    │   └── MoveEvaluator.cpp
    │
    ├── ui_qt/
    │   ├── MainWindow.h
    │   ├── MainWindow.cpp
    │   ├── BoardWidget.h
    │   ├── BoardWidget.cpp
    │   ├── CellButton.h
    │   ├── CellButton.cpp
    │   ├── GameDialog.h             
    │   └── GameDialog.cpp
    │
    └── utils/
        ├── Enums.h                  
        ├── Constants.h              
        └── Helpers.h

(Each folder contains `.h` and `.cpp` files as audited.)
<img width="1104" height="718" alt="Screenshot 2026-01-31 at 12 00 12 PM" src="https://github.com/user-attachments/assets/d4621893-8163-4639-8109-ea4c1fb01782" />
<img width="1078" height="570" alt="Screenshot 2026-01-31 at 12 00 41 PM" src="https://github.com/user-attachments/assets/47c3923e-61ce-457b-a804-40d5cdd7cdcf" />
<img width="1078" height="801" alt="Screenshot 2026-01-31 at 12 01 05 PM" src="https://github.com/user-attachments/assets/9a4a9602-368b-4b23-ae6c-790f83f7177a" />
<img width="1078" height="825" alt="Screenshot 2026-01-31 at 12 01 36 PM" src="https://github.com/user-attachments/assets/fb0d0a95-9aa7-45b5-aa30-3e9a0c3e8dba" />

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
