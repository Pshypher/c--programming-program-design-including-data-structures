//
// Created by Pshypher on 22/01/2026.
//

#include <iostream>

using namespace std;

int main()
{
    double numOne, numTwo, numThree;
    double smallest, median, largest;

    cout << "Enter three numbers: ";
    cin >> numOne >> numTwo >> numThree;
    cout << endl;

    // Find the smallest number
    if (numOne <= numTwo && numOne <= numThree)
        smallest = numOne;
    else if (numTwo <= numOne && numTwo <= numThree)
        smallest = numTwo;
    else
        smallest = numThree;

    // Find the largest number
    if (numOne >= numTwo && numOne >= numThree)
        largest = numOne;
    else if (numTwo >= numOne && numTwo >= numThree)
        largest = numTwo;
    else
        largest = numThree;

    // Find the median of the three numbers
    if (numOne != smallest || numOne != largest)
        median = numOne;
    else if (numTwo != smallest || numTwo != largest)
        median = numTwo;
    else
        median = numThree;

    // Print the numbers in ascending order
    cout << smallest << " -> " << median << " -> " << largest << endl;

    return 0;
}