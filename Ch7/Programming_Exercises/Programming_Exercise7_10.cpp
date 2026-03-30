//
// Created by Pshypher on 25/03/2026.
//
#include <iostream>
#include <iomanip>


using namespace std;

namespace conversion {
    const double SQ_KILOMETER_PER_SQ_INCH = 6.4516E-10;
    const double CUBIC_INCH_PER_GALLON = 231.0;
    const double MINUTES_PER_DAY = 60 * 24;
}

// Function prototypes
void input(double& oilRate, double& height, int& days);
double calculateOilSpillArea(double oilRate, double height, int days);
void printVolumeOilSpillPerDay(double oilRate, int days);

int main()
{
    double oilPumpRate;
    double thickness;
    int numDays;

    input(oilPumpRate, thickness, numDays);

    cout << fixed << showpoint << setprecision(16);

    double area = calculateOilSpillArea(oilPumpRate, thickness, numDays);
    cout << "Area of water covered after " << numDays << " days at the rate of " << oilPumpRate
        << " gallons/minute is " << area << " square kilometers.\n" << endl;

    cout << setprecision(2);
    printVolumeOilSpillPerDay(oilPumpRate, numDays);

    return 0;
}

void input(double& oilRate, double& height, int& days)
{
    cout << "Enter the rate at which the ruptured pipe pumps oil in gallons/min: ";
    cin >> oilRate;
    cout << endl;

    cout << "Enter the thickness of the oil in inch(es): ";
    cin >> height;
    cout << endl;

    cout << "Enter the number of days it takes the oil to cover the area: ";
    cin >> days;
    cout << endl;
}

double calculateOilSpillArea(double oilRate, double height, int days)
{
    double oilPumpRateCubicInchPerMinute = oilRate * conversion::CUBIC_INCH_PER_GALLON;
    double numMinutes = days * conversion::MINUTES_PER_DAY;

    return (oilPumpRateCubicInchPerMinute * numMinutes / height) * conversion::SQ_KILOMETER_PER_SQ_INCH;
}

void printVolumeOilSpillPerDay(double oilRate, int days)
{
    double oilSpilled = 0;
    for (int d = 0; d < days; d++)
    {
        oilSpilled = oilSpilled + oilRate * conversion::MINUTES_PER_DAY;
        cout << "Volume of oil spilled on day #" << d << " is " << oilSpilled << " gallons.";
        cout << endl;
    }
}
