//
// Created by Pshypher on 25/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

const double DISCOUNT_5_PERCENT = 0.05;
const double DISCOUNT_10_PERCENT = 0.1;
const double DISCOUNT_20_PERCENT = 0.2;
const double DISCOUNT_30_PERCENT = 0.3;

int main() {

    double roomCost;
    int numOfRoomsBooked;
    int numOfDays;
    double salesTax;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the cost of renting a room: ";
    cin >> roomCost;
    cout << endl;

    cout << "Enter the number of rooms booked: ";
    cin >> numOfRoomsBooked;
    cout << endl;

    cout << "Enter the number of days: ";
    cin >> numOfDays;
    cout << endl;

    cout << "Enter the sales tax (in percent): ";
    cin >> salesTax;
    cout << endl;

    double discount;
    if (numOfRoomsBooked < 0)
        discount = 0;
    else if (numOfRoomsBooked >= 10)
        discount = DISCOUNT_10_PERCENT;
    else if (numOfRoomsBooked >= 20)
        discount = DISCOUNT_20_PERCENT;
    else
        discount = DISCOUNT_30_PERCENT;

    discount += (numOfDays >= 3) ?  DISCOUNT_5_PERCENT : 0;

    double totalCost = roomCost * numOfRoomsBooked * numOfDays;
    double costWithSalesTax = totalCost * (1 + salesTax / 100);
    double discountedCost = costWithSalesTax * (1 - discount);

    cout << "The cost of renting a room is: $" << roomCost << endl;
    cout << "The discount on each room is: " << (1 - discountedCost / costWithSalesTax) * 100 << "%" << endl;
    cout << numOfRoomsBooked << " rooms were booked, for " << numOfDays << " days." << endl;
    cout << "The total cost of the rooms booked: $" << totalCost << endl;
    cout << "The sales tax is: " << salesTax / 100 << endl;
    cout << "The total billing amount is: $" << discountedCost <<  endl;

    return 0;
}