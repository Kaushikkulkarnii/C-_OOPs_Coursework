#include <iostream>

using namespace std;

// Demonstrating call by address / pointer
void updateScore(int *scorePtr) {
    *scorePtr = 95;
    cout << "[Inside updateScore function] Value set to: " << *scorePtr << endl;
}

int main() {
    int currentScore = 50;

    cout << "[Before call] currentScore = " << currentScore << endl;
    updateScore(&currentScore);
    cout << "[After call] currentScore = " << currentScore << " (Modified via pointer)" << endl;

    return 0;
}
