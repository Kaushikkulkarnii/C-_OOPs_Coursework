#include <iostream>

using namespace std;

// Class encapsulating rectangle dimensions and geometric operations
class RectangleBox {
private:
    double length;
    double width;

public:
    void initDimensions(double l, double w) {
        length = l;
        width = w;
    }

    void showArea() const {
        cout << "Rectangle Area:      " << (length * width) << " sq units" << endl;
    }

    void showPerimeter() const {
        cout << "Rectangle Perimeter: " << (2 * (length + width)) << " units" << endl;
    }
};

int main() {
    RectangleBox box;
    double l, w;

    cout << "Enter rectangle dimensions (length width): ";
    cin >> l >> w;

    box.initDimensions(l, w);
    box.showArea();
    box.showPerimeter();

    return 0;
}
