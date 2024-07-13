#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n <= 1)
        return 1;
    unsigned long long fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nth term in the series
double calcTerm(double x, int n) {
    // Calculate numerator: (-1)^n * x^(2n)
    double numerator = (n % 2 == 0 ? 1 : -1) * pow(x, 2 * n);
    // Calculate denominator: (2n)!
    unsigned long long denominator = factorial(2 * n);
    return numerator / denominator;
}

// Function to sum terms from n=0 to n=a
double sumTerms(double x, int a) {
    double sum = 0.0;
    for (int n = 0; n <= a; ++n) {
        sum += calcTerm(x, n);
    }
    return sum;
}

// Function to test the custom cos(x) function against standard library function
void testFunction(double x, int a) {
    double customCos = sumTerms(x, a);
    double standardCos = cos(x);
    
    cout << "Custom cos(" << x << ") = " << customCos << endl;
    cout << "Standard cos(" << x << ") = " << standardCos << endl;
    cout << "Absolute Error: " << abs(customCos - standardCos) << endl;
}

int main() {
    // Example vallues 
    double x = 1.0; 
    int a = 5; 
    // Input Validation
    if (x < 0 || x >= 2 * M_PI) {
        cout << "Error: Input angle must be between 0 and 2p." << endl;
        return 1;
    }
    // Function call
    testFunction(x, a);
    return 0;
}

