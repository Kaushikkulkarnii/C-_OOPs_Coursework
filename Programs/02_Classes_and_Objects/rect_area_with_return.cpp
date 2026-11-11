#include <iostream>

using namespace std;

// Class demonstrating a member function returning a computed value
class Rectangle {
private:
    double length;
    double breadth;

public:
    void setDimensions(double l, double b) {
        length = l;
        breadth = b;
    }

    // Returns the calculated area instead of printing directly
    double getArea() const {
        return length * breadth;
    }
};

int main() {
    Rectangle rect;
    double l, b;

    cout << "Enter length and breadth of rectangle: ";
    cin >> l >> b;

    rect.setDimensions(l, b);
    double computedArea = rect.getArea();

    cout << "Calculated Area (returned from getArea()): " << computedArea << endl;

    return 0;
}
