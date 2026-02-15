//
// Created by Pshypher on 14/02/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double loanAmount, interestRate, monthlyPayment, totalInterest = 0;

    cout << "Enter loan amount: ";
    cin >> loanAmount;
    cout << endl;

    cout << "Enter interest rate: ";
    cin >> interestRate;
    cout << endl;

    double monthlyInterestRate = interestRate / 1200;
    double interest = monthlyInterestRate * loanAmount;

    cout << fixed << showpoint << setprecision(2);

    cout << "Minimum monthly payment greater than $" << interest << " can be made.\nEnter monthly payment: ";
    cin >> monthlyPayment;
    cout << endl;
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
        totalInterest = totalInterest + interest;
        double principalPaid = monthlyPayment - interest;
        if (principalPaid > loanAmount) {
            cout << "Remaining loan amount: $" << loanAmount << endl;
            cout << "Actual amount paid: $" << principalPaid << endl;
        }
        loanAmount = loanAmount - principalPaid;
        month++;
    }

    cout << "It takes " << month << " month(s) making monthly installments of $" << monthlyPayment
        << " at an interest rate of " << interestRate << "% to pay off the loan." << endl;
    cout << "Total interest paid: $" << totalInterest << endl;

    return 0;
}