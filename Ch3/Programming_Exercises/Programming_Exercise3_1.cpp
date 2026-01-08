//
// Created by Pshypher on 05/01/2026.
//
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string firstName;
    string lastName;
    string department;
    double monthlyGrossSalary;
    double bonusPercentage;
    double taxPercentage;
    double distanceTraveled;
    double travelingTime;
    int numOfCoffeeCupsSold;
    double costOfCoffeeCup;

    ifstream inFile;
    ofstream outFile;

    inFile.open("../Ch3/Programming_Exercises/inData.txt");
    outFile.open("../Ch3/Programming_Exercises/outData.txt");

    outFile << fixed << showpoint << setprecision(2);

    cout << "Processing data" << endl;

    inFile >> firstName >> lastName >> department >> monthlyGrossSalary >> bonusPercentage >> taxPercentage
        >> distanceTraveled >> travelingTime >> numOfCoffeeCupsSold >> costOfCoffeeCup;

    outFile << "Name: " << firstName << " " << lastName << ", Department: " << department << endl
        << "MonthlyGrossSalary: $" << monthlyGrossSalary << ", MonthlyBonus: " << bonusPercentage
        << "%, Taxes: " << taxPercentage << "%" << endl << "Paycheck: $"
        << (1 + bonusPercentage / 100) * monthlyGrossSalary * (1 - taxPercentage / 100)  << endl << endl;

    outFile << "Distance Traveled: " << distanceTraveled << " miles, Traveling Time: " << travelingTime << " hours"
        << endl << "Average Speed: " << distanceTraveled / travelingTime << " miles per hour" << endl << endl;

    outFile << "Number of Coffee Cups Sold: " << numOfCoffeeCupsSold << ", Cost: $" << costOfCoffeeCup << " per cup"
        << endl << "Sales Amount = $" << numOfCoffeeCupsSold * costOfCoffeeCup;

    inFile.close();
    outFile.close();

    return 0;
}