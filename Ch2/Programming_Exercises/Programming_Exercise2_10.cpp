//
// Created by Pshypher on 25/12/2025.
//
#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, num4, num5;
    int sum;
    cout << "Enter five decimal numbers separated by spaces: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    cout << endl;

    cout << "num1 = " << num1 << ", num2 = " << num2 << ", num3 = " << num3 << ", num4 = " << num4 << ", num5 = " <<
        num5 << endl;
    sum = static_cast<int>(num1 + num2 + num3 + num4 + num5);
    cout << "sum = " << sum;

    return 0;
}