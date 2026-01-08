//
// Created by Pshypher on 07/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double cost;
    double salary;
    double rentPerAnnum;
    double electricityBill;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the total cost of the merchandise: ";
    cin >> cost;
    cout << endl;

    cout << "Enter the salary of the employees: ";
    cin >> salary;
    cout << endl;

    cout << "Enter the yearly rent: ";
    cin >> rentPerAnnum;
    cout << endl;

    cout << "Enter the estimated electricity cost: ";
    cin >> electricityBill;
    cout << endl;

    double expenditure = (cost + salary + rentPerAnnum + electricityBill) * 1.15;

    cout << "Total markup applied: $" << expenditure * 0.1 << endl;

    return 0;
}