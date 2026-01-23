//
// Created by Pshypher on 23/01/2026.
//
#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter three numbers for the quadratic equation (ax^2+bx+c = 0): ";
    cin >> a >> b >> c;
    cout << endl;

    assert(a != 0);
    double discriminant = pow(b, 2.0) - 4 * a * c;

    if (discriminant == 0)
        cout << "The equation has a single (repeated) root, " << (-b + sqrt(discriminant)) / (2 * a) << endl;
    else if (discriminant > 0)
        cout << "The equation has two real roots, " << (-b + sqrt(discriminant)) / (2 * a) << " and "
             << (-b - sqrt(discriminant)) / (2 * a) << endl;
    else
        cout << "The equation has two complex roots." << endl;

    return 0;
}