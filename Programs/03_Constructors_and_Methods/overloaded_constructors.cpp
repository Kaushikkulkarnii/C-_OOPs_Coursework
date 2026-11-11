#include <iostream>
#include <string>

using namespace std;

// Demonstrating constructor overloading in C++
class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Default constructor
    BankAccount() {
        accountHolder = "Default Customer";
        balance = 500.0;
        cout << "[Default Constructor] Created account for: " << accountHolder << " with initial balance $" << balance << endl;
    }

    // Single-parameter constructor
    BankAccount(string name) {
        accountHolder = name;
        balance = 1000.0;
        cout << "[Single Parameter Constructor] Created account for: " << accountHolder << " with default balance $" << balance << endl;
    }

    // Two-parameter constructor
    BankAccount(string name, double initialDeposit) {
        accountHolder = name;
        balance = initialDeposit;
        cout << "[Two Parameter Constructor] Created account for: " << accountHolder << " with deposit $" << balance << endl;
    }

    void showAccount() const {
        cout << "Holder: " << accountHolder << " | Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc1;
    BankAccount acc2("Vikram");
    BankAccount acc3("Ananya", 7500.0);

    cout << "\nAccount Summaries:" << endl;
    acc1.showAccount();
    acc2.showAccount();
    acc3.showAccount();

    return 0;
}
