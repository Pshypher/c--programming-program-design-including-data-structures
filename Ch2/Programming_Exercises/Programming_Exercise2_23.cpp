//
// Created by Pshypher on 26/12/2025.
//
#include <iostream>
using namespace std;

const double SERVICE_CHARGE = 0.015;

int main()
{
    int numberOfShares;
    double costPrice;
    double sellingPrice;

    cout << "Enter the number of shares sold: ";
    cin >> numberOfShares;
    cout << endl;

    cout << "Enter the purchase price of each share: ";
    cin >> costPrice;
    cout << endl;

    cout << "Enter the selling price of each share: ";
    cin >> sellingPrice;
    cout << endl;

    double purchase = costPrice * numberOfShares;
    double totalPurchase = purchase * (1 + SERVICE_CHARGE);
    double sales = sellingPrice * numberOfShares;
    double netSale = sales * (1 - SERVICE_CHARGE);
    double serviceCharges = purchase * SERVICE_CHARGE + sales * SERVICE_CHARGE;
    double netAmount = netSale - totalPurchase;

    cout << "Amount invested: $" << totalPurchase << endl;
    cout << "Total service charge: $" << serviceCharges << endl;
    cout << "Net gain or loss: " <<  netAmount << " USD" << endl;
    cout << "Amount received after selling stock(s): $" << netSale << endl;

    return 0;
}