#include <iostream>
using namespace std;
int main()
{
  int number=0, sum = 0;
  do 
  {  
     sum += number; 
     cout<<"Enter a number: ";
     cin>>number;
  }
  while (number >= 0);
  cout<<"The sum is "<<sum<<endl;
  return 0;
}
