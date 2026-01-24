//
// Created by Pshypher on 24/01/2026.
//
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inFile;
    ofstream outFile;

    double amount;
    double balance;

    outFile.open("../Ch4/Programming_Exercises/Ch4_Ex15_Output.txt");
    inFile.open("../Ch4/Programming_Exercises/Ch4_Ex15_Data.txt");
    if (!inFile)
    {
        cout << "Cannot open the input file. Terminating..." << endl;
        return 1;
    }

    inFile >> balance;
    if (balance <= 0)
    {
        cout << "You cannot withdraw at the moment with a balance of $" << balance << endl;
        return 1;
    }

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the amount you wish to withdraw: ";
    cin >> amount;
    cout << endl;


    double serviceCharge;
    if (amount > balance) {
        char option;
        cout << "Insufficient funds. Do you wish to continue with a service charge of $25.00? (y/n): ";
        cin >> option;
        cout << endl;
        switch (option)
        {
            case 'y':
                serviceCharge = 25;
                break;
            case 'n':
                return 0;
            default:
                cout << option << " is unrecognized." << endl;
                return 1;
        }
    }

    if (0 < amount && amount <= 300)
        serviceCharge += 0;
    else if (300 < amount && amount <= 500)
        serviceCharge += 0.04 * amount;
    else
    {
        cout << "You have exceeded the maximum withdrawal amount of $500." << endl;
        return 0;
    }

    cout << "Before withdrawal: $" << balance << endl;
    balance -= amount - serviceCharge;
    cout << "After withdrawal: $" << balance << endl;

    outFile << balance << endl;

    inFile.close();
    outFile.close();

    return 0;
}