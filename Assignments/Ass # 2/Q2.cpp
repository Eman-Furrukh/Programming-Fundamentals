#include <iostream>
using namespace std;

// Function to reverse the digits of a given number
long long reverseDigits(long long number) {
    long long reversedNumber = 0;
    // First get the last digit and then append it to the reversed number variable
	// and then remove that last digit from orginal value and continue from there
    while (number > 0) {
        int digit = number % 10;       
        reversedNumber = reversedNumber * 10 + digit;  
        number /= 10;                   
    }
    return reversedNumber;
}

int main() {
    long long number;
    // User input up to 10 digits
    cout << "Enter an integer (up to 10 digits): ";
    cin >> number;
    // Check if the number is within the acceptable range otherwise exit program with error code
    if (number < 0 || number > 9999999999) {
        cout << "Error: The number is out of range. Please enter a number between 0 and 9999999999." << endl;
        return 1; 
    }
    // Call the function
    long long reversedNumber = reverseDigits(number);
    // Display result
    cout << "Reversed number: " << reversedNumber << endl;
    return 0;
}

