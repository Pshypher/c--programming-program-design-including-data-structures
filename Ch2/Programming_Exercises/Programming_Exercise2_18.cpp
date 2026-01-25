//
// Created by Pshypher on 26/12/2025.
//
#include <iostream>
using namespace std;

const double PERCENT_TAXES = 0.14;
const double PERCENT_ACCESSORIES = 0.1;
const double PERCENT_SCHOOL_SUPPLY = 0.01;
const double RATIO_SAVINGS_BOND = 0.25;

const double AMOUNT_EXTRA_SAVINGS_BOND_ADDED = 0.50;

const int NUM_WEEKS = 5;

int main()
{
    double rate;
    double hours;
    double income;

    cout << "Enter the pay rate for an hour: ";
    cin >> rate;
    cout << endl;

    cout << "Enter the number of hours worked each week: ";
    cin >> hours;
    cout << endl;

    income = rate * (NUM_WEEKS * hours);
    cout << "Income before tax: " << income;
    income = income - (income * PERCENT_TAXES);
    cout << ", after tax: " << income;
    cout << endl;

    double expenseOnAccessories = income * PERCENT_ACCESSORIES;
    double expenseOnSchoolSupplies = income * PERCENT_SCHOOL_SUPPLY;
    cout << '$' << expenseOnAccessories << " is spent on clothes and other accessories." << endl;
    cout << '$' << expenseOnSchoolSupplies << " is spent on school supplies." << endl;
    income = income - expenseOnAccessories - expenseOnSchoolSupplies;

    double expenseOnSavingsBond = income * RATIO_SAVINGS_BOND;
    cout << '$' << expenseOnSavingsBond << " is spent on getting bonds." << endl;
    cout << "Parents spend about $" << expenseOnSavingsBond * AMOUNT_EXTRA_SAVINGS_BOND_ADDED
        << " buying additional savings bond for you." << endl;

    return 0;
}