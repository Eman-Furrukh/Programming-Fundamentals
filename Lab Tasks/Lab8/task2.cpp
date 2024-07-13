#include <iostream>
using namespace std;
int main()
{ int x1,y1;
  cout<<"Enter x1: \n";
  cin>>x1;
  cout<<"Enter y1: \n";
  cin>>y1;
  int x2,y2;
  cout<<"Enter x2: \n";
  cin>>x2;
  cout<<"Enter y2: \n";
  cin>>y2;
  int x3,y3;
  cout<<"Enter x3: \n";
  cin>>x3;
  cout<<"Enter y3: \n";
  cin>>y3;
  int x4,y4;
  cout<<"Enter x4: \n";
  cin>>x4;
  cout<<"Enter y4: \n";
  cin>>y4;
  
  if ((x1 == x2 == x3 == x4) || (y1 == y2 == y3 == y4))
     cout<<"They lie on the same line."<<endl;
  else
     cout<<"They don't lie on the same line."<<endl; 
  return 0;
}
