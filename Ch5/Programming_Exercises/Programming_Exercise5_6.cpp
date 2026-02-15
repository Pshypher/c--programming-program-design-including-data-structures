//
// Created by Pshypher on 12/02/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, divisor = 3;
    bool isDivisible = false;
    cout << "Enter a positive integer: ";
    cin >> number;
    cout << endl;

    if (number % 2 != 0) {
        int root = static_cast<int>(sqrt(number));

        while (!isDivisible && divisor <= root)
        {
            isDivisible = number % divisor == 0;
            divisor = divisor + 2;
        }
    } else if (number != 2)
        isDivisible = true;

    if (isDivisible)
        cout << number << " is not a prime number." << endl;
    else
        cout << number << " is a prime number." << endl;

    return 0;
}