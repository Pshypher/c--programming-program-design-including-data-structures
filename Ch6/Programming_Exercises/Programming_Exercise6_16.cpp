//
// Created by Pshypher on 12/03/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

void initialize(int& x, int& y, char& z);
void getHoursRate(double& hours, double& rate);
double payCheck(double hours, double rate);
void funcOne(int& x, int y);
void nextChar(char& z);

int main()
{
    int x, y;
    char z;
    double rate, hours;
    double amount;

    cout << fixed << showpoint << setprecision(2);

    initialize(x, y, z);
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

    getHoursRate(hours, rate);
    cout << "hours = " << hours << ", rate = " << rate << endl;

    amount = payCheck(hours, rate);
    cout << "Pay check is $" << amount << endl;
    cout << endl;

    funcOne(x, y);
    cout << "x = " << x << endl;
    cout << endl;


    nextChar(z);
    cout << "z = " << z << endl;

    return 0;
}

void initialize(int& x, int& y, char& z)
{
    x = 0, y = 0;
    z = '\0';
}

void getHoursRate(double &hours, double &rate)
{
    cout << "Enter the number of hours worked: ";
    cin >> hours;
    cout << endl;

    cout << "Enter the rate per hour: ";
    cin >> rate;
    cout << endl;
}

double payCheck(double hours, double rate)
{
    double wages;
    if (hours <=  40)
        wages = rate * hours;
    else
        wages = rate * 40 + (hours - 40) * rate * 1.5;

    return wages;
}

void funcOne(int &x, int y)
{
    int u;

    cout << "Enter a whole number: ";
    cin >> u;
    cout << endl;

    x = 2 * x + y - u;
}

void nextChar(char &z)
{
    cout << "static_cast<int>(z) = " << static_cast<int>(z) << endl;
    z = static_cast<char>(static_cast<int>(z) + 1);
}


