//
// Created by Pshypher on 07/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double netBalance;
    double payment;
    double numOfDaysInBillingCycle;
    double numOfDaysPaymentMadeBeforeBillingCycle;
    double interestRate;
    double averageDailyBalance;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the net balance: ";
    cin >> netBalance;
    cout << endl;

    cout << "Enter the payment made: ";
    cin >> payment;
    cout << endl;

    cout << "Enter the number of days in the billing cycle: ";
    cin >> numOfDaysInBillingCycle;
    cout << endl;

    cout << "Enter the number of days payment was made before the billing cycle: ";
    cin >> numOfDaysPaymentMadeBeforeBillingCycle;
    cout << endl;

    cout << "Enter the interest rate per month (decimal between 0 and 1): ";
    cin >> interestRate;
    cout << endl;

    averageDailyBalance = (netBalance * numOfDaysInBillingCycle - payment * numOfDaysPaymentMadeBeforeBillingCycle) /
        numOfDaysInBillingCycle;

    cout << "The interest on $" << netBalance << " is $" << averageDailyBalance * interestRate << endl;

    return 0;
}