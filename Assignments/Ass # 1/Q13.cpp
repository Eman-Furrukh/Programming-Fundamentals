#include <iostream>
#include <iomanip>
using namespace std;
int main() { 
  float shares,paid,price, paidcommission, selling_price,sold, soldcommission, totalcommission, profit;
  cout << fixed << showpoint << setprecision(2);
  shares = 1000;
  price = 45.50;
  paid = price * shares;
  cout<<"The amount of money Joe paid for the stock is: $"<<paid<<endl;
  paidcommission = 0.2 * paid;
  cout<<"The amount of commision Joe paid his broker is: $"<<paidcommission<<endl;
  selling_price = 56.90;
  sold = selling_price * shares;
  cout<<"The amount of money Joe sold the shares for is: $"<<sold<<endl;
  soldcommission = 0.2 * sold;
  cout<<"The amount of commision Joe paid his broker is: $"<<soldcommission<<endl;
  totalcommission = paidcommission + soldcommission;
  cout<<"The total amount of commission Joe paid is $"<<totalcommission<<endl;
  profit = sold - (paid + totalcommission);
  cout<<"Joe made a profit of $" <<profit<<endl;
  return 0;
}
