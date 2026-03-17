//
// Created by Pshypher on 09/03/2026.
//
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateInstallment(double amount, double rate, int tenure, int years);
double balance(double installment, double rate, int tenure, int years, int numOfPayments);

int main()
{
    int choice;

    cout << fixed << showpoint << setprecision(2);

    cout << "Program to calculate the amount to be paid in installments and outstanding balance of a loan." << endl;
    cout << "Note: the tenure is the number of times a loan is to be paid in installments per annum." << endl;
    cout << "Select a number: " << endl;
    cout << "1: To continue the calculation of the outstanding loan balance." << endl;
    cout << "0: To terminate the program." << endl;
    cin >> choice;
    cout << endl;

    while (choice != 0)
    {
        if (choice == 1)
        {
            double amount, rate;
            int tenure, years, numOfPayments;
            cout << "Enter the loan amount, rate, tenure and number of years: ";
            cin >> amount >> rate >> tenure >> years;
            cout << endl;

            cout << "Enter the number of times payment was made: ";
            cin >> numOfPayments;
            cout << endl;

            double installment = calculateInstallment(amount, rate, tenure, years);
            double outstandingBalance = balance(installment, rate, tenure, years, numOfPayments);

            cout << "The amount to be paid in installments is $" << installment << endl;
            cout << "The outstanding loan balance after " << numOfPayments << " payments is $"
                << outstandingBalance << endl;


        }
        else
        {
            cout << "Invalid choice. Please select 1 to continue or 0 to terminate the program.";
        }

        cout << "Select a number: " << endl;
        cout << "1: To continue the calculation of the outstanding loan balance." << endl;
        cout << "0: To terminate the program." << endl;
        cin >> choice;
        cout << endl;

    }

    return 0;
}

double calculateInstallment(double amount, double rate, int tenure, int years)
{
    double i = rate / tenure;
    return amount * i / (1 - pow(1 + i, -tenure * years));
}

double balance(double installment, double rate, int tenure, int years, int numOfPayments)
{
    double i = rate / tenure;
    double exponent = tenure * years - numOfPayments;

    return installment * ((1 - pow(1 + i, -exponent)) / i);
}


