//
// Created by Pshypher on 17/03/2026.
//
#include <iostream>

using namespace std;

int gcd(int a, int b);

int main()
{
    int a, b;

    cout << "Enter two positive integers: ";
    cin >> a >> b;
    cout << endl;

    cout << "The greatest common divisor of " << a << " and " << b << " is " << gcd(a, b) << endl;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }

    return a;
}
