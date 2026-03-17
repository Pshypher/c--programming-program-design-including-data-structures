//
// Created by Pshypher on 08/03/2026.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>

using namespace std;

int rollDice(int num);

int main()
{
    char choice;

    cout << "To run the program enter: " << endl;
    cout << "y or Y to roll a dice." << endl;
    cout << "Or any other character to terminate the program." << endl;
    cin >> choice;
    cout << endl;

    while (choice == 'y' || choice == 'Y')
    {
        int num;
        cout << "Enter the desired sum between 2 - 12: ";
        cin >> num;
        cout << endl;

        assert(2 <= num && num <= 12);

        int count = rollDice(num);
        cout << "The number of times the dice are rolled to get the sum " << num << " = " << count << endl;

        cout << "To run the program enter: " << endl;
        cout << "y or Y to roll a dice." << endl;
        cout << "Or any other character to terminate the program." << endl;
        cin >> choice;
        cout << endl;
    }

    return 0;
}

int rollDice(int num)
{
    int die1;
    int die2;
    int sum;
    int rollCount = 0;

    srand(time(0));

    do
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        rollCount++;
    }
    while (sum != num);

    return rollCount;
}