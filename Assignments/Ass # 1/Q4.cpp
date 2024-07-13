#include <iostream>
using namespace std;
int main() {  
    float meal_cost, x, tax, tip, total_bill;
    meal_cost = 88.67;
    tax = 0.0675 * meal_cost;
    x = tax + meal_cost;
    tip = 0.2 * x;
    total_bill = meal_cost + tax + tip;
    cout<<"The meal cost is: $"<<meal_cost<<endl;
    cout<<"The amount of tax on the meal is: $"<<tax<<endl;
    cout<<"The tip given to the waiter is: $"<<tip<<endl;
    cout<<"The total bill is: $"<<total_bill<<endl;
    return 0;
}
