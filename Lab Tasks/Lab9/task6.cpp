#include <iostream>
using namespace std;
int main()
{ int marks;
  cout<<"Enter you marks: ";
  cin>>marks;
  
  if ((marks<0) || (marks>100))
    {cout<<"You have entered invalid marks.";
     return 1;
    }
  
  if (marks >= 90)
     cout<<"A+\n";
  else if (marks >=80)
     cout<<"A\n";
  else if (marks >=70)
     cout<<"B\n";
  else if (marks >=60)
     cout<<"C\n";
  else if (marks >=50)
     cout<<"D\n";
  else
     cout<<"F\n";
  return 0;
}
