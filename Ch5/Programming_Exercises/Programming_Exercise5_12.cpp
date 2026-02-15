//
// Created by Pshypher on 12/02/2026.
//
#include <iostream>

using namespace std;

int main()
{
    int populationA, populationB;
    double growthRateA, growthRateB;

    cout << "Enter the population and growth rate of town A: ";
    cin >> populationA >> growthRateA;
    cout << endl;

    cout << "Enter the population and growth rate of town B: ";
    cin >> populationB >> growthRateB;
    cout << endl;

    int numOfYears = 0;
    while (populationA < populationB)
    {
        populationA = static_cast<int>(populationA * (1 + growthRateA / 100));
        populationB = static_cast<int>(populationB * (1 + growthRateB / 100));
        numOfYears = numOfYears + 1;
    }

    cout << "Town A (" << populationA << ") is >= Town B (" << populationB
        << ") in population in " << numOfYears << " years." << endl;

    return 0;
}