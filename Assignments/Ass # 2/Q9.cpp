#include <iostream>
using namespace std;

int main() {
    int daysLate;
    // User input
    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;
    // Calculate fine based on the number of days late
    if (daysLate >= 1 && daysLate <= 5) {
        cout << "Fine: 50 rupees" << endl;
    } else if (daysLate >= 6 && daysLate <= 10) {
        cout << "Fine: 100 rupees" << endl;
    } else if (daysLate > 10 && daysLate <= 30) {
        cout << "Fine: 150 rupees" << endl;
    } else if (daysLate > 30) {
        cout << "Your membership is cancelled. Please contact the library." << endl;
    } else {
        cout << "No fine." << endl;
    }
    return 0;
}

