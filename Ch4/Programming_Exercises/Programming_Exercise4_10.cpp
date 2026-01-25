//
// Created by Pshypher on 23/01/2026.
//
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

const double PERCENT_TAXES = 0.14;
const double PERCENT_ACCESSORIES = 0.1;
const double PERCENT_SCHOOL_SUPPLY = 0.01;

int main()
{
    double rate;
    double hours;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the pay rate for an hour: ";
    cin >> rate;
    cout << endl;

    cout << "Enter the number of hours worked each week: ";
    cin >> hours;
    cout << endl;

    double grossIncome = rate * (5 * hours);
    cout << "Income before tax: " << grossIncome;
    double netIncome = grossIncome - (grossIncome * PERCENT_TAXES);
    cout << ", after tax: " << netIncome;
    cout << endl;

    double expenseOnAccessories = netIncome * PERCENT_ACCESSORIES;
    double expenseOnSchoolSupplies = netIncome * PERCENT_SCHOOL_SUPPLY;
    cout << '$' << expenseOnAccessories << " is spent on clothes and other accessories." << endl;
    cout << '$' << expenseOnSchoolSupplies << " is spent on school supplies.\n" << endl;
    double savings = netIncome - expenseOnAccessories - expenseOnSchoolSupplies;

    double expenseOnBonds;
    cout << "Enter an amount less than or equals $" << savings << " to buy bonds: ";
    cin >> expenseOnBonds;
    cout << endl;

    assert(expenseOnBonds <= savings);
    if (expenseOnBonds == 0)
        cout << "Parents spend about $" << 0.01 * savings << " buying additional savings bond for you." << endl;
    else if (expenseOnBonds <= 0.25 * savings)
        cout << "Parents spend about $" << 0.25 * expenseOnBonds + 0.01 * savings
                << " buying additional savings bond for you." << endl;
    else
        cout << "Parents spend about $" << 0.4 * expenseOnBonds + 0.02 * savings
                << " buying additional savings bond for you." << endl;

    return 0;
}