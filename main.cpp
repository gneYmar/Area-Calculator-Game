#include <iostream>     // cout, cin
#include <cstdlib>      // rand, srand, system
#include <unistd.h>     // sleep
#include <ctime>        // time
#include <conio.h>      // getch
#include <iomanip>      // setw

using namespace std;

// Game Configuration Constants
const int SCREEN_WIDTH = 50;
const int MAX_TRIALS = 5;
const int BASE_TABLE_SIZE = 5;

// Function to print a specific character N times in a line
void printLine(int n, char c) {
    for (int i = 0; i < n; ++i) {
        cout << c;
    }
    cout << "\n";
}

// Function to clear screen and print the Game Header
void printHeader(int currentTrial, int maxTrials, int level) {
    system("cls"); // Windows specific clear screen

    printLine(SCREEN_WIDTH, '-');

    cout << "| Trial: " << currentTrial << "/" << maxTrials;
    // Align level text to the right
    cout << setw(SCREEN_WIDTH - 20) << "Level: " << level << " |" << endl;

    printLine(SCREEN_WIDTH, '-');
}

// Function to print countdown before the game or round starts
void startCountdown(int seconds) {
    cout << "\n\t\tStart in ";
    for (int i = seconds; i > 0; i--) {
        cout << i << "s...";
        sleep(1);
        // Erase the previous countdown number
        cout << "\b\b\b\b\b";
    }
}

// Function to get and validate user's difficulty level
int getUserLevel() {
    int level;
    cout << "\nChoose Challenge Level [1-3]:\n";
    cout << " -1- Easy\n -2- Medium\n -3- Hard\n> ";
    cin >> level;

    // Input validation loop
    while (level > 3 || level < 1) {
        cout << "Enter a valid level [1-3]: ";
        cin >> level;
    }

    cout << "YOU CHOOSE ";
    if (level == 1) cout << "EASY";
    else if (level == 2) cout << "MEDIUM";
    else cout << "HARD";
    cout << " LEVEL :)\n";

    return level;
}

int main() {
    // Game State Variables
    int currentTrial = 0;
    int score = 0;
    int level;

    int width, length, area, userArea;
    int timeLimit;

    time_t startTime, userTimeTaken;

    // Initialize Random Seed
    srand(time(0));

    // --- Game Introduction ---
    printLine(SCREEN_WIDTH, '-');
    cout << "|\t Welcome to Area Calculator Game :)\t\t |\n";
    cout << "| Visualize the Shape and Calculate its Area.   |\n";
    printLine(SCREEN_WIDTH, '-');

    cout << "\n\nPress Any Key to start playing ...";
    getch(); // Wait for user input

    // Clear the "Press Any Key" line
    cout << "\r\t\t\t\t\t\t";

    // Get User Difficulty
    level = getUserLevel();

    // Initial Countdown
    startCountdown(3);

    // --- Main Game Loop ---
    do {
        // Calculate dimensions based on level
        width = (2 * level) + rand() % (BASE_TABLE_SIZE + (level - 1) * 2);
        length = (2 * level) + rand() % (BASE_TABLE_SIZE + (level - 1) * 2);

        // Time limit decreases as level increases (Easy=5s, Hard=3s)
        timeLimit = 6 - level;
        area = width * length;

        currentTrial++;

        // Display Header and Shape
        printHeader(currentTrial, MAX_TRIALS, level);

        // Padding for centering
        cout << "\n\n\n";

        // Draw the Rectangle
        for (int i = 0; i < length; i++) {
            cout << "\t\t"; // Left padding
            for (int j = 0; j < width; j++) {
                cout << "# ";
            }
            cout << "\n";
        }

        // Timer and Input
        startTime = time(0);
        cout << "Area = ";
        cin >> userArea;
        userTimeTaken = time(0) - startTime;

        cout << "You took " << userTimeTaken << "s to answer!....\n";

        // Check Answer
        if (userArea == area && userTimeTaken <= timeLimit) {
            score++;
            cout << "\tCorrect :)\n";
        } else if (userArea != area) {
            cout << "\tWrong :( \n";
            cout << "\tCorrect Answer was: " << area << "\n";
        } else {
            cout << "\tTimeout :|, try to be faster\n";
        }

        // Prepare for next round
        printHeader(currentTrial, MAX_TRIALS, level);
        startCountdown(3);

    } while (currentTrial < MAX_TRIALS);

    // --- Game Over Screen ---
    cout << "\n\t\tGAME OVER\n";
    cout << "\n\t\tYour Score is: " << fixed << setprecision(1) << (score * 100.0 / MAX_TRIALS) << "%\n";

    return 0;
}
