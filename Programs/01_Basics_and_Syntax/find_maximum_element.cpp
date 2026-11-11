#include <iostream>
#include <vector>

using namespace std;

int main() {
    int totalElements;
    cout << "Enter the number of elements: ";
    cin >> totalElements;

    if (totalElements <= 0) {
        cout << "Invalid list size." << endl;
        return 0;
    }

    vector<int> values(totalElements);
    cout << "Enter " << totalElements << " integers: " << endl;
    for (int i = 0; i < totalElements; ++i) {
        cin >> values[i];
    }

    int maxElement = values[0];
    for (int i = 1; i < totalElements; ++i) {
        if (values[i] > maxElement) {
            maxElement = values[i];
        }
    }

    cout << "The largest value in the list is: " << maxElement << endl;

    return 0;
}
