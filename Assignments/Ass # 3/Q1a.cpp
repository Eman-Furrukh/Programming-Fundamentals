#include <iostream>
using namespace std;

int main() {
    const int rows = 7; 
    const int cols = 20; 
    // Loop through each row
    for (int i = 0; i < rows; ++i) {
        // Loop through each column
        for (int j = 0; j < cols; ++j) {
            // Determine whether to print '*' or '.'
            if ((i == 1 && (j >= 7 && j <= 9)) ||
                (i == 2 && ((j >= 6 && j <= 7) || (j >= 11 && j <= 12) || (j >= 15 && j <= 16))) ||
                (i == 3 && ((j >= 5 && j <= 6) || (j >= 12 && j <= 13))) ||
                (i == 4 && (j >= 6 && j <= 7)) ||
                (i == 5 && (j >= 10 && j <= 12)) ||
                (i == 6 && (j == 8))) {
                cout << "*";
            } else {
                cout << ".";
            }
        }
        cout << endl; 
    }
    return 0;
}

