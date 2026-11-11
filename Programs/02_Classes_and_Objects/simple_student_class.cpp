#include <iostream>

using namespace std;

// Basic class demonstrating private data member and public getter/setter
class Student {
private:
    int studentId;

public:
    void setStudentId(int id) {
        studentId = id;
    }

    int getStudentId() const {
        return studentId;
    }
};

int main() {
    Student s1;
    s1.setStudentId(108);

    cout << "Assigned Student ID: " << s1.getStudentId() << endl;

    return 0;
}
