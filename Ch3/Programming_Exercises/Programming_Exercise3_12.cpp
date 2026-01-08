//
// Created by Pshypher on 07/01/2026.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double averageSpeedCarA;
    double averageSpeedCarB;
    double hours;
    int minutes;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the average speed of car A (in miles per hour): ";
    cin  >> averageSpeedCarA;
    cout << endl;

    cout << "Enter the average speed of car B (in miles per hour): ";
    cin  >> averageSpeedCarB;
    cout << endl;

    cout << "Enter the time elapsed (in hours and minutes separated by a whitespace): ";
    cin >> hours >> minutes;
    cout << endl;

    hours += minutes / 60.0;

    double positionCarA = averageSpeedCarA * hours;
    double positionCarB = averageSpeedCarB * hours;

    double distance = sqrt(pow(positionCarA, 2.0) + pow(positionCarB, 2.0));
    cout << "Distance between Car A and Car B is: " << distance << " miles." << endl;

    return 0;
}