//
// Created by Pshypher on 25/12/2025.
//
#include <iostream>
using namespace std;

const double VOLUME = 3.78;
const double COST_PER_LITER = 0.38;
const double PROFIT_PER_CARTON = 0.27;

int main()
{
    double liters;
    double expenditure;
    double profit;
    int numOfCartons;

    cout << "Enter the total amount of milk produced(in liters): ";
    cin >> liters;
    cout << endl;

    numOfCartons = static_cast<int>(liters / VOLUME);
    expenditure = liters * COST_PER_LITER;
    profit = numOfCartons * PROFIT_PER_CARTON;

    cout << numOfCartons << " cartons is needed to hold the milk." << endl;
    cout << '$' << expenditure << " is the cost of producing milk" << endl;
    cout << '$' << profit << " is the profit made." << endl;

    return 0;
}