#include <iostream>
using namespace std;

//declaration
bool checkPrimeNumber(int num);

//main function
int main() 
{
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    if (checkPrimeNumber(num))
        cout<<num<<" is a prime number.\n";
    else
        cout<<num<<" is not a prime number.\n";
    return 0;
}

//side function
bool checkPrimeNumber(int num) 
{
    bool isPrime = true;
    if (num == 0 || num == 1) 
      isPrime = false;
    else 
      {
        for (int i = 2; i <= num / 2; ++i) 
          {
            if (num % i == 0) 
              isPrime = false;
          }
     }
    return isPrime;
}


