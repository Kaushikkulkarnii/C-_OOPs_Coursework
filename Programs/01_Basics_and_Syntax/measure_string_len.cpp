#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main() {
    // 1. C++ String object
    string message = "Welcome to Object Oriented Programming";
    cout << "Message: " << message << endl;
    cout << "Length using string::length(): " << message.length() << endl;
    cout << "Size using string::size():     " << message.size() << endl;

    // 2. C-Style String
    const char cstr[] = "C++ Language";
    cout << "\nC-Style String: " << cstr << endl;
    cout << "Length using strlen(): " << strlen(cstr) << endl;

    return 0;
}
