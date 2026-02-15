//
// Created by Pshypher on 14/02/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numberOfItems;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the number of items: ";
    cin >> numberOfItems;
    cout << endl;

    double sum = 0;
    for (int count = 0; count < numberOfItems; ++count) {
        double price;
        cout << "Enter the cost of the item #" << count + 1 << ": ";
        cin >> price;
        cout << endl;

        sum = sum + price;
    }

    double billingAmount = sum;
    if (sum < 200)
        billingAmount = billingAmount + 10 * numberOfItems;


    cout << "Total billing amount: $" << billingAmount << endl;


    return 0;
}