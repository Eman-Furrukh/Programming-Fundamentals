#include <iostream>
using namespace std;

//prototype
int angle(int x, int y);

//main function
int main()
{ int x, y;
  int z;
  cout<<"Enter First Angle: "<<endl;
  cin>>x;
  cout<<"Enter Second Angle: "<<endl;
  cin>>y;
  z = angle(x,y);
  cout<<"The Third Angle is :"<<z<<endl;
}

//side function
int angle(int x, int y)
{
  int a;
  a = 180 - (x + y);
  return a;
}
