#include <iostream>

using namespace std;

// Demonstrating friend function that accepts two objects of the same class
class ScorePoint {
private:
    int points;

public:
    ScorePoint(int p = 0) {
        points = p;
    }

    // Friend function declaration
    friend int combineScores(const ScorePoint &s1, const ScorePoint &s2);
    friend void findHigherScore(const ScorePoint &s1, const ScorePoint &s2);
};

// Friend function computes total points from two private instances
int combineScores(const ScorePoint &s1, const ScorePoint &s2) {
    return s1.points + s2.points;
}

// Friend function finds the maximum score between two instances
void findHigherScore(const ScorePoint &s1, const ScorePoint &s2) {
    if (s1.points > s2.points) {
        cout << "First score (" << s1.points << ") is higher." << endl;
    } else if (s2.points > s1.points) {
        cout << "Second score (" << s2.points << ") is higher." << endl;
    } else {
        cout << "Both scores are equal (" << s1.points << ")." << endl;
    }
}

int main() {
    ScorePoint round1(45);
    ScorePoint round2(78);

    cout << "Total Combined Score: " << combineScores(round1, round2) << endl;
    findHigherScore(round1, round2);

    return 0;
}
