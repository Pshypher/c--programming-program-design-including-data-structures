//
// Created by Pshypher on 24/12/2025.
//
#include <iostream>
#include <string>
using namespace std;

const int SECRET = 11;
const double RATE = 12.50;

int main()
{
    int num1;
    int num2;
    int newNum;
    string name;
    double hoursWorked;
    double wages;

    cout << "Enter two integers separated by a whitespace: ";
    cin >> num1 >> num2;
    cout << endl;

    cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << endl;

    newNum = 2 * num1 + num2;
    cout << "newNum = " << newNum << endl;
    newNum = newNum + SECRET;
    cout << "newNum now becomes: " << newNum << "\n";
    cout << endl;

    cout << "Enter last name: ";
    cin >> name;
    cout << endl;

    cout << "Enter a decimal number between 0 and 70: ";
    cin >> hoursWorked;
    cout << endl;

    wages = RATE * hoursWorked;

    cout << "Name: " << name << endl;
    cout << "Pay Rate: $" << RATE << endl;
    cout << "Hours Worked: " << hoursWorked << endl;
    cout << "Salary: $" << wages << endl;
}