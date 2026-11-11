#include <iostream>
#include <string>

using namespace std;

int main() {
    int rollNumber = 101;
    float cgpa = 8.85f;
    double semesterFee = 42500.75;
    char sectionGrade = 'A';
    bool isActiveStudent = true;
    string candidateName = "Aarav Sharma";

    cout << "=== Primitive Data Types Demonstration ===" << endl;
    cout << "Name (string):       " << candidateName << endl;
    cout << "Roll No (int):       " << rollNumber << endl;
    cout << "CGPA (float):        " << cgpa << endl;
    cout << "Semester Fee (double): " << semesterFee << endl;
    cout << "Grade (char):        " << sectionGrade << endl;
    cout << "Active Status (bool):" << (isActiveStudent ? "Active" : "Inactive") << endl;

    return 0;
}
