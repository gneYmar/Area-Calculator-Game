<div align="center">

# 🧮 Area Calculator Game

<p align="center">
  <img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" />
  <img src="https://img.shields.io/badge/IDE-Code%3A%3ABlocks-2A9D8F?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Platform-Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white" />
  <img src="https://img.shields.io/badge/Status-Complete-2ecc71?style=for-the-badge" />
</p>

<p align="center">
  <strong>A simple, interactive C++ console game designed to test your mental math skills and reaction speed.</strong><br/>
  Visualize a rectangle, calculate its area in your head, and answer before the time runs out!
</p>

<p align="center">
  <a href="#-game-features">Features</a> •
  <a href="#-how-to-play">How to Play</a> •
  <a href="#-installation--compilation">Installation</a> •
  <a href="#-technical-details">Technical Details</a>
</p>

</div>

---

## 🎮 Game Features

### 🎚️ 3 Difficulty Levels

| Level | Shape Size | Time Limit |
|:---:|:---|:---|
| 🟢 **Easy** | Smaller shapes | Generous time limit |
| 🟡 **Medium** | Moderate shape size | Moderate time |
| 🔴 **Hard** | Large shapes | Strict time limit |

### ⚡ Additional Features

- **Timed Challenges** — Race against the clock to input your answer.
- **Score Tracking** — Get a performance percentage after 5 rounds.
- **Simple UI** — Clean console interface with visual shape rendering.

---

## 🕹️ How to Play
```
1.  Run      the game executable
2.  Select   a Difficulty Level  →  [1] Easy   [2] Medium   [3] Hard
3.  A rectangle made of # symbols will appear on screen
4.  Calculate  Width × Length  quickly in your head
5.  Type your answer and press  Enter
6.  Score points for correct answers within the time limit!
```

> 💡 **Tip:** The faster and more accurate you are, the higher your final performance percentage after 5 rounds!

---

## 🛠️ Installation & Compilation

### ✅ Prerequisites

- **Code::Blocks** with MinGW compiler, or any standard C++ compiler.

### 📥 Steps to Run

**Step 1 — Clone the repository**
```bash
git clone https://github.com/gneYmar/Area-Calculator-Game.git
```

**Step 2 — Open in Code::Blocks**

- Launch **Code::Blocks**.
- Go to `File` → `Open`.
- Navigate to the project folder and select `Area-Calculator-Game.cbp`.

**Step 3 — Build & Run**
```
Build & Run:  F9  (in Code::Blocks)
```

---

## 💻 Technical Details

| Detail | Info |
|:---|:---|
| **Language** | C++ |
| **IDE** | Code::Blocks |

### 📦 Libraries Used

| Library | Purpose |
|:---|:---|
| `<iostream>` | Standard Input / Output |
| `<ctime>` | Time functions for random seed & timer |
| `<conio.h>` | Console input *(platform specific)* |
| `<unistd.h>` | Sleep functions |

