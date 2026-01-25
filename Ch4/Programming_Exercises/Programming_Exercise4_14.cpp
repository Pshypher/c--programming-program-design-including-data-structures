//
// Created by Pshypher on 24/01/2026.
//
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

int main()
{
    double hours;
    int fee;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the number of hours: ";
    cin >> hours;
    cout << endl;

    assert(0 <= hours && hours <= 24);

    if (0 <= hours && hours <= 3)
        fee = 5;
    else if (3 < hours && hours <= 9)
        fee = 6 * static_cast<int>(hours + 1);
    else
        fee = 60;

    cout << "Parking fee: $" << fee << endl;

    return 0;
}