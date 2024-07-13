#include <iostream>
#include <iomanip>
using namespace std;
int main()
{ float mass, weight;
  cout<< fixed << showpoint << setprecision(1);
  cout<< "Input your mass: ";
  cin >> mass;
  weight = mass * 9.8;
  cout<<"Your weight is "<< weight << "kg\n";
  return 0;
}
