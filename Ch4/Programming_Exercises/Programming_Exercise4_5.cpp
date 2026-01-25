//
// Created by Pshypher on 22/01/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

const double EPSILON = 1E-6;

int main()
{
    double opposite, adjacent, hypotenuse;

    cout << "Enter the lengths of the opposite, adjacent and hypotenuse sides of a triangle: ";
    cin >> opposite >> adjacent >> hypotenuse;
    cout << endl;

    double sumOfSquares = pow(opposite, 2.0) + pow(adjacent, 2.0);
    if (fabs(sumOfSquares - pow(hypotenuse, 2.0)) < EPSILON)
        cout << "The triangle is a right triangle" << endl;
    else
        cout << "It isn't a right triangle" << endl;

    return 0;
}