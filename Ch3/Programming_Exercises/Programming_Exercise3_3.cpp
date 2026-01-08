//
// Created by Pshypher on 06/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

const double POUNDS_PER_KG = 2.2;

int main()
{
    double weightKg;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter your weight in kilogram: ";
    cin >> weightKg;
    cout << endl;

    cout << "Weight in Kilogram = " << weightKg << "\nWeight in Pounds = " << weightKg * POUNDS_PER_KG << endl;

    return 0;
}