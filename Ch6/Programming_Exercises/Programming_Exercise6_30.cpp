//
// Created by Pshypher on 16/03/2026.
//
#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

const double FOOT_PER_MILE = 5280.0;
const double ONE_STEP_IN_FOOT = 1;

double getDistance(double& land, double& water);
double getCost(double& land, double& water);
double minimumCost(double x, double y, double cableLandCost, double cableWaterCost, double& minimumLand, double& minimumWater);

int main()
{
    double x;
    double y;
    double cableCostLand;
    double cableCostWater;
    double minimumLengthLand = numeric_limits<double>::max();
    double minimumLengthWater = numeric_limits<double>::max();

    getDistance(x, y);
    getCost(cableCostLand, cableCostWater);

    cout << fixed << showpoint << setprecision(2);

    double minimum = minimumCost(x, y, cableCostLand, cableCostWater, minimumLengthLand, minimumLengthWater);
    cout << minimumLengthWater << " feet is run under water." << endl;
    cout << minimumLengthLand << " feet is run downstream to the factory over land." << endl;
    cout << "The total minimum cost is $" << minimum << endl;

    return 0;
}

double getDistance(double &land, double &water)
{
    cout << "Enter the width of the river in miles: ";
    cin >> water;
    cout << endl;
    water = water * FOOT_PER_MILE;

    cout << "Enter the distance in miles downstream from the bank to the factory: ";
    cin >> land;
    cout << endl;
    land = land * FOOT_PER_MILE;
}

double getCost(double &land, double &water)
{
    cout << "Enter the cost per foot to run power lines under water: ";
    cin >> water;
    cout << endl;

    cout << "Enter the cost per foot to run power lines over land: ";
    cin >> land;
    cout << endl;
}

double minimumCost(double x, double y, double cableCostLand, double cableCostWater, double &minimumLand, double &minimumWater)
{
    double minimum = numeric_limits<double>::max();
    double x1 = 0;
    while (x > 0)
    {
        x1 = x1 + ONE_STEP_IN_FOOT;
        double z = sqrt(pow(y, 2) + pow(x - x1, 2));
        double cost = cableCostLand * x1 + cableCostWater * z;

        if (cost < minimum)
        {
            minimum = cost;
            minimumLand = x1;
            minimumWater = z;
        }

        x = x - ONE_STEP_IN_FOOT;
    }

    return minimum;
}
