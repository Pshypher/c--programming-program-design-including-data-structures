//
// Created by Pshypher on 07/01/2026.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159;

int main()
{
    double radius;
    double height;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the radius of the base: ";
    cin >> radius;
    cout << endl;

    cout << "Enter the height of the cylindrical container: ";
    cin >> height;
    cout << endl;

    double volume = PI * pow(radius, 2.0) * height;
    cout << "The side of the dairy container whose volume is " << volume << " cubic ft is " << cbrt(volume) << " ft."
        << endl;
    return 0;
}