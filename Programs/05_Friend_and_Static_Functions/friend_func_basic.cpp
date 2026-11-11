#include <iostream>

using namespace std;

// Class demonstrating access to private data members via a friend function
class BankVault {
private:
    int secretCode;

public:
    BankVault(int code) {
        secretCode = code;
    }

    // Declaring external non-member function as a friend
    friend void auditVault(const BankVault &vault);
};

// Friend function definition - has access to private member 'secretCode'
void auditVault(const BankVault &vault) {
    cout << "Auditor accessed private security code: " << vault.secretCode << endl;
}

int main() {
    BankVault myVault(9482);
    auditVault(myVault);

    return 0;
}
