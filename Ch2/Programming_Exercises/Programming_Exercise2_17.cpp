//
// Created by Pshypher on 25/12/2025.
//
#include <iostream>
using namespace std;

const double VOLUME = 3.78;

int main()
{
    double liters;
    double costPerLiter;
    double expenditure;
    double profit;
    int numOfCartons;
    double profitPerCarton;

    cout << "Enter the total amount of milk produced(in liters): ";
    cin >> liters;
    cout << endl;

    cout << "Enter the cost of producing one liter of milk: ";
    cin >> costPerLiter;
    cout << endl;

    cout << "Enter the profit on each carton of milk: ";
    cin >> profitPerCarton;
    cout << endl;

    numOfCartons = static_cast<int>(liters / VOLUME);
    expenditure = liters * costPerLiter;
    profit = numOfCartons * profitPerCarton;

    cout << numOfCartons << " cartons is needed to hold the milk." << endl;
    cout << '$' << expenditure << " is the cost of producing milk" << endl;
    cout << '$' << profit << " is the profit made." << endl;

    return 0;
}