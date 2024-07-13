#include <iostream>
using namespace std;

int main() {
    char color1, color2;
    // Prompt user to enter the first letters of two primary colors
    cout << "Enter the first letter of two primary colors to mix (r, b, y): ";
    cin >> color1 >> color2;
    // Convert input characters to lowercase
    color1 = tolower(color1);
    color2 = tolower(color2);
    // Determine the resulting secondary color using switch-case
    switch(color1) {
        case 'r':
            switch(color2) {
                case 'b':
                    cout << "Purple" << endl;
                    break;
                case 'y':
                    cout << "Orange" << endl;
                    break;
                default:
                    cout << "Error: Invalid input! Please enter 'r', 'b', or 'y'." << endl;
            }
            break;
        case 'b':
            switch(color2) {
                case 'r':
                    cout << "Purple" << endl;
                    break;
                case 'y':
                    cout << "Green" << endl;
                    break;
                default:
                    cout << "Error: Invalid input! Please enter 'r', 'b', or 'y'." << endl;
            }
            break;
        case 'y':
            switch(color2) {
                case 'r':
                    cout << "Orange" << endl;
                    break;
                case 'b':
                    cout << "Green" << endl;
                    break;
                default:
                    cout << "Error: Invalid input! Please enter 'r', 'b', or 'y'." << endl;
            }
            break;
        default:
            cout << "Error: Invalid input! Please enter 'r', 'b', or 'y'." << endl;
    }
    return 0;
}

