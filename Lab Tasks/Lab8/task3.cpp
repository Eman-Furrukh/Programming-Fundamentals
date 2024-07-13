#include <iostream>
using namespace std;
int main()
{  int x, y, z;
    cout<<"Enter value of x : "<<endl;
    cin >> x;
    cout<<"Enter value of y : "<<endl;
    cin >> y;
    cout<<"Enter value of z : "<<endl;
    cin >> z;
   
    if ((x > y) && (x > z))
         cout<<x<<" is the largest."; 
    else if ((y > x) && (y > z))
         cout<<y<<" is the largest.";
    else
         cout<<z<<" is the largest.";
         
   return 0;
}
