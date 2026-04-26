//
// Created by Pshypher on 24/04/2026.
//
#include <iostream>
#include <fstream>

using namespace std;

const int NUMBER_OF_RUNNERS = 5;
const int DAYS_OF_WEEK = 7;

void initialize(int list[], int length);
void readData(ifstream& infile, string names[], int runners, int miles[][DAYS_OF_WEEK]);
void getTotalMiles(const int miles[][DAYS_OF_WEEK], int total[], int runners);
void printResults(const string names[], const int miles[][DAYS_OF_WEEK], const int totalMiles[], int runners);

int main()
{
    string firstNames[NUMBER_OF_RUNNERS];
    int miles[NUMBER_OF_RUNNERS][DAYS_OF_WEEK];
    int milesPerWeek[NUMBER_OF_RUNNERS];
    ifstream infile;

    infile.open("../Ch8/Programming_Exercises/miles.dat");

    initialize(milesPerWeek, NUMBER_OF_RUNNERS);
    readData(infile, firstNames, NUMBER_OF_RUNNERS, miles);
    getTotalMiles(miles, milesPerWeek, NUMBER_OF_RUNNERS);
    printResults(firstNames, miles, milesPerWeek, NUMBER_OF_RUNNERS);

    infile.close();

    return 0;
}

void initialize(int list[], int length)
{
    for (int i = 0; i < length; i++)
        list[i] = 0;
}

void readData(ifstream& infile, string names[], int runners, int miles[][DAYS_OF_WEEK])
{
    for (int i = 0; i < runners; i++)
    {
        infile >> names[i];
        for (int j = 0; j < DAYS_OF_WEEK; j++)
            infile >> miles[i][j];
    }
}

void getTotalMiles(const int miles[][DAYS_OF_WEEK], int total[], int runners)
{
    for (int i = 0; i < runners; i++)
    {
        for (int j = 0; j < DAYS_OF_WEEK; j++)
            total[i] += miles[i][j];
    }
}

void printResults(const string names[], const int miles[][DAYS_OF_WEEK], const int totalMiles[], int runners)
{
    for (int i = 0; i < runners; i++)
    {
        cout << names[i] << ": {";
        for (int j = 0; j < DAYS_OF_WEEK; j++)
        {
            if (j > 0)
                cout << ", ";
            cout << miles[i][j];
        }
        cout << "}, total = " << totalMiles[i] << " miles, average = " << totalMiles[i] * 1.0 / DAYS_OF_WEEK
            << " miles" <<  endl;
    }
}

