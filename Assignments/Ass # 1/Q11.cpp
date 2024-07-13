#include <iostream>
#include <iomanip>
using namespace std;
int main() { 
  const float cookies = 48, sugar = 1.5, butter = 1, flour = 2.75;
  float NoOfCookies, totalSugar, totalButter, totalFlour;
  cout<<"Enter the number of cookies you want to bake: ";
  cin>>NoOfCookies;
  totalSugar = (sugar * NoOfCookies) / cookies;
  totalButter = (butter * NoOfCookies) / cookies;
  totalFlour = (flour * NoOfCookies) / cookies;
  cout << fixed << showpoint << setprecision(2);
  cout<<"To make "<<NoOfCookies<<" cookies, you will need the following amount of each ingredient: \n";
  
  cout<<"1. "<<totalSugar<<" cups of sugar\n";
  cout<<"2. "<<totalButter<<" cups of butter\n";
  cout<<"3. "<<totalFlour<<" cups of flour\n";
  return