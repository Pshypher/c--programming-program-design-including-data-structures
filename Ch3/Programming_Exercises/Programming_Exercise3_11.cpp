//
// Created by Pshypher on 07/01/2026.
//
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double length;
    double width;
    double height;

    double percent;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the length of the candy bar: ";
    cin >> length;
    cout << endl;

    cout << "Enter the width of the candy bar: ";
    cin >> width;
    cout << endl;

    cout << "Enter the height of the candy bar: ";
    cin >> height;
    cout << endl;

    cout << "Enter the percent by which to reduce the size of the candy bar: ";
    cin >> percent;
    cout << endl;

    double volume = length * width * height * (1 - percent / 100);
    double area = volume / height;


    return 0;
}