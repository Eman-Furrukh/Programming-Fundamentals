#include <iostream>
using namespace std;
int main()
{ int a;
  int b;
  int c;
  int answer;
  cout << "Enter a:";
  cin >> a;
  cout << "Enter b:";
  cin >> b;
  cout << "Enter c:";
  cin >> c;
  answer = -b+b^2-4*a*c/2;
  cout << "The answer is : " << answer << endl;
  return 0;
}
