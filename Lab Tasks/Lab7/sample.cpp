#include<iostream>
using namespace std;
//declaration
int sum(int , int );
int main()
{
int x=1;
int y=2;
int z;
z=sum(x,y);
cout<<z;

return 0;
}
int sum(int x, int y)
{
return x+y;
}
