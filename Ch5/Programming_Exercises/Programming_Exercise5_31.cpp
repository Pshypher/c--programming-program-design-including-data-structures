//
// Created by Pshypher on 15/02/2026.
//
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

int main()
{
    int n;

    cout << "Enter an integer greater than 1: ";
    cin >> n;
    cout << endl;

    cout << fixed << showpoint << setprecision(9);

    assert(n >= 2);

    int divisor = 1;
    double e = 2.0;
    for (int i = 2; i <= n; i++)
    {
        divisor = divisor * i;
        e = e + 1.0 / divisor;
    }

    cout << "e = " << e << endl;

    return 0;
}