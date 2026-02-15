//
// Created by Pshypher on 15/02/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numOfUnits;
    double rent, increase, serviceCharge;

    cout << "Enter the number of units: ";
    cin >> numOfUnits;
    cout << endl;

    cout << "Enter cost of rent for all units to become occupied: ";
    cin >> rent;
    cout << endl;

    cout << "Enter the increase per unit that results in a vacant unit: ";
    cin >> increase;
    cout << endl;

    cout << "Enter the service charge per unit: ";
    cin >> serviceCharge;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);


    int remainingUnits = numOfUnits;
    double maximumProfit = remainingUnits * rent - remainingUnits * serviceCharge;
    while (remainingUnits > 0) {
        rent = rent + increase;
        remainingUnits = remainingUnits - 1;
        double profit = remainingUnits * rent - remainingUnits * serviceCharge;
        if (profit > maximumProfit)
        {
            maximumProfit = profit;
            numOfUnits = remainingUnits;
        }
    }

    cout << numOfUnits << " units should be rented out to maximize profit." << endl;

    return 0;
}