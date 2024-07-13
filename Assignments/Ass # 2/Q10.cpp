#include <iostream>
using namespace std;

int main() {
    char ch;
    // User Input
    cout << "Enter a character: ";
    cin >> ch;
    // Check if the character is a capital letter (A-Z)
    if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is a capital letter." << endl;
    }
    // Check if the character is a small case letter (a-z)
    else if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a small case letter." << endl;
    }
    // Check if the character is a digit (0-9)
    else if (ch >= '0' && ch <= '9') {
        cout << ch << " is a digit." << endl;
    }
    // Check if the character is a special symbol
    else {
        cout << ch << " is a special symbol." << endl;
    }
    return 0;
}

