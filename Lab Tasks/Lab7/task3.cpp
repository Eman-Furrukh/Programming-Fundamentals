#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float volume(float radius);

//main function
int main()
{  float radius, x;
   cout << fixed << showpoint << setprecision(3);
   cout<<"Enter the radius of the sphere: "<<endl;
   cin>> radius;
   x = volume(radius);
   cout<<"Volume of the sphere is: "<<x<<endl;
   return 0;
}

//side function
float volume(float radius)
{  float volume, pi;
   cout << fixed << showpoint << setprecision(3);
   pi = 3.142;
   volume = (4/3) * (pow(radius,3)) * pi;
   return volume;
}


