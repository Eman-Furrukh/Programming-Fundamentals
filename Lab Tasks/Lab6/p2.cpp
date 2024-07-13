#include <iostream>
using namespace std;
int main()
{ int inches, yards, feet;
  cout<<"Enter the amount of inches: ";
  cin>> inches;
  yards = inches / 36;
  feet = inches / 12;
  cout<<yards<<"yards : "<<feet<<"ft : "<<inches<<"inches\n";
  return 0;
}
