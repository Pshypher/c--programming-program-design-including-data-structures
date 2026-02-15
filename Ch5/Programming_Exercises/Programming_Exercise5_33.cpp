//
// Created by Pshypher on 15/02/2026.
//
#include <iostream>

using namespace std;

int main()
{
    int a, b, t;

    cout << "Enter the number of minutes it takes the prepare the first dish, \nthe "
            << "number of increase in minutes it takes for subsequent dishes \n\tand "
               << "the total time allowed for preparing all dishes(a, b, & t): ";
    cin >> a >> b >> t;

    int remaining = t - a;
    int nextTimeInSequence = a + b;
    int dishes = 1;
    while (remaining >= nextTimeInSequence)
    {
        nextTimeInSequence = nextTimeInSequence + b;
        remaining = remaining - nextTimeInSequence;
        dishes++;
    }

    cout << endl;
    cout << dishes << " dishes can be prepared in " << t << " minutes." << endl;

    return 0;
}