//
// Created by Pshypher on 06/01/2026.
//
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string lastName;
    string firstName;
    double salary;
    double increase;

    ifstream inFile;
    ofstream outFile;

    inFile.open("../Ch3/Programming_Exercises/Ch3_Ex5Data.txt");
    outFile.open("../Ch3/Programming_Exercises/Ch3_Ex5Output.dat");

    outFile << fixed << showpoint << setprecision(2);

    cout << "Processing Data...";

    inFile >> lastName >> firstName >> salary >> increase;
    outFile << left << setw(7) << firstName << setw(7) << lastName << right << salary * (1 + increase / 100.0)
        << endl;

    inFile >> lastName >> firstName >> salary >> increase;
    outFile << left << setw(7) << firstName << setw(7) << lastName << right << salary * (1 + increase / 100.0)
        << endl;

    inFile >> lastName >> firstName >> salary >> increase;
    outFile << left << setw(7) << firstName << setw(7) << lastName << right << salary * (1 + increase / 100.0)
        << endl;

    inFile.close();
    outFile.close();

    return 0;
}