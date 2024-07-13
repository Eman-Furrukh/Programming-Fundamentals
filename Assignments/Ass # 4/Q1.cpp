#include <iostream>
using namespace std;

void populateArray(int A[], int M, int B[], int N, int C[]) {
    int evenIndex = 0; 
    int oddIndex = M + N - 1; 
    
    // Traverse array A for even and odd numbers
    for (int i = 0; i < M; ++i) {
        if (A[i] % 2 == 0) {
            C[evenIndex++] = A[i]; 
        } else {
            C[oddIndex--] = A[i]; 
        }
    }

    // Traverse array B for even and odd numbers
    for (int i = 0; i < N; ++i) {
        if (B[i] % 2 == 0) {
            C[evenIndex++] = B[i]; 
        } else {
            C[oddIndex--] = B[i]; 
        }
    }
}

void printArray(int C[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << C[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[] = {3, 2, 1, 7, 6, 3};
    int M = sizeof(A) / sizeof(A[0]);
    int B[] = {9, 3, 5, 6, 2, 8, 10};
    int N = sizeof(B) / sizeof(B[0]);
    int C[M + N];
    populateArray(A, M, B, N, C);
    cout << "Array A: ";
    printArray(A, M);
    cout << "Array B: ";
    printArray(B, N);
    cout << "Array C: ";
    printArray(C, M + N);
    return 0;
}

