#include <iostream>
using namespace std;

int main() {
    int month, day;
    // User Input to enter month and day
    cout << "Enter month (1-12): ";
    cin >> month;
    cout << "Enter day (1-31): ";
    cin >> day;
    // Determine season based on month and day
    string season;
    if ((month == 12 && day >= 16) || (month >= 1 && month <= 2) || (month == 3 && day <= 15)) {
        season = "Winter";
    } else if ((month == 3 && day >= 16) || (month >= 4 && month <= 5) || (month == 6 && day <= 15)) {
        season = "Spring";
    } else if ((month == 6 && day >= 16) || (month >= 7 && month <= 8) || (month == 9 && day <= 15)) {
        season = "Summer";
    } else if ((month == 9 && day >= 16) || (month >= 10 && month <= 11) || (month == 12 && day <= 15)) {
        season = "Fall";
    } else {
        cout << "Invalid month or day entered." << endl;
        return 1; // Exit program
    }
    // Output result
    cout << "Season: " << season << endl;
    return 0;
}

