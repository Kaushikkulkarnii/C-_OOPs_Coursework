#include <iostream>
#include <string>

using namespace std;

// Class demonstrating default constructor initialization
class StaffMember {
private:
    string memberName;
    int staffCode;
    string designation;

public:
    // Default constructor providing initial default values
    StaffMember() {
        memberName = "Unassigned";
        staffCode = 1000;
        designation = "Probationary";
    }

    void showDetails() const {
        cout << "Staff Member Code: " << staffCode << endl;
        cout << "Name:              " << memberName << endl;
        cout << "Designation:       " << designation << endl;
    }
};

int main() {
    StaffMember employee;
    cout << "--- Default Employee Record ---" << endl;
    employee.showDetails();

    return 0;
}
