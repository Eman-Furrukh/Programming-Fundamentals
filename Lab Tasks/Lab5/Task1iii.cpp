#include <iostream>
using namespace std;
int main()
{    
     int a,b,c,d,e;
     cout << "Enter:";
     cin >> a;
     cout << "Enter:";
     cin >> b;
     c = a + b;
     d = a&&b;
     e = a||b;
     cout << "sum of " << a << "and " << b << " =" << c << endl;
     cout << "AND of " << a << "and " << b << " =" << d << endl;
     cout << "OR of " << a << "and " << b << " =" << e << endl;
     return 0;
}
