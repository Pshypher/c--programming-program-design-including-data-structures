//
// Created by Pshypher on 26/12/2025.
//
#include <iostream>
using namespace std;

const int PENNIES_PER_QUARTER = 25;
const int PENNIES_PER_DIME = 10;
const int PENNIES_PER_NICKEL = 5;

int main()
{
    int numberOfQuarters;
    int numberOfDimes;
    int numberOfNickels;
    int totalPennies;

    cout << "Enter the number of quarters, dimes, and nickel separated by a space: ";
    cin >> numberOfQuarters >> numberOfDimes >> numberOfNickels;
    cout << endl;

     totalPennies = PENNIES_PER_QUARTER * numberOfQuarters + PENNIES_PER_DIME * numberOfDimes +
         PENNIES_PER_NICKEL * numberOfNickels;
    cout << "Total number of pennies: " << totalPennies;

    return 0;
}