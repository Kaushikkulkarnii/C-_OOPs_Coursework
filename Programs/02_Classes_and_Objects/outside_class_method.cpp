#include <iostream>
#include <string>

using namespace std;

// Demonstrating defining member functions outside the class using scope resolution operator (::)
class StudentRecord {
private:
    string fullName;
    int rollNumber;
    float aggregateScore;

public:
    void setInformation(string name, int roll, float score);
    void printReport() const;
};

// Definition outside the class
void StudentRecord::setInformation(string name, int roll, float score) {
    fullName = name;
    rollNumber = roll;
    aggregateScore = score;
}

void StudentRecord::printReport() const {
    cout << "--- Student Information ---" << endl;
    cout << "Full Name:       " << fullName << endl;
    cout << "Roll Number:     " << rollNumber << endl;
    cout << "Aggregate Score: " << aggregateScore << "%" << endl;
}

int main() {
    StudentRecord st;
    st.setInformation("Priya Nair", 112, 91.5f);
    st.printReport();

    return 0;
}
