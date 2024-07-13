#include <iostream>
using namespace std;
int main()
{
   char x = 'a';
   int i=1, j, rows;
   cout<<"Enter number of rows for the triangle: ";
   cin>>rows;
   
   while(i<=rows)
   {
      x = 'a';
      j = 1;
      
      while(j<=i)
      {
         cout<<x<<"\t";
         x++;
         j++;
      }
      cout<<endl;
      i++;
   }
   return 0;
}
