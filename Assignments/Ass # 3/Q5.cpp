#include <iostream>
using namespace std;

//declaration
int perfectNumber(int num);

//main function
int main()
{
	int num, functionCall;
	cout<<"Enter an ending value: ";
	cin>>num;
	cout<<"The perfect numbers between 1 and "<<num<<" are: \n";
	functionCall = perfectNumber(num);
	return 0;
}

//finding the perfect numbers
int perfectNumber(int num)
{
	int i = 2, j = 1, sum = 0; 
	while(i <= num)
	{
		while(j <= num)
		{
			if(j < i)
			{
				if(i % j == 0)
			    	sum += j;
			}
			j++;
		}
		if(sum == i)
		    cout<<i<<endl;
		i++;
		j = 1;
		sum = 0;
	}
}
