//
// Created by Pshypher on 15/02/2026.
//
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

int main()
{
    int number;

    cout << "Enter a natural number >= 2: ";
    cin >> number;
    cout << endl;

    assert(number >= 2);

    cout << fixed << showpoint << setprecision(9);

    double acc = number;
    for (int i = number; i > 1; i = i - 1)
    {
        double n = i;
        acc = (n - 1) / (n + acc);
    }

    double e = 2 + 1 / (1 + acc);
    cout << "e = " << e << endl;

    return 0;
}