#include <iostream>
using namespace std;
int main()
{ int x1,y1,x2,y2,x3,y3,x4,y4;
  cout<<"Enter x1: ";
  cin>>x1;
  cout<<"Enter y1: ";
  cin>>y1;
  cout<<"Enter x2: ";
  cin>>x2;
  cout<<"Enter y2: ";
  cin>>y2; 
  cout<<"Enter x3: ";
  cin>>x3; 
  cout<<"Enter y3: ";
  cin>>y3;  
  cout<<"Enter x4: ";
  cin>>x4;
  cout<<"Enter y4: ";
  cin>>y4;
  
  ((x1 == x2 == x3 == x4)||(y1 == y2 == y3 == y4))?
  cout<<"They lie on the same line.":
  cout<<"They don't lie on the same line.";
  return 0;
}
