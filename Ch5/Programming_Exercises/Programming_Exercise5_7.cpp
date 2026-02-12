//
// Created by Pshypher on 12/02/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, copy, index = 0, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> number;
    cout << endl;

    copy = number;
    while (copy > 0)
    {
        int digit = copy % 10;
        copy = copy / 10;
        sum = sum + pow(-1, index) * digit;
        index++;
    }

    cout << "sum = " << sum << endl;
    if (sum % 11 == 0)
        cout << number << " is divisible by 11.";
    else
        cout << number << " is not divisible by 11.";

    cout << endl;

    return 0;
}