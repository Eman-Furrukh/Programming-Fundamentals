#include<iostream>
using namespace std;


int main()
{
    int d,num,n,sum=0;

    cout<<"Enter any integer: ";
    cin>>num;

    n=num;

    while(n>0)
    {
        d=n%10;
        n=n/10;
        sum=sum+d;
    }

    cout<<"\nSum of Digits of a Number "<<num<<": "<<sum<<endl;

    return 0;
}
