//
// Created by Pshypher on 14/02/2026.
//
#include <iostream>

using namespace std;

int main()
{
    int x;
    int k = 0;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << endl;

    int a = x;
    while (a != 1)
    {
        cout << a << " ";
        if (a % 2 == 0) {
            a = a / 2;
        } else {
            a = a * 3 + 1;
        }
        k++;
    }
    cout << a << endl;

    cout << "k = " << k << endl;

    return 0;
}