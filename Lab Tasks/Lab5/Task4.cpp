#include <iostream>
using namespace std;
int main()
{  int a,b,X;
   cout<<"enter a"<<endl;
   cin>>a;
   cout<<"enter b"<<endl;
   cin>>b;
   if(a==1||b==1)
   X=1;
   if(a==1||b==0)
   X=1;
   cout<<"A|B|X"<<endl;
   cout<<a<< " "<<b<< " "<<X;
   return 0;
   }
