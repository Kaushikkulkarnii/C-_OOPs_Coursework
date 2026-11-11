#include <iostream>

using namespace std;

// Demonstrating call by reference using alias operator '&'
void modifyByReference(int &refVar) {
    refVar = 85;
    cout << "[Inside modifyByReference function] Value updated to: " << refVar << endl;
}

int main() {
    int marks = 40;

    cout << "[Before call] marks = " << marks << endl;
    modifyByReference(marks);
    cout << "[After call] marks = " << marks << " (Directly modified through reference)" << endl;

    return 0;
}
