//
// Created by Pshypher on 24/03/2026.
//
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std;

namespace tax {
    const double PERSONAL_EXEMPTION = 1500.00;
    const double SINGLE_TAX_EXEMPTION = 4000.00;
    const double MARRIED_TAX_EXEMPTION = 7000.00;
    const double PENSION_RATE_LIMIT = 0.06;
    const double LOW_INCOME_BRACKET_UPPER_BOUND = 15000.00;
    const double MID_INCOME_BRACKET_LOWER_BOUND = 15001.00;
    const double MID_INCOME_BRACKET_UPPER_BOUND = 40000.00;
    const double LOW_INCOME_BRACKET_TAX_RATE = 0.15;
    const double MID_INCOME_BRACKET_TAX_RATE = 0.25;
    const double HIGH_INCOME_BRACKET_TAX_RATE = 0.35;
}

enum maritalStatus {SINGLE, MARRIED};

void input(maritalStatus& status, int& numberOfChildren, double& income);
double taxAmount(maritalStatus status, int numberOfChildren, double taxableIncome);
void deductPensionContributionPercent(int pos, double& income);
maritalStatus getMaritalStatus(char ch);


int main()
{
    maritalStatus status;
    int numberOfChildren;
    double totalIncome;

    cout << fixed << showpoint << setprecision(2);

    input(status, numberOfChildren, totalIncome);
    cout << "Federal income tax: $" << taxAmount(status, numberOfChildren, totalIncome) << endl;

}

void input(maritalStatus& status, int& numberOfChildren, double& totalIncome)
{
    char ch;
    cout << "Are you married(m|M) or single(s|S)? ";
    cin >> ch;
    cout << endl;
    status = getMaritalStatus(ch);

    double income;
    if (status == MARRIED)
    {
        cout << "Enter the number of children you have under the age of 14: ";
        cin >> numberOfChildren;
        cout << endl;

        cout << "Enter your spouses' income: ";
        cin >> income;
        cout << endl;
        deductPensionContributionPercent(1, income);
        totalIncome = totalIncome + income;
    }

    cout << "Enter your income: ";
    cin >> income;
    cout << endl;
    deductPensionContributionPercent(0, income);
    totalIncome = totalIncome + income;
}

double taxAmount(maritalStatus status, int numberOfChildren, double taxableIncome)
{
    int numberOfHousehold = 1;
    if (status == MARRIED)
    {
        taxableIncome = taxableIncome - tax::MARRIED_TAX_EXEMPTION;
        numberOfHousehold = 2 + numberOfChildren;
    }
    else
        taxableIncome = taxableIncome - tax::SINGLE_TAX_EXEMPTION;

    taxableIncome = taxableIncome - tax::PERSONAL_EXEMPTION * numberOfHousehold;

    if (taxableIncome < tax::MID_INCOME_BRACKET_LOWER_BOUND)
        taxableIncome = taxableIncome * tax::LOW_INCOME_BRACKET_TAX_RATE;
    else if (taxableIncome < tax::MID_INCOME_BRACKET_UPPER_BOUND)
        taxableIncome = (taxableIncome - tax::LOW_INCOME_BRACKET_UPPER_BOUND) *
            tax::MID_INCOME_BRACKET_TAX_RATE + 2250;
    else
        taxableIncome = (taxableIncome - tax::MID_INCOME_BRACKET_UPPER_BOUND) *
            tax::HIGH_INCOME_BRACKET_TAX_RATE + 8460;

    return taxableIncome;
}

/**
 * Removes the pension contribution from the income.
 * @param pos 1 for your spouse and 0 for you
 * @param income income earned in USD per month.
 */
void deductPensionContributionPercent(int pos, double& income)
{
    double pensionContributionPercent;
    cout << "Enter the percentage of income ";
    if (pos == 0)
        cout << "you";
    else
        cout << "your spouse";
    cout << " will contribute to pension plan: ";
    cin >> pensionContributionPercent;
    cout << endl;

    if (pensionContributionPercent > tax::PENSION_RATE_LIMIT)
        pensionContributionPercent = tax::PENSION_RATE_LIMIT;

    income = income * (1 - pensionContributionPercent / 100);
}

maritalStatus getMaritalStatus(char ch)
{
    ch = static_cast<char>(tolower(ch));
    assert(ch == 'm' || ch == 's');
    if (ch == 'm')
        return MARRIED;
    else
        return SINGLE;
}
