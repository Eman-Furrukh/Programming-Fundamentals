#include <iostream>
using namespace std;

int main() {
    const int rows = 7; 
    for (int i = 1; i <= rows; ++i) {
        // Print spaces 
        for (int j = 1; j < i; ++j) {
            cout << " ";
        }
        // Print numbers in ascending order 
        for (int j = 1; j <= rows - i + 1; ++j) {
            cout << j;
        }
        // Print numbers in descending order 
        for (int j = rows - i; j >= 1; --j) {
            cout << j;
        }
        cout << endl; 
    }
    return 0;
}

