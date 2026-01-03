//
// Created by Pshypher on 27/12/2025.
//
#include <iostream>
using namespace std;

const double PI = 3.1416;

int main()
{
    double circumference;
    double radius;

    cout << "Enter the length of the wire: ";
    cin >> circumference;
    cout << endl;

    radius = circumference / (2 * PI);
    cout << "Radius: " << radius << ", area: " << PI  * radius * radius << endl;

    return 0;
}