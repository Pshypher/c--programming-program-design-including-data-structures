//
// Created by Pshypher on 06/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double mass;
    double density;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the mass (in grams): ";
    cin >> mass;
    cout << endl;

    cout << "Enter the density (in grams per cubic centimeters): ";
    cin >> density;
    cout << endl;

    cout << "Mass: " << mass << " grams" << endl;
    cout << "Density: " << density << " grams/cubic cm" << endl;
    cout << "Volume: " << mass / density << " cubic cm" << endl;

    return 0;
}