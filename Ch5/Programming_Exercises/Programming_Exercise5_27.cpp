//
// Created by Pshypher on 15/02/2026.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
    double radius;
    double arcVolume = 0, arcLength = 0;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the radius of the circular wax paper: ";
    cin >> radius;
    cout << endl;

    int degree = 0;
    while (degree <= 360)
    {
        double perimeter = degree / 360.0 * 2 * PI * radius;
        double r = perimeter / (2.0 * PI);
        double h = sqrt(radius * radius - r * r);
        double volume = 1 / 3.0 * PI * r * r * h;
        degree = degree + 1;

        if (volume > arcVolume) {
            arcVolume = volume;
            arcLength = perimeter;
        }
    }

    cout << "Length of removed sector: " << arcLength << " inches, Volume: " << arcVolume
        << " cubic inches." << endl;

    return 0;
}