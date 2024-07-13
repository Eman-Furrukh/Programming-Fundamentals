#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{ int x;
  x = rand() % 6;
  cout<<x;
  int y;
  y = rand() % 6;
  cout<<y;
  int sum;
  sum = x + y;
  cout<< "The sum of both numbers on the dice is "<<sum<<endl;
  return 0;
}
