#include <iostream>

using namespace std;

int main() {
    double rectLength, rectBreadth;

    cout << "Enter rectangle length: ";
    cin >> rectLength;

    cout << "Enter rectangle breadth: ";
    cin >> rectBreadth;

    double area = rectLength * rectBreadth;
    cout << "Area of rectangle (" << rectLength << " x " << rectBreadth << ") = " << area << endl;

    return 0;
}
