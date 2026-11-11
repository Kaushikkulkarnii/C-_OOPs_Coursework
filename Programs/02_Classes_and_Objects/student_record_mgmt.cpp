#include <iostream>
#include <string>

using namespace std;

// Class defining student attributes and profile presentation
class StudentProfile {
private:
    string studentName;
    int rollNumber;
    float totalMarks;

public:
    void populate(const string &name, int roll, float marks) {
        studentName = name;
        rollNumber = roll;
        totalMarks = marks;
    }

    void displayCard() const {
        cout << "==============================" << endl;
        cout << "      STUDENT REPORT CARD     " << endl;
        cout << "==============================" << endl;
        cout << "Name:       " << studentName << endl;
        cout << "Roll No:    " << rollNumber << endl;
        cout << "Marks:      " << totalMarks << endl;
        cout << "Result:     " << (totalMarks >= 40.0 ? "Passed" : "Needs Improvement") << endl;
        cout << "==============================" << endl;
    }
};

int main() {
    StudentProfile profile;
    profile.populate("Rohan Verma", 205, 87.5f);
    profile.displayCard();

    return 0;
}
