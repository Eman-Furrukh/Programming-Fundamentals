#include <iostream>
#include <cmath>
using namespace std;

// Function to count the number of digits in a number
int getDigits(long long num) {
    int digits = 0;
    while (num != 0) {
        num /= 10;
        digits++;
    }
    return digits;
}

// Karatsuba multiplication function using loops
long long Karatsuba(long long x, long long y) {
    if (x < 10 || y < 10) {
        return x * y;
    }
    // Determine the size of the numbers
    int x_digits = getDigits(x);
    int y_digits = getDigits(y);
    int n = max(x_digits, y_digits);
    int m = n / 2;
    // Split the digit sequences in the middle
    long long high1 = x / pow(10, m);
    long long low1 = x % static_cast<int>(pow(10, m));
    long long high2 = y / pow(10, m);
    long long low2 = y % static_cast<int>(pow(10, m));
    // Use arrays to simulate the stack for iterative computation
    long long z0, z1, z2;
    bool z0_done = false, z1_done = false, z2_done = false;
    long long results[3] = {0, 0, 0};
    while (!z0_done || !z1_done || !z2_done) {
        if (!z0_done) {
            if (low1 < 10 || low2 < 10) {
                z0 = low1 * low2;
                z0_done = true;
            } else {
                // Break down z0 calculation further
                int sub_x_digits = getDigits(low1);
                int sub_y_digits = getDigits(low2);
                int sub_n = max(sub_x_digits, sub_y_digits);
                int sub_m = sub_n / 2;
                long long sub_high1 = low1 / pow(10, sub_m);
                long long sub_low1 = low1 % static_cast<int>(pow(10, sub_m));
                long long sub_high2 = low2 / pow(10, sub_m);
                long long sub_low2 = low2 % static_cast<int>(pow(10, sub_m));

                results[0] = Karatsuba(sub_low1, sub_low2);
                results[1] = Karatsuba((sub_low1 + sub_high1), (sub_low2 + sub_high2));
                results[2] = Karatsuba(sub_high1, sub_high2);

                z0 = (results[2] * pow(10, 2 * sub_m)) + ((results[1] - results[2] - results[0]) * pow(10, sub_m)) + results[0];
                z0_done = true;
            }
        }
        if (!z1_done) {
            if ((low1 + high1) < 10 || (low2 + high2) < 10) {
                z1 = (low1 + high1) * (low2 + high2);
                z1_done = true;
            } else {
                // Break down z1 calculation further
                int sub_x_digits = getDigits(low1 + high1);
                int sub_y_digits = getDigits(low2 + high2);
                int sub_n = max(sub_x_digits, sub_y_digits);
                int sub_m = sub_n / 2;
                long long sub_high1 = (low1 + high1) / pow(10, sub_m);
                long long sub_low1 = (low1 + high1) % static_cast<int>(pow(10, sub_m));
                long long sub_high2 = (low2 + high2) / pow(10, sub_m);
                long long sub_low2 = (low2 + high2) % static_cast<int>(pow(10, sub_m));

                results[0] = Karatsuba(sub_low1, sub_low2);
                results[1] = Karatsuba((sub_low1 + sub_high1), (sub_low2 + sub_high2));
                results[2] = Karatsuba(sub_high1, sub_high2);

                z1 = (results[2] * pow(10, 2 * sub_m)) + ((results[1] - results[2] - results[0]) * pow(10, sub_m)) + results[0];
                z1_done = true;
            }
        }
        if (!z2_done) {
            if (high1 < 10 || high2 < 10) {
                z2 = high1 * high2;
                z2_done = true;
            } else {
                // Break down z2 calculation further
                int sub_x_digits = getDigits(high1);
                int sub_y_digits = getDigits(high2);
                int sub_n = max(sub_x_digits, sub_y_digits);
                int sub_m = sub_n / 2;
                long long sub_high1 = high1 / pow(10, sub_m);
                long long sub_low1 = high1 % static_cast<int>(pow(10, sub_m));
                long long sub_high2 = high2 / pow(10, sub_m);
                long long sub_low2 = high2 % static_cast<int>(pow(10, sub_m));

                results[0] = Karatsuba(sub_low1, sub_low2);
                results[1] = Karatsuba((sub_low1 + sub_high1), (sub_low2 + sub_high2));
                results[2] = Karatsuba(sub_high1, sub_high2);

                z2 = (results[2] * pow(10, 2 * sub_m)) + ((results[1] - results[2] - results[0]) * pow(10, sub_m)) + results[0];
                z2_done = true;
            }
        }
    }
    // Combine the three products using the Karatsuba formula
    return (z2 * pow(10, 2 * m)) + ((z1 - z2 - z0) * pow(10, m)) + z0;
}

int main() {
    long long x, y;

    // Prompt user to enter two large integers
    cout << "Enter the first integer (5 to 9 digits, positive or negative): ";
    cin >> x;
    cout << "Enter the second integer (5 to 9 digits, positive or negative): ";
    cin >> y;

    // Input validation for the range
    if ((x < 10000 && x > -10000) || (x > 999999999 || x < -999999999)) {
        cout << "Error: The first number must be between 5 and 9 digits." << endl;
        return 1;
    }
    if ((y < 10000 && y > -10000) || (y > 999999999 || y < -999999999)) {
        cout << "Error: The second number must be between 5 and 9 digits." << endl;
        return 1;
    }

    // Call the Karatsuba function to multiply the numbers
    long long result = Karatsuba(abs(x), abs(y));

    // Adjust the sign of the result if necessary
    if ((x < 0 && y > 0) || (x > 0 && y < 0)) {
        result = -result;
    }

    // Display the result
    cout << "Multiplication result: " << result << endl;

    return 0;
}

