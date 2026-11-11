#include <iostream>
#include <string>

using namespace std;

// Using a static member variable to automatically generate sequential IDs
class EmployeeProfile {
private:
    int employeeId;
    string employeeName;
    static int idSequence; // Shared across all instances

public:
    EmployeeProfile(string name) {
        employeeName = name;
        employeeId = ++idSequence;
    }

    void printRecord() const {
        cout << "ID: " << employeeId << " | Name: " << employeeName << endl;
    }

    static int getTotalEmployees() {
        return idSequence;
    }
};

// Initializing the static data member outside the class definition
int EmployeeProfile::idSequence = 500;

int main() {
    cout << "Initial Employee Sequence starts at: 500\n" << endl;

    EmployeeProfile emp1("Siddharth");
    EmployeeProfile emp2("Meera");
    EmployeeProfile emp3("Rahul");

    emp1.printRecord();
    emp2.printRecord();
    emp3.printRecord();

    cout << "\nTotal registered employees so far: " 
         << (EmployeeProfile::getTotalEmployees() - 500) << endl;

    return 0;
}
