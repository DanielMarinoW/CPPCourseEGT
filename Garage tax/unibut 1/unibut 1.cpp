

#include <iostream>
#include <string>
using namespace std;


double calculate() {
    const double tax = 2;
    double cost = tax;
    double hours;
    cout << "Ente hours ";
    cin >> hours;
   
    if (hours > 3) {

        hours = ceil (hours - 3);
        cout << "Ovretime" << hours;
        hours  *= 0.5;

        cost += hours;
    }
    else {
        cost = 2;
    }
    if (cost > 10) {
        cost = 10;
  }
    return cost;
}


int main()
{

     double result = calculate();

     cout <<"your stay will be "<< result;
    





    return 0;
}
