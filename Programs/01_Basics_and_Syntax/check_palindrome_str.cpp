#include <iostream>
#include <string>

using namespace std;

// Function to verify if a given string is a palindrome
bool checkPalindrome(const string &text) {
    int start = 0;
    int end = text.length() - 1;

    while (start < end) {
        if (text[start] != text[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    string word;
    cout << "Enter a string to test: ";
    cin >> word;

    if (checkPalindrome(word)) {
        cout << "\"" << word << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << word << "\" is not a palindrome." << endl;
    }

    return 0;
}
