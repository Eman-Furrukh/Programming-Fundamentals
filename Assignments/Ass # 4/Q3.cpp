#include <iostream>
#include <ctime> 
#include <cstdlib>
using namespace std;

const int SIZE = 3;

// Function to display the matrix
void displayMatrix(int matrix[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Function to calculate the total/sum of all values in the matrix
int calculateTotal(int matrix[][SIZE]) {
    int total = 0;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            total += matrix[i][j];
        }
    }
    return total;
}

// Function to calculate the average of all values in the matrix
double calculateAverage(int matrix[][SIZE]) {
    int total = calculateTotal(matrix);
    return static_cast<double>(total) / (SIZE * SIZE);
}

// Function to calculate total/sum of values in a specified row
int calculateRowTotal(int matrix[][SIZE], int row) {
    int total = 0;
    for (int j = 0; j < SIZE; ++j) {
        total += matrix[row][j];
    }
    return total;
}

// Function to calculate total/sum of values in a specified column
int calculateColumnTotal(int matrix[][SIZE], int col) {
    int total = 0;
    for (int i = 0; i < SIZE; ++i) {
        total += matrix[i][col];
    }
    return total;
}

// Function to find the highest value in a specified row
int findHighestInRow(int matrix[][SIZE], int row) {
    int highest = matrix[row][0];
    for (int j = 1; j < SIZE; ++j) {
        if (matrix[row][j] > highest) {
            highest = matrix[row][j];
        }
    }
    return highest;
}

// Function to find the lowest value in a specified row
int findLowestInRow(int matrix[][SIZE], int row) {
    int lowest = matrix[row][0];
    for (int j = 1; j < SIZE; ++j) {
        if (matrix[row][j] < lowest) {
            lowest = matrix[row][j];
        }
    }
    return lowest;
}

// Function to find the transpose of the matrix
void findTranspose(int matrix[][SIZE], int transpose[][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to calculate total/sum of values in the left diagonal
int calculateLeftDiagonalTotal(int matrix[][SIZE]) {
    int total = 0;
    for (int i = 0; i < SIZE; ++i) {
        total += matrix[i][i];
    }
    return total;
}

// Function to calculate total/sum of values in the right diagonal
int calculateRightDiagonalTotal(int matrix[][SIZE]) {
    int total = 0;
    for (int i = 0; i < SIZE; ++i) {
        total += matrix[i][SIZE - 1 - i];
    }
    return total;
}

// Function to multiply the matrix with a randomly generated 3x3 matrix
void multiplyWithRandomMatrix(int matrix[][SIZE]) {
    int randomMatrix[SIZE][SIZE];
    srand(static_cast<unsigned int>(time(NULL)));

    // Generate random values for Matrix
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            randomMatrix[i][j] = rand() % 50 + 1; 
        }
    }

    // Multiply matrices
    int resultMatrix[SIZE][SIZE] = {0};
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            for (int k = 0; k < SIZE; ++k) {
                resultMatrix[i][j] += matrix[i][k] * randomMatrix[k][j];
            }
        }
    }

    // Display result
    cout << "Result of matrix multiplication with random matrix:" << endl;
    displayMatrix(resultMatrix);
}

int main() {
    int matrix[SIZE][SIZE];
    int choice;
    char continueChoice;

    // Input matrix elements
    cout << "Enter elements of the " << SIZE << "x" << SIZE << " matrix:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cout << "Enter element at position (" << i << "," << j << "): ";
            cin >> matrix[i][j];
        }
    }

    // Menu-driven loop
    do {
        // Display menu
        cout << "\nMenu:\n"
             << "1. Total of all values\n"
             << "2. Average of all values\n"
             << "3. Total of values in a specified row\n"
             << "4. Total of values in a specified column\n"
             << "5. Highest value in a specified row\n"
             << "6. Lowest value in a specified row\n"
             << "7. Transpose of the matrix\n"
             << "8. Total of values in the left diagonal\n"
             << "9. Total of values in the right diagonal\n"
             << "10. Multiply with a random matrix\n"
             << "Enter your choice (1-10): ";
        cin >> choice;

        switch (choice) {
            case 1: {
                // Total of all values
                int total = calculateTotal(matrix);
                cout << "Total of all values: " << total << endl;
                break;
            }
            case 2: {
                // Average of all values
                double average = calculateAverage(matrix);
                cout << "Average of all values: " << average << endl;
                break;
            }
            case 3: {
                // Total of values in a specified row
                int row;
                cout << "Enter row number (0-" << SIZE - 1 << "): ";
                cin >> row;
                if (row >= 0 && row < SIZE) {
                    int total = calculateRowTotal(matrix, row);
                    cout << "Total of values in row " << row << ": " << total << endl;
                } else {
                    cout << "Invalid row number!" << endl;
                }
                break;
            }
            case 4: {
                // Total of values in a specified column
                int col;
                cout << "Enter column number (0-" << SIZE - 1 << "): ";
                cin >> col;
                if (col >= 0 && col < SIZE) {
                    int total = calculateColumnTotal(matrix, col);
                    cout << "Total of values in column " << col << ": " << total << endl;
                } else {
                    cout << "Invalid column number!" << endl;
                }
                break;
            }
            case 5: {
                // Highest value in a specified row
                int row;
                cout << "Enter row number (0-" << SIZE - 1 << "): ";
                cin >> row;
                if (row >= 0 && row < SIZE) {
                    int highest = findHighestInRow(matrix, row);
                    cout << "Highest value in row " << row << ": " << highest << endl;
                } else {
                    cout << "Invalid row number!" << endl;
                }
                break;
            }
            case 6: {
                // Lowest value in a specified row
                int row;
                cout << "Enter row number (0-" << SIZE - 1 << "): ";
                cin >> row;
                if (row >= 0 && row < SIZE) {
                    int lowest = findLowestInRow(matrix, row);
                    cout << "Lowest value in row " << row << ": " << lowest << endl;
                } else {
                    cout << "Invalid row number!" << endl;
                }
                break;
            }
            case 7: {
                // Transpose of the matrix
                int transpose[SIZE][SIZE];
                findTranspose(matrix, transpose);
                cout << "Transpose of the matrix:" << endl;
                displayMatrix(transpose);
                break;
            }
            case 8: {
                // Total of values in the left diagonal
                int leftDiagonalTotal = calculateLeftDiagonalTotal(matrix);
                cout << "Total of values in the left diagonal: " << leftDiagonalTotal << endl;
                break;
            }
            case 9: {
                // Total of values in the right diagonal
                int rightDiagonalTotal = calculateRightDiagonalTotal(matrix);
                cout << "Total of values in the right diagonal: " << rightDiagonalTotal << endl;
                break;
            }
            case 10: {
                // Multiply with a random matrix
                multiplyWithRandomMatrix(matrix);
                break;
            }
            default:
                cout << "Invalid choice! Please enter a number from 1 to 10." << endl;
        }
        cout << "\nDo you want to continue? (Y/N): ";
        cin >> continueChoice;
    } while (continueChoice == 'Y' || continueChoice == 'y');

    cout << "Quit Program." << endl;

    return 0;
}

