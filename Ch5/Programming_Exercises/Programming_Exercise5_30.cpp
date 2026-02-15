//
// Created by Pshypher on 15/02/2026.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double EULERS_CONSTANT = 2.718281827;

int main()
{
    int lower, upper;
    int delta;
    double e;

    cout << "Enter two integers to represent the lower and upper limits: ";
    cin >> lower >> upper;
    cout << endl;

    cout << "Enter a value for the interval: ";
    cin >> delta;
    cout << endl;

    cout << fixed << showpoint << setprecision(9);

    for (int i = lower; i <= upper; i = i + delta)
    {
        double e = pow(1 + 1.0 / i, i);
        cout << "actual: " << e << ", expected: " << EULERS_CONSTANT << endl;
    }

    return 0;
}