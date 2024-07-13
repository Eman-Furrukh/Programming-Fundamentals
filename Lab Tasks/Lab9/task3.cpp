#include <iostream>
using namespace std;
//prototype
char choice(int a, int b);
//mainfunction. Over here I've displayed the menu, declared the numbers and called the function
int main()
{ cout<<"Menu\n";
  cout<<"+ Addition\n";
  cout<<"- Subtraction\n";
  cout<<"* Multiplication\n";
  cout<<"/ Division\n";
  cout<<". Cancel\n";
  int a,b,x;
  cout<<"Enter a number: ";
  cin>>a;
  cout<<"Enter another number: ";
  cin>>b;
  x = choice(a,b);
  cout<<x;
}
//sidefunction. from here, i've asked the user which operation they'd like to perform and given them the choices.
char choice(int a, int b)
{ char operation,choice;
  cout<<"What operation would you like to do?"<<endl;
  cin>>operation;
  switch(operation)
    {case '+':
       cout<<a+b<<endl;
       break;
     case '-': 
       cout<<a-b<<endl;
       break;            
     case '*':
       cout<<a*b<<endl;
       break;
     case '/':
       cout<<a/b<<endl;
       break;
     case '.':
       break;
    }
 return choice;
}
