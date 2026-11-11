#include <iostream>

using namespace std;

// Demonstrating how a static data member is shared among all class objects
class InstanceTracker {
public:
    static int activeObjectCount;

    InstanceTracker() {
        activeObjectCount++;
        cout << "Instance created! Current active count: " << activeObjectCount << endl;
    }

    ~InstanceTracker() {
        activeObjectCount--;
        cout << "Instance destroyed! Remaining active count: " << activeObjectCount << endl;
    }

    void showCount() const {
        cout << "Through object call -> Active Count: " << activeObjectCount << endl;
    }
};

// Definition of static member
int InstanceTracker::activeObjectCount = 0;

int main() {
    cout << "Initial Count: " << InstanceTracker::activeObjectCount << endl;

    InstanceTracker t1;
    InstanceTracker t2;

    t1.showCount();
    t2.showCount();

    {
        cout << "\nEntering nested scope..." << endl;
        InstanceTracker t3;
        t3.showCount();
        cout << "Leaving nested scope..." << endl;
    }

    cout << "\nAfter inner scope destruction:" << endl;
    t1.showCount();

    return 0;
}
