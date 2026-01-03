//
// Created by Pshypher on 26/12/2025.
//
#include <iostream>
using namespace std;

const double GRAVITATIONAL_CONSTANT = 6.67e-8;

int main()
{
    double mass1;
    double mass2;
    double distance;

    cout << "Enter the masses of the bodies separated by a whitespace: ";
    cin >> mass1 >> mass2;
    cout << endl;

    cout << "Enter the distance between both bodies: ";
    cin >> distance;
    cout << endl;

    cout << "Masses are: " << mass1 << "g and " << mass2 << 'g' << endl;
    cout << "Distance between both bodies: " << distance << "cm" << endl;
    cout << "Force is: " << (GRAVITATIONAL_CONSTANT * mass1 * mass2) / (distance * distance) << "dyn" << endl;

    return 0;
}