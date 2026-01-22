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


(Each folder contains `.h` and `.cpp` files as audited.)

---

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
