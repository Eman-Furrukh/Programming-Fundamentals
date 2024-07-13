#include <iostream>
using namespace std;

//declarations
int HCF(int, int);
int LCM(int, int);

//main function
int main()
{
	int number1, number2,lcmFunction, hcfFunction;
	cout<<"Enter two numbers: ";
	cin>>number1>>number2;
	lcmFunction = LCM(number1, number2);
	cout<<"The LCM of "<<number1<<" and "<<number2<<" is "<<lcmFunction<<endl;
	hcfFunction = HCF(number1, number2);
	cout<<"The HCF of "<<number1<<" and "<<number2<<" is "<<hcfFunction<<endl;
	return 0;
}

//finding highest common factor
int HCF(int number1, int number2)
{
	int hcf;
	if(number1>number2)
	   hcf = number1;
    else
       hcf = number2;
    while(true)
    {
    	if(((number1 % hcf)==0) && ((number2 % hcf)==0))
            break;
    	hcf -= 1;
	}
	return hcf;
}

//finding lowest common multiple
int LCM(int number1, int number2)
{
	int lcm;
	if(number1>number2)
	   lcm = number1;
    else
       lcm = number2;
    while(true)
    {
    	if(((lcm % number1)==0) && ((lcm % number2)==0))
            break;
    	lcm += 1;
	}
	return lcm;
}
