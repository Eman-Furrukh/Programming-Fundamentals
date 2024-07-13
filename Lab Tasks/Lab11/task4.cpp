#include <iostream>
using namespace std;
int main()
{
   int number;
   cout<<"Enter a number: ";
   cin>>number;
   
   for (int i = 2; i <= number; i++)
   {  cout<<"*** Table of "<<i<<" ***\n";
      for (int j = 1; j < 11; j++)
      {
         cout<<i<<" * "<<j<<" = "<<i*j<<endl;
      }
      cout<<endl;
   }
   return 0;
}
