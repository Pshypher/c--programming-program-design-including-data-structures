//************************************************************
// Author: Pshypher
//
// Program Convert Measurements: This program converts
// measurements in feet and inches into centimeters using
// the formula that 1 inch is equal to 2.54 centimeters.
// ************************************************************
//header file
#include <iostream>
using namespace std;

//named constants
const double CENTIMETERS_PER_INCH = 2.54;
const int INCHES_PER_FOOT = 12;

int main()
{
    // declare variables
    int feet, inches;
    int totalInches;
    double centimeters;

    // Statements: Step 1 - Step 7
    cout << "Enter two integers, one for feet and " << "one for inches: ";
    cin >> feet >> inches;
    cout << endl;

    cout << "The numbers you entered are " << feet << " for feet and " << inches << " for inches." << endl;

    totalInches = INCHES_PER_FOOT * feet + inches;

    cout << "The total number of inches = " << totalInches << endl;

    centimeters = CENTIMETERS_PER_INCH * totalInches;

    cout << "The number of centimeters = " << centimeters << endl;

    return 0;
}
