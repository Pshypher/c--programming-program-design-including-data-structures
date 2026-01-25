//
// Created by Pshypher on 24/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double priceColonial;
    double priceSplitEntry;
    double priceSingleStory;

    double areaColonial;
    double areaSplitEntry;
    double areaSingleStory;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the base price and the finished area in square feet of the colonial housing model: ";
    cin >> priceColonial >> areaColonial;
    cout << endl;

    cout << "Enter the base price and the finished area in square feet of the split-entry housing model: ";
    cin >> priceSplitEntry >> areaSplitEntry;
    cout << endl;

    cout << "Enter the base price and the finished area in square feet of the single-story housing model: ";
    cin >> priceSingleStory >> areaSingleStory;
    cout << endl;

    double pricePerSqFtColonial = priceColonial / areaColonial;
    double pricePerSqFtSplitEntry = priceSplitEntry / areaSplitEntry;
    double pricePerSqFtSingleStory = priceSingleStory / areaSingleStory;

    double smallest;
    cout << "The";
    if (pricePerSqFtColonial <= pricePerSqFtSplitEntry && pricePerSqFtColonial <= pricePerSqFtSingleStory) {
        cout << " colonial housing model, ";
        smallest = pricePerSqFtColonial;
    } else if (pricePerSqFtSplitEntry <= pricePerSqFtColonial && pricePerSqFtSplitEntry <= priceSingleStory) {
        cout << " split-entry housing model, ";
        smallest = pricePerSqFtSplitEntry;
    } else {
        cout << " single-story housing model, ";
        smallest = pricePerSqFtSingleStory;
    }

    cout << "has the least price per area of $" << smallest << " per square foot." << endl;

    return 0;
}