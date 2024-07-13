#include <iostream>
using namespace std;

int main()
{   
    int num, sum, avg;
    for(num=2,sum=0;num<=500;num++)
      { 
        if(num%2==0)
           sum=sum+num;
      }
   avg = sum/250;
   cout<<"The sum of even numbers between 0 and 500 is: "<<sum<<endl;
   cout<<"The average of even numbers between 0 and 500 is: "<<avg;
   return 0;
}
