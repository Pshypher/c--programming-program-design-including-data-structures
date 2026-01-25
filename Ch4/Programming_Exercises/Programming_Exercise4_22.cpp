//
// Created by Pshypher on 25/01/2026.
//
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter a number between 1 and 1000(inclusive): ";
    cin >> number;
    cout << endl;

    // Make sure number is not one of the first 11 prime numbers 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 and 31
    bool isPrime = number == 2 || number == 3 || number == 5 || number == 7 || number == 11 ||
            number == 13 || number == 17 || number == 19 || number == 23 || number == 29 || number == 31;
    // Check to see that the number is not divisible by any of the first 11 prime numbers
    isPrime = isPrime || number % 2 != 0 && number % 3 != 0 && number % 5 != 0 && number % 7 != 0 && number % 11 != 0 &&
        number % 13 != 0 && number % 17 != 0 && number % 19 != 0 && number % 23 != 0 && number % 29 != 0
        && number % 31 != 0;

    if (!isPrime) {
        if (number % 2 == 0)
            cout << "2 >> ";
        if (number % 3 == 0)
            cout << "3 >> ";
        if (number % 5 == 0)
            cout << "5 >> ";
        if (number % 7 == 0)
            cout << "7 >> ";
        if (number % 11 == 0)
            cout << "11 >> ";
        if (number % 13 == 0)
            cout << "13 >> ";
        if (number % 17 == 0)
            cout << "17 >> ";
        if (number % 19 == 0)
            cout << "19 >> ";
        if (number % 23 == 0)
            cout << "23 >> ";
        if (number % 29 == 0)
            cout << "29 >> ";
        if (number % 31 == 0)
            cout << "31 >> ";
        cout << "divides " << number << endl;
    } else
        cout << number << " is prime." << endl;

    return 0;
}