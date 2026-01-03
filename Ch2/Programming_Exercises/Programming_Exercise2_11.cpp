//
// Created by Pshypher on 25/12/2025.
//
#include <iostream>
using namespace std;

int main()
{
    int capacity;   // capacity in gallons of the automobile fuel tank
    int mpg;        // miles per gallon that the automobile can be driven

    cout << "Enter capacity of fuel tank in gallons: ";
    cin >> capacity;
    cout << endl;

    cout << "Enter the miles per gallon automobile cover without refuelling: ";
    cin >> mpg;
    cout << endl;

    cout << capacity * mpg << " mile(s) can be covered without refuelling." << endl;

    return 0;
}