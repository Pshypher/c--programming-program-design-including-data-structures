//
// Created by Pshypher on 25/12/2025.
//
#include <iostream>
using namespace std;

const double PERCENT = 100.0;

int main()
{
    double originalCost;
    double percentageMarkup;
    double salesTaxRate;
    cout << "Enter the cost price of the item: ";
    cin >> originalCost;
    cout << endl;

    cout << "Enter the percentage mark up(between 0 and 100): ";
    cin >> percentageMarkup;
    cout << endl;

    cout << "Enter the sales tax rate(between 0.0 and 1.0): ";
    cin >> salesTaxRate;
    cout << endl;

    double sellingPrice = originalCost * (PERCENT + percentageMarkup) / PERCENT;
    double salesTax = sellingPrice * salesTaxRate;
    double finalPrice = sellingPrice + salesTax;

    cout << "Original Price: " << originalCost << endl;
    cout << "Markup Percent: " << percentageMarkup << endl;
    cout << "Selling Price: " << sellingPrice << endl;
    cout << "Sales Tax Rate: " << salesTaxRate << endl;
    cout << "Sales Tax: " << salesTax << endl;
    cout << "Final Price: " << finalPrice << endl;

}