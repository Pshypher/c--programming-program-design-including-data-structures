//
// Created by Pshypher on 15/02/2026.
//
#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    int n;

    cout << "Enter a non-negative integer: ";
    cin >> n;
    cout << endl;

    assert(n >= 0);

    int factorial = 1;
    for (int i = n; i >= 0; i--)
    {
        if (i == 0)
            factorial = factorial * 1;
        else
            factorial = factorial * i;
    }

    cout << "The factorial of " << n << " is " << factorial << endl;

    return 0;
}
