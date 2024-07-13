#include <iostream>
#include <string>
using namespace std;
int main()
{  string str1, str2;
   bool x;
   cout<<"Enter a string: ";
   cin >> str1;
   getline(cin,str1);
   cout<<"Enter another string: ";
   cin >> str2;
   getline(cin,str2);
   x = str1 == str2;
   cout<<x<<endl;
   return 0;
}
