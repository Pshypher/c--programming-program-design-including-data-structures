//
// Created by Pshypher on 16/03/2026.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double maximum(double y, double z);

int main()
{
    // To solve for the maximum volume, equation is of the form x^3 - x^2y - x^2z + xyz
    // where z is the length of the cardboard, y is the width of the cardboard and x
    // is the size of the square to be cut off from the cardboard
    double y, z;

    cout << fixed << showpoint << setprecision(3);

    cout << "Enter the width and length of the cardboard: ";
    cin >> y >> z;
    cout << endl;

    double x = maximum(y, z);
    cout << "The dimensions of the cardboard that yields the maximum volume are " << endl;
    cout << "Height: " << x << " inches." << endl;
    cout << "Width: " << y - x << " inches." << endl;
    cout << "Length: " << z - x << " inches." << endl;
}

double maximum(double y, double z)
{
    // To find the maximum, differentiate x^3 - x^2y - x^2z + xyz to get 3x^2 - 2xy - 2xz + yz
    // which yields a quadratic equation of the form ax^2 + bx + c = 0
    double a = 3, b = -2 * y - 2 * z, c = y * z;
    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        cout << "No real roots" << endl;
        return -1;
    }

    double x0 = (-b + sqrt(discriminant)) / (2 * a);
    double x1 = (-b - sqrt(discriminant)) / (2 * a);

    // To get the stationary point which appears to be the maximum solve for the
    // second differential which is 6x - 2y - 2z
    double root = x0;
    if (6 * root - 2 * y - 2 * z > 0)
        root = x1;

    return root;
}