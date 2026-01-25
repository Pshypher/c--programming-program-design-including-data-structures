//
// Created by Pshypher on 22/01/2026.
//
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter an integer between 0 - 35: ";
    cin >> number;
    cout << endl;

    if (number >= 0 && number < 10)
        cout << number << endl;
    else if (number >= 10 && number <= 35)
    {
        char ch = static_cast<char>(static_cast<int>('A') + number - 10);
        cout << ch << endl;
    }
    else
        cout << number << " out of range" << endl;

    return 0;
}