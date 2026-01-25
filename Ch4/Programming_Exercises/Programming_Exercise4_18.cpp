//
// Created by Pshypher on 24/01/2026.
//
#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    char gender;
    double weight;
    double wrist;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the gender (m or M, f or F): ";
    cin >> gender;
    cout << endl;

    cout << "Enter the body weight: ";
    cin >> weight;
    cout << endl;

    cout << "Enter the wrist measurement: ";
    cin >> wrist;
    cout << endl;

    double percentFat;
    double aOne;
    double aTwo;
    double aThree;
    double aFour;
    double aFive;
    double b;
    double fat;
    switch (gender) {
        case 'f':
        case 'F':
            double waist;
            double hip;
            double forearm;

            cout << "Enter the waist measurement: ";
            cin >> waist;
            cout << endl;

            cout << "Enter the hip measurement: ";
            cin >> hip;
            cout << endl;

            cout << "Enter the forearm measurement: ";
            cin >> forearm;
            cout << endl;

            aOne = weight * 0.732 + 8.987;
            aTwo = wrist / 3.140;
            aThree = waist * 0.157;
            aFour = hip * 0.249;
            aFive = forearm * 0.434;
            b = aOne + aTwo - aThree - aFour + aFive;
            fat = weight - b;
            percentFat = fat * 100 / weight;
            break;
        case 'm':
        case 'M':
            aOne = weight * 1.082 + 94.42;
            aTwo = wrist * 4.15;
            b = aOne - aTwo;
            fat = weight - b;
            percentFat = fat * 100 / weight;
            break;

        default:
            cout << "No such gender " << gender << " exists." << endl;
            return 1;
    }

    cout << "Body fat is: " << percentFat << "%" << endl;

    return 0;
}
