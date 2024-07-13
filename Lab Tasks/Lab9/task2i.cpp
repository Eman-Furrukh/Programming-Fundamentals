#include <iostream>
using namespace std;
int main()
{  int gpa;
   cout<<"Enter your GPA: ";
   cin>>gpa;
    
   switch(gpa)
   {case 4:
     cout<<"A+\n";
     break;
   case 3:
     cout<<"A\n";
     break;
   case 2:
     cout<<"B\n";
     break;
   case 1:
     cout<<"C\n";
     break;
   default:
     cout<<"Invalid.";
   }
  return 0;
}
