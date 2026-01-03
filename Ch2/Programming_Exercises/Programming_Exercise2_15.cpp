//
// Created by Pshypher on 25/12/2025.
//
#include <iostream>
using namespace std;

const double PI = 3.141593;
int main()
{
    double radius;
    double price;
    cout << "Enter the radius of the pizza(in inches): ";
    cin >> radius;
    cout << endl;

    cout << "Enter the price of the pizza: ";
    cin >> price;
    cout << endl;

    double area = PI * radius * radius;
    cout << "Price per square inch: $" << price / area << endl;
    return 0;
}