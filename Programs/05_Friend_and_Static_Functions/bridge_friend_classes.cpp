#include <iostream>

using namespace std;

// Forward declaration of BetaClass so AlphaClass can reference it in friend declaration
class BetaClass;

class AlphaClass {
private:
    int alphaVal;

public:
    AlphaClass(int val) : alphaVal(val) {}

    // Friend function bridging both AlphaClass and BetaClass
    friend int sumBothClasses(const AlphaClass &a, const BetaClass &b);
};

class BetaClass {
private:
    int betaVal;

public:
    BetaClass(int val) : betaVal(val) {}

    // Friend function bridging both AlphaClass and BetaClass
    friend int sumBothClasses(const AlphaClass &a, const BetaClass &b);
};

// Function implementation accessing private variables of both distinct classes
int sumBothClasses(const AlphaClass &a, const BetaClass &b) {
    return a.alphaVal + b.betaVal;
}

int main() {
    AlphaClass objA(35);
    BetaClass objB(65);

    int total = sumBothClasses(objA, objB);
    cout << "Sum calculated from two separate classes by shared friend function: " << total << endl;

    return 0;
}
