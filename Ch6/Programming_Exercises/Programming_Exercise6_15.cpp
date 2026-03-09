//
// Created by Pshypher on 09/03/2026.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void getUserInput(double& windSpeed, double& temp);
double calculateWindChill(double windSpeed, double temp);

int main()
{
    double windSpeed;
    double temp;

    cout << fixed << showpoint << setprecision(2);


    getUserInput(windSpeed, temp);
    double windChill = calculateWindChill(windSpeed, temp);

    cout << "Wind chill at wind speed of " << windSpeed << " mph and temperature of "
         << temp << "F is " << windChill << "F" << endl;

    return 0;
}

void getUserInput(double& windSpeed, double& temp)
{
    cout << "Enter the wind speed in miles per hour: ";
    cin >> windSpeed;
    cout << endl;

    cout << "Enter the temperature in degrees Fahrenheit: ";
    cin >> temp;
    cout << endl;
}

double calculateWindChill(double windSpeed, double temp)
{
    return 35.74 + 0.6215 * temp - 35.75 * pow(windSpeed, 0.16) + 0.4275 * temp * pow(windSpeed, 0.16);
}

