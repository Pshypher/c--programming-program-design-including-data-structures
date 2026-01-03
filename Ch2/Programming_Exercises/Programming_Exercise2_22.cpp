//
// Created by Pshypher on 26/12/2025.
//
#include <iostream>
using namespace std;

const int POUNDS_PER_TON = 2205;

int main()
{
    double weight;

    cout << "Enter the amount of rice(in pounds) a bag can hold: ";
    cin >> weight;
    cout << endl;

    cout << static_cast<int>(POUNDS_PER_TON / weight) << " bag(s) is needed to store a ton of rice." << endl;

    return 0;
}