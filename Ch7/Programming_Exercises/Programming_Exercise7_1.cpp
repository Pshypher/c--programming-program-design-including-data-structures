//
// Created by Pshypher on 24/03/2026.
//

#include <iostream>

using namespace std;

enum triangleType {scalene, isosceles, equilateral, notriangle};

void getSideLength(double& a, double& b, double& c);
triangleType triangleShape(double a, double b, double c);
bool isTriangle(double a, double b, double c);
void printResult(triangleType shape);

const double EPSILON = 1E-6;

int main()
{
    double a, b, c;
    getSideLength(a, b, c);
    triangleType shape = triangleShape(a, b, c);

    cout << "Triangle with sides " << a << ", " << b << " and " << c << " is ";
    printResult(shape);
    cout << endl;

    return 0;
}

void getSideLength(double &a, double &b, double &c)
{
    cout << "Enter the length of three sides of a triangle: ";
    cin >> a >> b >> c;
}

triangleType triangleShape(double a, double b, double c)
{
    triangleType shape;
    if (!isTriangle(a, b, c))
        shape = notriangle;
    else
    {
        if (abs(a - b) < EPSILON || abs(a - c) < EPSILON || abs(b - c) < EPSILON)
            if ((abs(a - b) + abs(b - c)) / 2 < EPSILON)
                shape = equilateral;
            else
                shape = isosceles;
        else
            shape = scalene;
    }

    return shape;
}

bool isTriangle(double a, double b, double c)
{
    return a + b > c && a + c > b && b + c > a;
}

void printResult(triangleType shape)
{
    switch (shape)
    {
        case scalene:
            cout << "a scalene triangle.";
            break;
        case isosceles:
            cout << "an isosceles triangle.";
            break;
        case equilateral:
            cout << "an equilateral triangle.";
            break;
        default:
            cout << "not a triangle.";
    }
}
