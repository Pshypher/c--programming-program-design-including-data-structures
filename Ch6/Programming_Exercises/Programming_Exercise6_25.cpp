//
// Created by Pshypher on 14/03/2026.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Constants for charges and discounts
const double REGULAR_MEMBERSHIP_MONTHLY = 50.0;
const double SENIOR_DISCOUNT_PERCENT = 0.30;
const double LONG_TERM_DISCOUNT_PERCENT = 0.15;
const double TRAINING_SESSION_COST = 30.0;
const double TRAINING_SESSION_DISCOUNT_PERCENT = 0.20;

// Function prototypes
void displayInfo();
void getMembershipInfo(bool& isSenior, int& months, int& sessions);
double calculateMembershipCost(bool isSenior, int months, int sessions);

int main()
{
    bool isSenior;
    int months;
    int sessions;
    char choice;

    cout << fixed << showpoint << setprecision(2);

    do {
        displayInfo();
        getMembershipInfo(isSenior, months, sessions);

        double totalCost = calculateMembershipCost(isSenior, months, sessions);

        cout << "\nYour membership cost is: $" << totalCost << endl;

        cout << "\nWould you like to calculate for another membership? (y/n): ";
        cin >> choice;
        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}

void displayInfo()
{
    cout << "--------------------------------------------------------" << endl;
    cout << "Welcome to the Fitness Center!" << endl;
    cout << "General Information and Charges:" << endl;
    cout << "1. Regular membership monthly fee: $" << REGULAR_MEMBERSHIP_MONTHLY << endl;
    cout << "2. Senior citizens (60+) discount: " << (SENIOR_DISCOUNT_PERCENT * 100) << "%" << endl;
    cout << "3. Membership paid for 12 or more months discount: " << (LONG_TERM_DISCOUNT_PERCENT * 100) << "%" << endl;
    cout << "4. Personal training session cost: $" << TRAINING_SESSION_COST << " per session" << endl;
    cout << "5. Discount for more than 5 personal training sessions: " << (TRAINING_SESSION_DISCOUNT_PERCENT * 100) << "% per session" << endl;
    cout << "--------------------------------------------------------" << endl;
}

void getMembershipInfo(bool& isSenior, int& months, int& sessions)
{
    char seniorStatus;
    cout << "Are you a senior citizen? (y/n): ";
    cin >> seniorStatus;
    isSenior = (seniorStatus == 'y' || seniorStatus == 'Y');

    cout << "Enter the number of months for membership: ";
    cin >> months;

    cout << "Enter the number of personal training sessions: ";
    cin >> sessions;
}

double calculateMembershipCost(bool isSenior, int months, int sessions)
{
    double monthlyFee = REGULAR_MEMBERSHIP_MONTHLY;
    double totalMembershipCost;
    double totalTrainingCost;

    // Apply long term discount
    if (months >= 12)
        monthlyFee = monthlyFee * (1 - LONG_TERM_DISCOUNT_PERCENT);

    // Apply senior discount
    if (isSenior)
        monthlyFee = monthlyFee * (1 - SENIOR_DISCOUNT_PERCENT);

    totalMembershipCost = monthlyFee * months;

    // Calculate training session cost
    double sessionCost = TRAINING_SESSION_COST;
    if (sessions > 5)
        sessionCost = sessionCost * (1 - TRAINING_SESSION_DISCOUNT_PERCENT);

    totalTrainingCost = sessionCost * sessions;

    return totalMembershipCost + totalTrainingCost;
}