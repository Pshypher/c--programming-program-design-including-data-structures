//
// Created by Pshypher on 25/01/2026.
//
#include <iostream>
#include <iomanip>
#include <cassert>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    double farmArea;
    int numOfVegetables;

    double percentAreaOccupiedByVegetable;

    double seedCost;
    double plantationCost;
    double fertilizingCost;
    double laborCost;

    double sellingPricePerAcreOfVegetable;

    double expenditure;
    double revenue;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the total farm area (in acres): ";
    cin >> farmArea;
    cout << endl;

    cout << "Enter the number of vegetables (1 or 2): ";
    cin >> numOfVegetables;
    cout << endl;

    assert(numOfVegetables == 1 || numOfVegetables == 2);

    string costPrompt = "Enter the seed cost, plantation cost, fertilizing cost, and labor cost per acre: ";
    switch (numOfVegetables) {
        case 1:
            cout << costPrompt;
            cin >> seedCost >> plantationCost >> fertilizingCost >> laborCost;
            cout << endl;

            expenditure = (seedCost + plantationCost + fertilizingCost + laborCost) * farmArea;

            cout << "Enter selling price per acre of vegetable: ";
            cin >> sellingPricePerAcreOfVegetable;
            cout << endl;

            revenue = sellingPricePerAcreOfVegetable * farmArea;
            break;
        case 2:
            cout << "Enter the percent area occupied by the first vegetable: ";
            cin >> percentAreaOccupiedByVegetable;
            cout << endl;

            cout << costPrompt;
            cin >> seedCost >> plantationCost >> fertilizingCost >> laborCost;
            cout << endl;

            expenditure = (seedCost + plantationCost + fertilizingCost + laborCost) * farmArea
                * percentAreaOccupiedByVegetable;

            cout << "Enter selling price per acre of first vegetable: ";
            cin >> sellingPricePerAcreOfVegetable;
            cout << endl;

            revenue = sellingPricePerAcreOfVegetable * farmArea * percentAreaOccupiedByVegetable;

            cout << "Enter the percent area occupied by the second vegetable: ";
            cin >> percentAreaOccupiedByVegetable;
            cout << endl;

            cout << costPrompt;
            cin >> seedCost >> plantationCost >> fertilizingCost >> laborCost;
            cout << endl;

            expenditure += (seedCost + plantationCost + fertilizingCost + laborCost) * farmArea
                * percentAreaOccupiedByVegetable;

            cout << "Enter selling price per acre of second vegetable: ";
            cin >> sellingPricePerAcreOfVegetable;
            cout << endl;

            revenue += sellingPricePerAcreOfVegetable * farmArea * percentAreaOccupiedByVegetable;
            break;
        default:
            cout << "You can culture at least 1 and at most 2 vegetable(s)." << endl;
            return 1;
    }

    cout << "Expenditure: $" << expenditure << endl;
    cout << "Revenue: $" << revenue << endl;
    string output = revenue - expenditure >= 0 ? "Profit: $" : "Loss: $";
    cout << output << fabs(revenue - expenditure) << endl;

    return 0;
}