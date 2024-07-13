#include <iostream>
using namespace std;

int main() 
{
    int number;
    long double factorial = 1.0;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0)
        cout << "Invalid!";
    else 
      {
        for(int i = 1; i <= number; ++i) 
          {
            factorial *= i;
          }
        cout<<factorial<<" is the factorial of "<<number<<endl;    
      }
    return 0;
}
