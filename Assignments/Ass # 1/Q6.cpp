#include <iostream>
using namespace std;
int main() { 
  float item1,item2,item3,item4,item5,subtotal,tax,total_bill;
  item1 = 15.95;
  cout<<"First item costs $"<<item1<<endl;
  item2 = 24.95;
  cout<<"Second item costs $"<<item2<<endl;
  item3 = 6.95;
  cout<<"Third item costs $"<<item3<<endl;
  item4 = 12.95;
  cout<<"Fourth item costs $"<<item4<<endl;
  item5 = 3.95;
  cout<<"Fifth item costs $"<<item5<<endl;  
  subtotal = item1+item2+item3+item4+item5;
  cout<<"Subtotal is $"<<subtotal<<endl;
  tax = 0.07 * subtotal;
  cout<<"The sales tax is $"<<tax<<endl;
  total_bill = tax + subtotal;
  cout<<"The total bill is $"<<total_bill<<endl;
  return 0;
