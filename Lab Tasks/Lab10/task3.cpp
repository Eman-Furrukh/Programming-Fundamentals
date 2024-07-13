#include <iostream>
using namespace std;
int main()
{
   int num, max=-99999, min=99999;
   while(num!=0)
     { 
       cout<<"Enter a number: ";
       cin>>num;
       if (num>max)
         max = num;
       else if (num<min)
         min = num;
     } 
     cout<<max<<" is the maximum.\n";  
     cout<<min<<" is the minimum.\n";
   return 0;
}
