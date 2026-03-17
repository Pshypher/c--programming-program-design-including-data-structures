//
// Created by Pshypher on 09/03/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

double mean(double x1, double x2, double x3, double x4, double x5);
double standard_deviation(double x, double x1, double x2, double x3, double x4, double x5);

int main()
{
    double x1, x2, x3, x4, x5;

    cout << "Enter five numbers: ";
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    cout << endl;

    double avg = mean(x1, x2, x3, x4, x5);
    double s = standard_deviation(avg, x1, x2, x3, x4, x5);

    cout << "The mean of (" << x1 << ", " << x2 << ", " << x3 << ", " << x4 << ", " << x5 << ") is " << avg << endl;
    cout << "The standard deviation is " << s << endl;

    return 0;
}

double mean(double x1, double x2, double x3, double x4, double x5)
{
    return (x1 + x2 + x3 + x4 + x5) / 5;
}

double standard_deviation(double x, double x1, double x2, double x3, double x4, double x5)
{
    return sqrt(pow(x1 - x,2) + pow(x2 - x,2) + pow(x3 - x,2) + pow(x4 - x,2) + pow(x5 - x,2) / 5);
}
