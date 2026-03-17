//
// Created by Pshypher on 08/03/2026.
//
#include <iostream>

using namespace std;

void funcOne(int num);
void funcTwo(int n, int m);


int main()
{
    int num;
    int lower;
    int upper;

    cout << "Enter a number: ";
    cin >> num;
    cout << endl;

    funcOne(num);


    cout << "Enter a lower and upper bound, (lower < upper): ";
    cin >> lower >> upper;
    cout << endl;

    funcTwo(lower, upper);

    return 0;
}

void funcOne(int num)
{
    if (num % 2 == 0)
        cout << num * 2 << endl;
    else
        cout << num * 5 << endl;

    cout << endl;
}

void funcTwo(int n, int m)
{
    int sum;
    double average;

    sum = 0;
    for (int i = n; i <= m; i++)
        sum = sum + i;

    average = sum * 1.0 / (m - n + 1);

    cout << "sum = " << sum << endl;
    cout << "average = " << average << endl;
}