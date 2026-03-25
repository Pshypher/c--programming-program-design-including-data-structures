//
// Created by Pshypher on 24/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

namespace bookConstants {
    const double AMOUNT_MANUSCRIPT_SALE = 25000;
    const double STANDARD_ROYALTY_RATE = 0.125;
    const double BENCHMARK_ROYALTY_RATE = 0.1;
    const double ABOVE_BENCHMARK_ROYALTY_RATE = 0.14;
    const int BENCHMARK = 4000;
}


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

    double incomeOne = bookConstants::AMOUNT_MANUSCRIPT_SALE;
    double incomeTwo = bookConstants::STANDARD_ROYALTY_RATE * price * copiesSold;
    double incomeThree;
    if (copiesSold <= bookConstants::BENCHMARK)
        incomeThree = bookConstants::BENCHMARK_ROYALTY_RATE * price * copiesSold;
    else
        incomeThree = bookConstants::BENCHMARK_ROYALTY_RATE * price * bookConstants::BENCHMARK +
            (copiesSold - bookConstants::BENCHMARK) * bookConstants::ABOVE_BENCHMARK_ROYALTY_RATE * price;

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