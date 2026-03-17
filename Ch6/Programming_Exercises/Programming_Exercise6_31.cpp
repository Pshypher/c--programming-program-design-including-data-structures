//
// Created by Pshypher on 17/03/2026.
//
#include <cassert>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265358979323846;
const double EPSILON = 1E-6;

void getDimensions(double& ab, double& bc);
void getAngles(double& ab, double& bc);
double calculateLengthOfPipe(double width1, double angle1, double width2, double angle2);

int main()
{
    double widthAB;
    double angleAB;
    double widthBC;
    double angleBC;

    getDimensions(widthAB, widthBC);
    getAngles(angleAB, angleBC);

    double length = calculateLengthOfPipe(widthAB, angleAB, widthBC, angleBC);

    cout << "length = " << round(length) << " feet." << endl;
}

double calculateLengthOfPipe(double width1, double angle1, double width2, double angle2)
{
    return width1 / sin(angle1) + width2 / cos(angle2);
}


void getDimensions(double& ab, double& bc)
{
    cout << "Enter the width of hallway AB in feet: ";
    cin >> ab;
    cout << endl;

    cout << "Enter the width of hallway BC in feet: ";
    cin >> bc;
    cout << endl;
}

void getAngles(double& ab, double& bc)
{
    cout << "Enter the angle of hallway AB in degrees: ";
    cin >> ab;
    cout << endl;

    cout << "Enter the angle of hallway BC in degrees: ";
    cin >> bc;
    cout << endl;


    ab = ab * PI / 180;
    bc = bc * PI / 180;

    assert(0 < ab && ab < PI / 2 && 0 < bc && bc < PI / 2);
    assert(abs(PI / 2 - ab - bc) < 1E-6);
}
