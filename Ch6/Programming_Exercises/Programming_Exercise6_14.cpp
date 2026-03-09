//
// Created by Pshypher on 09/03/2026.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;



double billingAmount(double hourlyRate, int minutes, char ch);

int main()
{
    double hourlyRate;
    int minutes;
    char ch;

    cout << fixed << showpoint << setprecision(2);


    cout << "Enter the hourly rate: ";
    cin >> hourlyRate;
    cout << endl;

    cout << "Enter the total consulting time: ";
    cin >> minutes;
    cout << endl;

    cout << "Does the user have (h)igh or (l)ow income?: ";
    cin >>  ch;
    cout << endl;

    double amount = billingAmount(hourlyRate, minutes, ch);

    string income = "low";
    if (ch == 'h' || ch == 'H')
        income = "high";

    cout << "Billing amount of user with " << income << " income, total consultation time of " << minutes << " mins"
        << " at an hourly rate of $" << hourlyRate << " is $" << amount;
}

double billingAmount(double hourlyRate, int minutes, char ch)
{
    double serviceCharge;
    if (ch == 'h' || ch == 'H')
    {
        if (minutes <= 20)
            serviceCharge = 0;
        else
        {
            serviceCharge = 0.7 * hourlyRate * (minutes - 20) / 60;
        }
    }
    else
    {
        if (minutes <= 30)
            serviceCharge = 0;
        else
        {
            serviceCharge = 0.4 * hourlyRate * (minutes - 30) / 60;
        }
    }

    return serviceCharge;
}