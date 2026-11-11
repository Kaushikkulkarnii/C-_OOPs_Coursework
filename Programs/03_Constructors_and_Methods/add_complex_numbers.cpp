#include <iostream>

using namespace std;

// Class representing complex numbers with addition of two objects
class ComplexNumber {
private:
    double realPart;
    double imagPart;

public:
    ComplexNumber(double r = 0.0, double i = 0.0) {
        realPart = r;
        imagPart = i;
    }

    // Member function to add another complex number object
    ComplexNumber add(const ComplexNumber &other) const {
        return ComplexNumber(realPart + other.realPart, imagPart + other.imagPart);
    }

    void print() const {
        cout << realPart;
        if (imagPart >= 0) {
            cout << " + " << imagPart << "i";
        } else {
            cout << " - " << -imagPart << "i";
        }
        cout << endl;
    }
};

int main() {
    ComplexNumber c1(4.2, 5.8);
    ComplexNumber c2(3.1, -2.4);

    cout << "First Complex Number:  ";
    c1.print();

    cout << "Second Complex Number: ";
    c2.print();

    ComplexNumber sumResult = c1.add(c2);
    cout << "Sum of Complex Numbers: ";
    sumResult.print();

    return 0;
}
