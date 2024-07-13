#include <iostream>
#include <iomanip>
using namespace std;

float discountedPrice(float totalPrice);

int main()
{ float totalPrice, paid;
  cout << fixed << showpoint << setprecision(2);
     cout<<"Enter price of product: $"<<endl;
     cin>>totalPrice;
     paid = discountedPrice(totalPrice);
     cout<<"Final price is: $"<<paid;
}

float discountedPrice(float totalPrice)
{ float discount, paid;
  if (totalPrice>2000) {
        cout<<"Your egligible for discount. \n";
        discount = 0.1 * totalPrice;
        paid = totalPrice - discount;
        }
  else { 
        cout<<"You are not egligible for a discount, so you're price is $"<<totalPrice<<endl;
        }
  return paid;
}
