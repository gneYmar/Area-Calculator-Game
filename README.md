# 🧮 Area Calculator Game

A simple, interactive C++ console game designed to test your mental math skills and reaction speed. The player must visualize a rectangle, calculate its area in their head, and answer before the time runs out!

---

## 🎮 Game Features

*   **3 Difficulty Levels:**
    *   **Easy:** Smaller shapes, generous time limit.
    *   **Medium:** Moderate shape size and time.
    *   **Hard:** Large shapes, strict time limits.
*   **Timed Challenges:** Race against the clock to input your answer.
*   **Score Tracking:** Get a performance percentage after 5 rounds.
*   **Simple UI:** Clean console interface with visual shape rendering.

## 🕹️ How to Play

1.  **Run** the game executable.
2.  Select a **Difficulty Level** (1, 2, or 3).
3.  A rectangle made of `#` symbols will appear on screen.
4.  **Calculate the Area** (Width × Length) quickly in your head.
5.  Type your answer and press **Enter**.
6.  Score points for correct answers within the time limit!

## 🛠️ Installation & Compilation

### Prerequisites
*   **Code::Blocks** (with MinGW compiler) or any standard C++ compiler.

### Steps to Run

1.  **Clone the repository:**

    ```bash
    git clone https://github.com/gneYmar/Area-Calculator-Game.git
    ```

2.  **Open in Code::Blocks:**
    *   Launch Code::Blocks.
    *   Go to `File` -> `Open`.
    *   Navigate to the project folder and select `Area-Calculator-Game.cbp`.

3.  **Build and Run:**
    *   Click the **Build and Run** button (or press `F9`).

## 💻 Technical Details

*   **Language:** C++
*   **IDE:** Code::Blocks
*   **Libraries Used:**
    *   `<iostream>` - Standard Input/Output
    *   `<ctime>` - Time functions for random seed & timer
    *   `<conio.h>` - Console input (platform specific)
    *   `<unistd.h>` - Sleep functions

