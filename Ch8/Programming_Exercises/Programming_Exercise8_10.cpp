//
// Created by Pshypher on 23/04/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

double mean(double xn[], int n);
double standard_deviation(double x, double xn[], int n);

const int NUM_VALUES = 100;

int main()
{
    double values[NUM_VALUES];

    cout << "Enter one-hundred numbers separated by a space: ";
    for (int i = 0; i < NUM_VALUES; i++)
        cin >> values[i];
    cout << endl;

    double avg = mean(values, NUM_VALUES);
    double s = standard_deviation(avg, values, NUM_VALUES);

    cout << "The mean is " << avg << endl;
    cout << "The standard deviation is " << s << endl;

    return 0;
}

double mean(double xn[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += xn[i];
    return sum / n;
}

double standard_deviation(double x, double xn[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += pow(xn[i] - x, 2);
    return sqrt(sum / n);
}
