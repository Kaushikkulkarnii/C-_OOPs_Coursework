#include <iostream>

using namespace std;

// Demonstrating call by value (copy of data is passed)
void tryModifyValue(int temp) {
    temp = 100;
    cout << "[Inside tryModifyValue] Local copy changed to: " << temp << endl;
}

int main() {
    int original = 25;

    cout << "[Before call] original = " << original << endl;
    tryModifyValue(original);
    cout << "[After call] original = " << original << " (Unchanged, passed by value)" << endl;

    return 0;
}
