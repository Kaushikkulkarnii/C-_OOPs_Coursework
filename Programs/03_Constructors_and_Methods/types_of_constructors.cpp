#include <iostream>

using namespace std;

// Demonstrating Default, Parameterized, and Copy Constructors
class Point2D {
private:
    int xCoordinate;
    int yCoordinate;

public:
    // 1. Default Constructor
    Point2D() {
        xCoordinate = 0;
        yCoordinate = 0;
        cout << "Default constructor invoked (origin initialized)." << endl;
    }

    // 2. Parameterized Constructor
    Point2D(int x, int y) {
        xCoordinate = x;
        yCoordinate = y;
        cout << "Parameterized constructor invoked (" << xCoordinate << ", " << yCoordinate << ")." << endl;
    }

    // 3. Copy Constructor
    Point2D(const Point2D &other) {
        xCoordinate = other.xCoordinate;
        yCoordinate = other.yCoordinate;
        cout << "Copy constructor invoked (cloned point coordinates)." << endl;
    }

    void display() const {
        cout << "Coordinates: (" << xCoordinate << ", " << yCoordinate << ")" << endl;
    }
};

int main() {
    cout << "--- Creating p1 ---" << endl;
    Point2D p1;
    p1.display();

    cout << "\n--- Creating p2 ---" << endl;
    Point2D p2(15, 25);
    p2.display();

    cout << "\n--- Creating p3 (copy of p2) ---" << endl;
    Point2D p3 = p2;
    p3.display();

    return 0;
}
