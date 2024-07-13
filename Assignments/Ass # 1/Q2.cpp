#include <iostream>
using namespace std;
int main() { 
  float max, amount, remaining;
  cout<<"The maximum credit limit is $";
  cin>>max;
  cout<<"The amount used by the customer is $";
  cin>>amount;
  remaining = max - amount;
  cout<<"The remaining credit is $"<<remaining<<endl;
  return 0;
}
