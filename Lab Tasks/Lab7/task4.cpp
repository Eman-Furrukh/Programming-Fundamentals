#include <iostream>
using namespace std;

//prototype
int timesTen(int number);

//main function
int main()
{   int number, z;
    cout<<"Enter a number";
    cin>> number;
    z = timesTen(number);
    cout<<z<<endl;
    return 0;
}

//side function
int timesTen(int number)
{    
     int b;
     b = number * 10;
     return b;
}
 

