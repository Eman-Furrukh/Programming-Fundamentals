#include <iostream>
#include <iomanip>
using namespace std;

int main() { 
  float dollars, rupee_per_dollar, euros_per_dollar;
  cout << fixed << showpoint << setprecision(2);
  cout<<"Enter amount in $USD: $";
  cin >> dollars;
  rupee_per_dollar = dollars * 170.99;
  euros_per_dollar = dollars * 0.86;
  cout<<"The conversion of $US to PKR is Rs"<<rupee_per_dollar<<endl;
  cout<<"The conversion of $US to Euros is €"<<euros_per_dollar<<endl;
  return 0