#include <iostream>
#include <string>

using namespace std;

// Base Class: Person details
class PersonEntity {
protected:
    string personName;

public:
    void setName(const string &name) {
        personName = name;
    }
};

// Intermediate Derived Class: Corporate Employee
class CorporateEmployee : public PersonEntity {
protected:
    int employeeCode;

public:
    void setEmpCode(int code) {
        employeeCode = code;
    }
};

// Bottom Derived Class: Project Lead
class ProjectLead : public CorporateEmployee {
private:
    string projectDomain;
    int teamStrength;

public:
    void setProjectInfo(const string &domain, int teamSize) {
        projectDomain = domain;
        teamStrength = teamSize;
    }

    void printLeadSummary() const {
        cout << "--- Project Lead Profile ---" << endl;
        cout << "Name:        " << personName << endl;
        cout << "Employee ID: " << employeeCode << endl;
        cout << "Domain:      " << projectDomain << endl;
        cout << "Team Size:   " << teamStrength << " members" << endl;
    }
};

int main() {
    ProjectLead lead;

    lead.setName("Deepak Kulkarni");
    lead.setEmpCode(804);
    lead.setProjectInfo("Cloud Infrastructure", 12);

    lead.printLeadSummary();

    return 0;
}
