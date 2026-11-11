#include <iostream>
#include <string>

using namespace std;

// Base Level: Individual details
class Individual {
protected:
    string fullName;
    int age;

public:
    void setBasicInfo(const string &name, int a) {
        fullName = name;
        age = a;
    }
};

// Second Level: Academics
class CollegeStudent : public Individual {
protected:
    string rollNo;

public:
    void setAcademicInfo(const string &roll) {
        rollNo = roll;
    }
};

// Third Level: Department Specialization
class EngineeringScholar : public CollegeStudent {
private:
    string branchName;
    float semesterGpa;

public:
    void setEngineeringDetails(const string &branch, float gpa) {
        branchName = branch;
        semesterGpa = gpa;
    }

    void displayFullProfile() const {
        cout << "=======================================" << endl;
        cout << "       ENGINEERING STUDENT PROFILE     " << endl;
        cout << "=======================================" << endl;
        cout << "Student Name:   " << fullName << endl;
        cout << "Age:            " << age << endl;
        cout << "Roll / USN:     " << rollNo << endl;
        cout << "Branch:         " << branchName << endl;
        cout << "Semester GPA:   " << semesterGpa << endl;
        cout << "=======================================" << endl;
    }
};

int main() {
    EngineeringScholar student;

    student.setBasicInfo("Karthik Sharma", 20);
    student.setAcademicInfo("CS2024-045");
    student.setEngineeringDetails("Computer Science & Engineering", 9.15f);

    student.displayFullProfile();

    return 0;
}
