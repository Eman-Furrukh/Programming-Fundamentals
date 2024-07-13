#include <iostream>
using namespace std;

int main() {
    const int rows = 6; 
	for (int i = 1; i <= rows; ++i) {
        // Print spaces
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }
        // Print asterisks in ascending order
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        // Print spaces inbetween
        for (int j = 1; j <= 2 * (rows - i); ++j) {
            cout << " ";
        }
        // Print asterisks in descending order
        if (i != rows) {
            for (int j = 1; j <= i; ++j) {
                cout << "*";
            }
        }
        cout << endl; 
    }
    return 0;
}

