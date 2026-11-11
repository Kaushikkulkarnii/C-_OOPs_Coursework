#include <iostream>
#include <string>

using namespace std;

// Demonstrating object lifecycle: constructors and destructor execution order
class LifecycleDemo {
private:
    string tag;

public:
    // Default constructor
    LifecycleDemo() {
        tag = "Generic";
        cout << "[+] Default constructor called for: " << tag << endl;
    }

    // Parameterized constructor
    LifecycleDemo(string label) {
        tag = label;
        cout << "[+] Parameterized constructor called for: " << tag << endl;
    }

    // Copy constructor
    LifecycleDemo(const LifecycleDemo &obj) {
        tag = obj.tag + "_Copy";
        cout << "[+] Copy constructor called for: " << tag << endl;
    }

    // Destructor
    ~LifecycleDemo() {
        cout << "[-] Destructor called for: " << tag << endl;
    }
};

int main() {
    cout << "Entering main scope..." << endl;
    LifecycleDemo obj1("Primary");

    {
        cout << "\nEntering inner block..." << endl;
        LifecycleDemo obj2("LocalInner");
        LifecycleDemo obj3(obj2);
        cout << "Exiting inner block..." << endl;
    }

    cout << "\nBack in main scope. Exiting main..." << endl;
    return 0;
}
