//
// Created by Pshypher on 22/01/2026.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    double num;
    string output;

    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    if (num < 0)
        output = " is negative";
    else if (num > 0)
        output = " is positive";
    else
        output = " is zero";

    cout << num << output << endl;

    return 0;
}