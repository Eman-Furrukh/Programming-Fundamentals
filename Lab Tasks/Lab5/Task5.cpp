#include <iostream>
using namespace std;
int main()
{  
   int price_choco, quantity,c;
   cout<<"Enter price: "<<endl;
   cin>>price_choco;
   cout<<"Enter quantity: "<<endl;
   cin>>quantity;
   c = price_choco * quantity;
   cout<<"Sale amount of chocolate is "<<c<<endl;
   cout<<"Tax is:"<<c*0.1<<endl;
   cout<<"Total sale amount of chocolate is :"<<c-(c*0.1)<<endl;
   return 0;
 }
