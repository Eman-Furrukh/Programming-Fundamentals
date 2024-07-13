#include <iostream>
using namespace std;

int main() {
    const int rows = 5; 
    // Loop through each row
    for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int j = 1; j <= 2 * (rows - i); ++j) {
            cout << " ";
        }
        // Print symbols 
        for (int j = 1; j <= 2 * i - 1; ++j) {
            if (j % 3 == 1) {
                cout << "-";
            } else if (j % 3 == 2) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        cout << endl; 
    }
    return 0;
}

