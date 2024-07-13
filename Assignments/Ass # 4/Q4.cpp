#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

// Function to compare two arrays
void compareArrays(int A[], int B[], int sizeA, int sizeB) {
    if (sizeA != sizeB) {
        cout << "Arrays are not equal" << endl;
        return;
    }
    // Check if arrays are equal
    bool isEqual = true;
    bool isSame = true;
    for (int i = 0; i < sizeA; ++i) {
        if (A[i] != B[i]) {
            isEqual = false;
            break;
        }
    }
    if (isEqual) {
        cout << "Arrays are equal" << endl;
        return;
    }
    // Check if arrays have same elements but in different order
    for (int i = 0; i < sizeA; ++i) {
        bool found = false;
        for (int j = 0; j < sizeB; ++j) {
            if (A[i] == B[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            isSame = false;
            break;
        }
    }
    if (isSame) {
        cout << "Arrays are not equal but have same elements" << endl;
    } else {
        cout << "Arrays are not equal" << endl;
    }
}

int main() {
    int A[MAX_SIZE], B[MAX_SIZE];
    int sizeA, sizeB;
    // Input array A
    cout << "Enter the size of array A: ";
    cin >> sizeA;
    cout << "Enter elements of array A:" << endl;
    for (int i = 0; i < sizeA; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> A[i];
    }
    // Input array B
    cout << "Enter the size of array B: ";
    cin >> sizeB;
    cout << "Enter elements of array B:" << endl;
    for (int i = 0; i < sizeB; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> B[i];
    }
    // Compare arrays A and B
    compareArrays(A, B, sizeA, sizeB);

    return 0;
}

