//
// Created by Pshypher on 23/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double baseSalary;
    int noOfServiceYears;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the base salary: ";
    cin >> baseSalary;
    cout << endl;

    cout << "Enter the number of years of service: ";
    cin >> noOfServiceYears;
    cout << endl;

    double bonus;
    if (noOfServiceYears <= 5)
        bonus = 10 * noOfServiceYears;
    else
        bonus = 20 * noOfServiceYears;

    double totalSales;

    cout << "Enter the total sales: ";
    cin >> totalSales;
    cout << endl;

    double additionalBonus;
    if (totalSales < 5000)
        additionalBonus = 0.0;
    else if (totalSales >= 5000 && totalSales < 10000)
        additionalBonus = totalSales * 0.03;
    else
        additionalBonus = totalSales * 0.06;

    double payCheck = baseSalary + bonus + additionalBonus;

    cout << "Total paycheck: $" << payCheck << endl;

    return 0;
}