#include <iostream>
#include <iomanip>
using namespace std;
int main() { 
  double classA, classB, classC,ticketA,ticketB,ticketC,totalsales,x,y,z;
  cout<< fixed << showpoint << setprecision(2);
  classA = 15;
  classB = 12;
  classC = 9;
  cout<<"Tickets sold for Class A: ";
  cin>> ticketA;
  x = ticketA * classA;
  cout<<"Income from Class A is: $"<<x<<endl;
  cout<<"Tickets sold for Class B: ";
  cin>> ticketB;
  y = ticketB*classB;
  cout<<"Income from Class B is: $"<<y<<endl;
  cout<<"Tickets sold for Class C: ";
  cin>> ticketC;
  z = ticketC * classC;
  cout<<"Income from Class C is: $"<<z<<endl;
  totalsales = x + y + z;
  cout<<"The total sales generated is $"<<totalsales<<endl;
  return 0;
}
