//
// Created by Pshypher on 08/03/2026.
//
#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

const double PI = 3.14159;

int main()
{
    double radius;
    double surfaceArea;
    double volume;

    cout << fixed << showpoint << setprecision(16);

    cout << "sqrt(PI) = " << sqrt(PI) << endl;

    cout << "Enter the radius of a sphere: ";
    cin >> radius;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    surfaceArea = 4 * PI * pow(radius, 2.0);
    volume = (4.0 / 3.0) * PI * pow(radius, 3.0);

    cout << "Surface Area = " << surfaceArea << endl;
    cout << "Volume = " << volume << endl;

    return 0;
}