#include <iostream>
using namespace std;

int main() {
    long long seconds;
    // User input to enter number of seconds
    cout << "Enter the number of seconds: ";
    cin >> seconds;
    int days, hours, minutes, remainingSeconds;
    // Calculate days
    days = seconds / 86400;
    seconds %= 86400;
    // Calculate hours
    hours = seconds / 3600;
    seconds %= 3600;
    // Calculate minutes
    minutes = seconds / 60;
    remainingSeconds = seconds % 60;
    // Display result
    cout << "Equivalent: " << days << " days, " << hours << " hours, " << minutes << " minutes, " << remainingSeconds << " seconds" << endl;
    return 0;
}

