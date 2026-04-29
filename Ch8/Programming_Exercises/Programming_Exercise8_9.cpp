//
// Created by Pshypher on 23/04/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

const int NUM_ROWS = 12;
const int NUM_COLS = 2;

void getData(double temperatures[][NUM_COLS], int months);
double averageHigh(double temperatures[][NUM_COLS], int months);
double averageLow(double temperatures[][NUM_COLS], int months);
int indexHighTemp(double temperatures[][NUM_COLS], int months);
int indexLowTemp(double temperatures[][NUM_COLS], int months);

int main()
{
    double temperatures[NUM_ROWS][NUM_COLS];

    getData(temperatures, NUM_ROWS);

    cout << fixed << showpoint << setprecision(2);

    cout << "Average high temperature: " << averageHigh(temperatures, NUM_ROWS) << endl;
    cout << "Average low temperature: " << averageLow(temperatures, NUM_ROWS) << endl;
    cout << "Month with highest temperature: " << indexHighTemp(temperatures, NUM_ROWS) + 1 << endl;
    cout << "Month with lowest temperature: " << indexLowTemp(temperatures, NUM_ROWS) + 1<< endl;

    return 0;
}

void getData(double temperatures[][NUM_COLS], int months)
{
    for (int month = 0; month < months; month++)
    {
        cout << "Enter the highest and lowest temperature for month #" << (month + 1) << ": ";
        cin >> temperatures[month][0] >> temperatures[month][1];
    }
}

double averageHigh(double temperatures[][NUM_COLS], int months)
{
    double total = 0;
    for (int month = 0; month < months; month++)
    {
        total += temperatures[month][0];
    }

    return total / months;
}

double averageLow(double temperatures[][NUM_COLS], int months)
{
    double total = 0;
    for (int month = 0; month < months; month++)
    {
        total += temperatures[month][1];
    }

    return total / months;
}

int indexHighTemp(double temperatures[][NUM_COLS], int months)
{
    int maxMonth = 0;

    for (int month = 1; month < months; month++)
        if (temperatures[month][0] > temperatures[maxMonth][0])
            maxMonth = month;

    return maxMonth;
}

int indexLowTemp(double temperatures[][NUM_COLS], int months)
{
    int minMonth = 0;

    for (int month = 1; month < months; month++)
        if (temperatures[month][1] < temperatures[minMonth][1])
            minMonth = month;

    return minMonth;
}


