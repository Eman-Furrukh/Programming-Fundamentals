#include <iostream>
using namespace std;
int main()
{
	int age = 20;
	cout << "Size of age (int) is : " << sizeof(age) << endl;
	float average = 2.2;
	cout << "Size of average (float) is :" << sizeof(average) << endl;
	char alpha = 'a';
	cout << "Size of alpha (char) is : " << sizeof(alpha) << endl;
	bool flag = 0;
	cout << "Size of flag (bool) is : " << sizeof(flag) << endl;
	return 0;
}
