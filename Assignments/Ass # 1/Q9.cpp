#include <iostream>
#include <cmath>
using namespace std;
int main() { 
  int a1,a2,b,c,g,k,x,y1,y2,z;
  cout<<"Input the value of x: ";
  cin >> x;
  cout<<"Input the value of y: ";
  cin >> y2;
  cout<<"Input the value of k: ";
  cin >> k;
  cout<<"Input the value of b: ";
  cin >> b;
  cout<<"Input the value of a: ";
  cin >> a2;
  a1 = 12 * x;
  cout<< "a is "<<a1<<endl;
  z = (5*x) + (14*y2) + (6*k);
  cout<< "z is "<<z<<endl;
  y1 = pow(x,4);
  cout<< "y is "<<y1<<endl;
  g = (b+12) / (4*k);
  cout<< "g is "<<g<<endl;
  c = (pow(a2,3)) / ((pow(b,2))*(pow(k,4)));
  cout<< "c is "<<c<<endl;
  return 0;
}
