#include <iostream>

using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter first number: ";
    cin >> firstNumber;

    cout << "Enter second number: ";
    cin >> secondNumber;

    int total = firstNumber + secondNumber;
    cout << "Sum of " << firstNumber << " and " << secondNumber << " = " << total << endl;

    return 0;
}
