#include <iostream>
using namespace std;
int main()
{  int a,b;
   cout<<"Enter a number: "<<a<<endl;
   cin>>a;
   b = a;
   a=a*2;
   cout<<"double the value: "<<a<<endl;
   a=a+10;
   cout<<"adding 10 to the value: "<<a<<endl;
   a=a/2;
   cout<<"half the value: "<<a<<endl;
   a=a-b;
   cout<<"subtracting current from original: "<<a<<endl;;
   return 0;
}
