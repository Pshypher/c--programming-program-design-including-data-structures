//
// Created by Pshypher on 15/03/2026.
//
#include <cassert>
#include <iostream>
#include <iomanip>

using namespace std;

const int SMALL_COFFEE_CUP_SIZE = 1;
const int MEDIUM_COFFEE_CUP_SIZE = 2;
const int LARGE_COFFEE_CUP_SIZE = 3;

const double SMALL_COFFEE_PRICE = 1.75;
const double MEDIUM_COFFEE_PRICE = 1.90;
const double LARGE_COFFEE_PRICE = 2.00;

void displayCoffeePrompt();
void sellCoffee(int size, int& qty);
void printTotalNumberOfCoffeeCups(int small, int medium, int large);
double totalCoffeeCost(int small, int medium, int large);
void printTotalCostOfCoffee(int small, int medium, int large);
void printTotalAmountOfMoneyMade(int small, int medium, int large);

int main()
{
    char choice;
    int quantitySmallCup = 0;
    int quantityMediumCup = 0;
    int quantityLargeCup = 0;

    cout << fixed << showpoint << setprecision(2);

    displayCoffeePrompt();
    cin >> choice;
    while (choice != 'q' && choice != 'Q')
    {
        for (int size = 1; size <= 3; size++)
        {
            switch (size)
            {
                case SMALL_COFFEE_CUP_SIZE:
                    sellCoffee(SMALL_COFFEE_CUP_SIZE, quantitySmallCup);
                    break;
                case MEDIUM_COFFEE_CUP_SIZE:
                    sellCoffee(MEDIUM_COFFEE_CUP_SIZE, quantityMediumCup);
                    break;
                case LARGE_COFFEE_CUP_SIZE:
                    sellCoffee(LARGE_COFFEE_CUP_SIZE, quantityLargeCup);
                    break;
                default:
                    cout << "Invalid choice." << endl;
                    break;
            }
        }

        printTotalNumberOfCoffeeCups(quantitySmallCup, quantityMediumCup, quantityLargeCup);
        printTotalCostOfCoffee(quantitySmallCup, quantityMediumCup, quantityLargeCup);
        printTotalAmountOfMoneyMade(quantitySmallCup, quantityMediumCup, quantityLargeCup);

        displayCoffeePrompt();
        cin >> choice;
    }
    return 0;
}

void displayCoffeePrompt()
{
    cout << endl;
    cout << "Welcome to the Coffee Beach Shop Program." << endl;
    cout << "To quit the program press q|Q." << endl;
    cout << "Otherwise press any key to continue." << endl;
}

void sellCoffee(int size, int& qty)
{
    assert(size >= 1 && size <= 3);
    string choice;
    switch (size)
    {
        case 1:
            choice = "small";
            break;
        case 2:
            choice = "medium";
            break;
        case 3:
            choice = "large";
            break;
        default:
            return;
    }

    cout << "How cups of " << choice << "-sized coffee would you like to purchase? ";
    cin >> qty;
    cout << endl;
}

void printTotalNumberOfCoffeeCups(int small, int medium, int large)
{
    cout << small << " small-sized cups were sold." << endl;
    cout << medium << " medium-sized cups were sold." << endl;
    cout << large << " large-sized cups were sold." << endl;
    cout << endl;
}

double totalCoffeeCost(int small, int medium, int large)
{
    double cost = small * SMALL_COFFEE_PRICE + medium * MEDIUM_COFFEE_PRICE +
        large * LARGE_COFFEE_PRICE;

    return cost;
}

void printTotalCostOfCoffee(int small, int medium, int large)
{
    double cost = totalCoffeeCost(small, medium, large);
    cout << "Cost for the amount of coffee sold is $" << cost << endl;
    cout << endl;
}

void printTotalAmountOfMoneyMade(int small, int medium, int large)
{
    static double sum = 0;
    sum = sum + totalCoffeeCost(small, medium, large);
    cout << "Total amount of revenue generated so far is $" << sum;
    cout << endl;
}
