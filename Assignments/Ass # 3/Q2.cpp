#include <iostream>
using namespace std;

//declaration
int reversedNumber(int number);

//main function
int main()
{
	int number, functionCall;
	cout<<"Enter a number up to ten digits: ";
	cin>>number; 
	functionCall = reversedNumber(number);
	cout<<"The reversed number is: "<<functionCall<<endl;
	return 0;
}

//function to find reversed number
int reversedNumber(int number)
{
	int remainder, reverse = 0;
	while (number != 0)
	{
		remainder = number % 10;
		reverse = remainder + (reverse * 10);
		number /= 10;
	}
	return reverse;
}
