#include <iostream>

using namespace std;

// Demonstrating access control in base and derived classes
class SuperBase {
public:
    int pubData;

protected:
    int protData;

private:
    int privData;

public:
    SuperBase() {
        pubData = 10;
        protData = 20;
        privData = 30;
    }

    int getPrivateData() const {
        return privData;
    }
};

class SubDerived : public SuperBase {
public:
    void printAccessibleMembers() {
        cout << "From SubDerived class:" << endl;
        cout << "  public member (pubData):       " << pubData << " [Accessible directly]" << endl;
        cout << "  protected member (protData):   " << protData << " [Accessible directly]" << endl;
        // privData cannot be accessed directly here (it is private to SuperBase)
        cout << "  private member (via getter):   " << getPrivateData() << " [Accessible only via base public method]" << endl;
    }
};

int main() {
    SubDerived derivedObj;
    derivedObj.printAccessibleMembers();

    cout << "\nFrom main function:" << endl;
    cout << "  Direct public access: derivedObj.pubData = " << derivedObj.pubData << endl;
    // derivedObj.protData is protected, so inaccessible directly in main()

    return 0;
}
