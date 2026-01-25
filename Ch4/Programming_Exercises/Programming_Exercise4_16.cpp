//
// Created by Pshypher on 24/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

const double AUTHOR_PUBLISHER_SALE_ROYALTY = 25000;
const double STANDARD_RATE_ROYALTY = 0.125;
const double COPIES_SOLD_BENCHMARK_RATE_ROYALTY = 0.1;
const double COPIES_SOLD_ABOVE_BENCHMARK_RATE_ROYALTY = 0.14;
const int COPIES_SOLD_BENCHMARK = 4000;

int main()
{
    double price;
    int copiesSold;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the net price of a copy: ";
    cin >> price;
    cout << endl;

    cout << "Enter the estimated number of copies sold: ";
    cin >> copiesSold;
    cout << endl;

    double incomeOne = AUTHOR_PUBLISHER_SALE_ROYALTY;
    double incomeTwo = STANDARD_RATE_ROYALTY * price * copiesSold;
    double incomeThree;
    if (copiesSold <= COPIES_SOLD_BENCHMARK)
        incomeThree = COPIES_SOLD_BENCHMARK_RATE_ROYALTY * price * copiesSold;
    else
        incomeThree = COPIES_SOLD_BENCHMARK_RATE_ROYALTY * price * COPIES_SOLD_BENCHMARK +
            (copiesSold - COPIES_SOLD_BENCHMARK) * COPIES_SOLD_ABOVE_BENCHMARK_RATE_ROYALTY * price;

    cout << "A. if you want to be paid $5,000 upon delivery of the final manuscript  and $20,000 when the novel is"
        << " published, you get $" << incomeOne << endl;
    cout << "B. if you want to be paid 12.5% of the net price of the novel for each copy of the novel sold,"
        << " you get $" << incomeTwo << endl;
    cout << "C. if you want to be paid the author is paid 10% of the net price for the first 4,000 copies sold, "
        << "and 14% of the net price for the copies sold over 4,000, you get $" << incomeThree << endl << endl;


    if (incomeOne >= incomeTwo && incomeOne >= incomeThree)
        cout << "Option A. ";
    else if (incomeTwo >= incomeOne && incomeTwo >= incomeThree)
        cout << "Option B. ";
    else
        cout << "Option C. ";

    cout << "seems like the best option." << endl;

    return 0;
}