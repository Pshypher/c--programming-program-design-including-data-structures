//
// Created by Pshypher on 26/12/2025.
//
#include <iostream>
using namespace std;

const double PERCENT = 100.0;

int main()
{
    double commission;
    double percentageCommission;
    double carCost;
    double minimumAddition;
    double maximumAddition;

    cout << "Enter the salesperson's fixed commission: ";
    cin >> commission;
    cout << endl;

    cout << "Enter the % commission: ";
    cin  >> percentageCommission;
    cout << endl;

    cout << "Enter the cost of the car: ";
    cin >> carCost;
    cout << endl;

    cout << "Enter the minimum and maximum amount that can be added to the cost of the car: ";
    cin >> minimumAddition >> maximumAddition;
    cout << endl;

    double sellingPriceMinimum = carCost + minimumAddition;
    double sellingPriceMaximum = carCost + maximumAddition;
    double salesCommissionMinimum = sellingPriceMinimum * percentageCommission / PERCENT + commission;
    double salesCommissionMaximum = sellingPriceMaximum * percentageCommission / PERCENT + commission;

    cout << "Minimum selling price: $" << sellingPriceMinimum << endl;
    cout << "Maximum selling price: $" << sellingPriceMaximum << endl;
    cout << "Salesperson's commission range is between $" << salesCommissionMinimum
        << " and $" << salesCommissionMaximum;
    cout << endl;

    return 0;
}