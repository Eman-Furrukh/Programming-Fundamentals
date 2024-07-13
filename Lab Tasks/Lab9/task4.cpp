#include <iostream>
using namespace std;
int main()
{ int num1,num2;
  cout<<"Enter number: ";
  cin>>num1;
  cout<<"Enter number: ";
  cin>>num2;
  switch(num1==num2)
  { case 1:
      cout<<"Numbers are equal.";
      break;
    case 0:
      cout<<"They aren't equal.";
     switch(num1>num2)
     { case 0:
        cout<<"2nd number is greater.";
        break;
       case 1:
        cout<<"1st number is greater.";
        break;
      }
  }    
  return 0;
}
