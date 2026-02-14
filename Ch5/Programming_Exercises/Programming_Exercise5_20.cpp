//
// Created by Pshypher on 14/02/2026.
//
#include <iostream>

using namespace std;

int main()
{
    double loanAmount, interestRate, monthlyPayment;

    cout << "Enter loan amount: ";
    cin >> loanAmount;
    cout << endl;

    cout << "Enter interest rate: ";
    cin >> interestRate;
    cout << endl;

    cout << "Enter monthly payment: ";
    cin >> monthlyPayment;
    cout << endl;

    double monthlyInterestRate = interestRate / 1200;
    double interest = monthlyInterestRate * loanAmount;
    while (monthlyPayment <= interest) {
        cout << "Monthly payment is too low to cover interest. Loan cannot be paid off." << endl;
        cout << "Enter monthly payment: ";
        cin >> monthlyPayment;
        cout << endl;
    }

    int month = 0;
    while (loanAmount > 0)
    {
        interest = monthlyInterestRate * loanAmount;
        loanAmount = loanAmount - monthlyPayment - interest;
        month++;
    }

    cout << "It takes " << month << " month(s) making monthly installments of $" << monthlyPayment
        << " at an interest rate of " << interestRate << "% to pay off the loan." << endl;

    return 0;
}