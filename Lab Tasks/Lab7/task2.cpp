#include <iostream>
#include <climits>
using namespace std;

//prototype
int limit(int upper, int lower);

//main function
int main()
{ int a, upper, lower;
  a = limit(upper,lower);
   return 0;
}

//side function
int limit(int upper, int lower)
{  int x, y;
   x = INT_MAX;
   cout<<"Maximum size of int is : "<<x<<endl;
   y = INT_MIN;
   cout<<"Minimum size of int is : "<<y<<endl;
   return upper,lower;
}

