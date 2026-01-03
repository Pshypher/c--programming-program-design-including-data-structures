//
// Created by Pshypher on 27/12/2025.
//
#include <cmath>
#include <iostream>
using namespace std;

const int CUBIC_FEET_PER_CUBIC_YARD = 27;
const int INCHES_PER_FEET = 12;

int main()
{
    double volumeOfConcrete;
    double thickness;
    double ratio;

    cout << "Enter the amount of premixed concrete(in cubic yards): ";
    cin >> volumeOfConcrete;
    cout << endl;

    cout << "Enter the thickness of the patio(in inches): ";
    cin >> thickness;
    cout << endl;

    cout << "Enter the ratio (length : width): ";
    cin >> ratio;
    cout << endl;

    double volumeOfConcreteInFeet = volumeOfConcrete * CUBIC_FEET_PER_CUBIC_YARD;
    double thicknessInFeet = thickness / INCHES_PER_FEET;
    double width = sqrt(volumeOfConcreteInFeet / (thicknessInFeet * ratio));
    double length = ratio * width;

    cout << "The length of the patio is " << length << "ft." << endl;
    cout << "The width of the patio is " << width << "ft." << endl;
}