#include <iostream>

using namespace std;

// Base class with protected member
class GrandParentTier {
protected:
    int baseValue;

public:
    void assignValue(int v) {
        baseValue = v;
    }
};

// Intermediate class inherits GrandParentTier
class ParentTier : public GrandParentTier {
public:
    void printStandardValue() const {
        cout << "[ParentTier] Direct protected value: " << baseValue << endl;
    }
};

// Lowest subclass accessing protected member across two inheritance levels
class ChildTier : public ParentTier {
public:
    void printTransformedValue() const {
        cout << "[ChildTier] Multiplied protected value (baseValue * 3): " << (baseValue * 3) << endl;
    }
};

int main() {
    ChildTier obj;

    obj.assignValue(40);
    obj.printStandardValue();
    obj.printTransformedValue();

    return 0;
}
