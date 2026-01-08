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
    double length;
    double radius;
    double interval;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the length of the yard: ";
    cin >> length;
    cout << endl;

    cout << "Enter the radius of a fully grown tree: ";
    cin >> radius;
    cout << endl;

    cout << "Enter the space between fully grown trees: ";
    cin >> interval;
    cout << endl;

    int numOfTrees = static_cast<int>(length / (2 * radius + interval));
    cout << "Number of trees: " << numOfTrees << endl;
    cout << "Total Space Occupied by Fully Grown Trees\n" << "\tLength: " << numOfTrees * 2 * radius
        << "ft\n\tArea: " << numOfTrees * PI * pow(radius, 2.0) << "ft" << endl;

    return 0;
}