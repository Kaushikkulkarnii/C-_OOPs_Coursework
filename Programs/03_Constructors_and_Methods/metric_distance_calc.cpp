#include <iostream>

using namespace std;

// Class handling distance measurements with normalized conversion
class MetricDistance {
private:
    int totalMeters;
    int remainingCentimeters;

public:
    // Parameterized constructor that automatically normalizes excess centimeters
    MetricDistance(int m, int cm) {
        totalMeters = m + (cm / 100);
        remainingCentimeters = cm % 100;
    }

    void display() const {
        cout << "Distance: " << totalMeters << " m and " 
             << remainingCentimeters << " cm" << endl;
    }
};

int main() {
    MetricDistance d1(3, 240);
    MetricDistance d2(7, 85);

    cout << "Distance 1: ";
    d1.display();

    cout << "Distance 2: ";
    d2.display();

    return 0;
}
