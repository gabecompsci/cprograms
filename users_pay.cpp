//this program calculates the user's pay
#include <iostream>
using namespace std;

int main()
{
    double hours, rate, pay;
    
    // get the number of hours worked
    cout << "how many hours did you work?";
    cin >> hours;
    
    // get the hourly pay rate
    cout << "What is your hourly pay rate?";
    cin >> rate;
    
    // calculate the pay
    pay = hours * rate;
    
    // display the pay
    cout << "You have earned $" << pay << endl;
    return  0;
}
