//
// Created by Pshypher on 11/02/2026.
//
#include <iostream>

using namespace std;

int main()
{
    int start, end;
    int multiplesOf3 = 0, multiplesOf5 = 0;

    cout << "Enter two integers: ";
    cin >> start >> end;
    cout << endl;

    int current = start;

    while (current <= end)
    {
        if (current % 3 == 0)
            multiplesOf3++;
        if (current % 5 == 0)
            multiplesOf5++;
        current++;
    }

    cout << "Between [" << start << " - " << end << "] there are " << multiplesOf3 << " multiples of 3 and "
        << multiplesOf5 << " multiples of 5.";

    return 0;
}