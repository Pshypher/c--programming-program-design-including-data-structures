//
// Created by Pshypher on 15/03/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

void getItemPrices(double& currentPrice, double& priceOne, double& priceTwo);
double calculateInflationRate(double price, double previousPrice);
void printResult(double rate, double previousRate);

int main()
{
    double currentPrice;
    double priceLastYear;
    double price2YearsAgo;

    cout << fixed << showpoint << setprecision(2);

    getItemPrices(currentPrice, priceLastYear, price2YearsAgo);

    double rate = calculateInflationRate(currentPrice, priceLastYear);
    double previousRate = calculateInflationRate(priceLastYear, price2YearsAgo);

    printResult(rate, previousRate);


    return 0;
}

void getItemPrices(double& currentPrice, double& priceOne, double& priceTwo)
{
    cout << "Enter the current price of an item: ";
    cin >> currentPrice;
    cout << endl;

    cout << endl;

    cout << "Gets the price of an item for 2 consecutive years." << endl;
    cout << "Enter the price of an item one year ago: ";
    cin >> priceOne;
    cout << endl;

    cout << "Enter the price of an item two years ago: ";
    cin >> priceTwo;
    cout << endl;
}

double calculateInflationRate(double price, double previousPrice)
{
    double inflation = (price - previousPrice) / previousPrice * 100.0;
    return inflation;
}

void printResult(double rate, double previousRate)
{
    cout << "Current inflation is at " << rate << "% and at " << previousRate << "%" << " last year." << endl;

    cout << "Inflation is ";
    if (rate > previousRate)
        cout << "increasing." << endl;
    else
        cout << "decreasing." << endl;
}
