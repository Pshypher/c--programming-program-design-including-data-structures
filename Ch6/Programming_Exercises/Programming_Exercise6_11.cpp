//
// Created by Pshypher on 09/03/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.1416;

double distance(double x1, double y1, double x2, double y2);
double radius(double x0, double y0, double x, double y);
double circumference(double radius);
double area(double radius);

int main()
{
    double x0, y0, x, y;

    cout << "Enter the (x, y) coordinates for the center of a circle: ";
    cin >> x0 >> y0;
    cout << endl;

    cout << "Enter the (x, y) coordinates for a point on the circle: ";
    cin >> x >> y;
    cout << endl;

    double r = radius(x0, y0, x, y);
    double c = circumference(r);
    double a = area(r);


    cout << "Radius of circle centered at (" << x0 << ", " << y0 << ") is " << r;
    cout << "\nThe diameter is " << 2 * r;
    cout << ", circumference is " << c;
    cout << ", and area is " << a << endl;

    return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double radius(double x0, double y0, double x, double y)
{
    return distance(x0, y0, x, y);
}

double circumference(double radius)
{
    return 2 * PI * radius;
}

double area(double radius)
{
    return PI * radius * radius;
}
