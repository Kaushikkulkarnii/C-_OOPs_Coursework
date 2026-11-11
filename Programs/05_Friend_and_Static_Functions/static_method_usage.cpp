#include <iostream>

using namespace std;

// Demonstrating static member function accessing static data member without object instantiation
class SystemSession {
private:
    static int activeUsers;

public:
    SystemSession() {
        activeUsers++;
    }

    ~SystemSession() {
        activeUsers--;
    }

    // Static member function can be called using ClassName::functionName()
    static void displayActiveSessions() {
        cout << "Current active sessions: " << activeUsers << endl;
    }
};

// Initializing static variable
int SystemSession::activeUsers = 0;

int main() {
    cout << "--- Initial Check ---" << endl;
    SystemSession::displayActiveSessions();

    cout << "\nLogging in User 1 and User 2..." << endl;
    SystemSession *u1 = new SystemSession();
    SystemSession *u2 = new SystemSession();
    SystemSession::displayActiveSessions();

    cout << "\nLogging out User 1..." << endl;
    delete u1;
    SystemSession::displayActiveSessions();

    delete u2;
    return 0;
}
