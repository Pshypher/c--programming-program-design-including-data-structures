//
// Created by Pshypher on 23/01/2026.
//
#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    double billingAmount;
    double payment;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the billing amount: ";
    cin >> billingAmount;
    cout << endl;

    cout << "Enter the payment: ";
    cin >> payment;
    cout << endl;

    double balance = billingAmount - payment;
    double penalty = 0;

    if (balance == 0) {
        double credit = 0.01 * billingAmount;
        if (credit > 10)
            credit = 10;
        cout << "Credit: $" << credit << endl;
    } else if (payment >= 0.5 * billingAmount) {
        penalty = 0.05 * balance;
    } else if (payment >= 0.2 * billingAmount && payment < 0.5 * billingAmount) {
        penalty = 0.1 * balance;
    } else {
        penalty = 0.2 * balance;
    }

    if (balance > 0) {
        cout << "Balance: $" << balance <<  endl << "Penalty: $" << penalty << endl;
    }

    return 0;
}