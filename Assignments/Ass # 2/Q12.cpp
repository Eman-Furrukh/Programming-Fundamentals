#include <iostream>
using namespace std;

int main() {
    double hardness, carbonContent, tensileStrength;
    // User input to enter values for hardness, carbon content, and tensile strength
    cout << "Enter hardness of steel: ";
    cin >> hardness;
    cout << "Enter carbon content of steel: ";
    cin >> carbonContent;
    cout << "Enter tensile strength of steel: ";
    cin >> tensileStrength;
    // Determine the grade based on the given conditions
    int grade;
    if (hardness > 50 && carbonContent < 0.7 && tensileStrength > 5600) {
        grade = 10;
    } else if (hardness > 50 && carbonContent < 0.7) {
        grade = 9;
    } else if (carbonContent < 0.7 && tensileStrength > 5600) {
        grade = 8;
    } else if (hardness > 50 && tensileStrength > 5600) {
        grade = 7;
    } else if (hardness > 50 || carbonContent < 0.7 || tensileStrength > 5600) {
        grade = 6;
    } else {
        grade = 5;
    }
    // Output result
    cout << "Grade of the steel: " << grade << endl;

    return 0;
}

