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
    int largest = a;
    int n = 0;
    while (a != 1)
    {
        cout << a << " ";
        if (a % 2 == 0) {
            a = a / 2;
        } else {
            a = a * 3 + 1;
        }
        k++;

        if (a > largest) {
            largest = a;
            n = k;
        }
    }
    cout << a << endl;

    cout << "k = " << k << endl;
    cout << "largest = " << largest << ", position = " << n + 1;

    return 0;
}