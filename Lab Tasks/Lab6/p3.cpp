#include <iostream>
using namespace std;
int main()
{ bool a,b;
  int w,x,y,z;
  cout<<"Enter a boolean value for a: ";
  cin >> a;
  cout<<"Enter a boolean value for b: ";
  cin >> b;
  w = a||b;
  x = a&&b;
  y = !a;
  z = !b;
  cout<<"OR is "<<w<<endl;
  cout<<"AND is "<<x<<endl;
  cout<<"NOT of a is "<<y<<endl;
  cout<<"NOT of b is "<<z<<endl;
  int c,d;
  bool X;
  cout<<"Enter an integer: ";
  cin>>c;
  cout<<"Enter another integer: ";
  cin>>d;
  X = c > d;
  cout<<X<<endl;
  X = c < d;
  cout<<X<<endl;
  X = c <= d;
  cout<<X<<endl;
  X = c >= d;
  cout<<X<<endl;
  X = c == d;
  cout<<X<<endl;
  X = c != d;
  cout<<X<<endl;
  return 0;
  
}
