//*************************************************************
// Maintainer: Pshypher
//
// Program: nth Fibonacci number
// Given the first two numbers of a Fibonacci sequence, this
// determines and outputs the desired number of the Fibonacci
// sequence.
//*************************************************************

#include <iostream>

using namespace std;

int main()
{
    int fib2;
    int fib1;
    int current;
    int counter;
    int nthFibonacci;

    cout << "Enter the first two Fibonacci numbers: ";
    cin >> fib2 >> fib1;
    cout << endl;


    if (fib2 > fib1) {
        cout << "fib2: " << fib2 << " not less than or equals fib1: " << fib1 << endl;
        return 1;
    }

    if (fib2 < 0 || fib1 < 0) {
        cout << "At least one of the fibonacci numbers is less than 0" << endl;
        return 1;
    }

    cout << "The first two Fibonacci numbers are " << fib2 << " and " << fib1 << endl;

    cout << "Enter the position of the desired Fibonacci number: ";
    cin >> nthFibonacci;
    cout << endl;

    if (nthFibonacci < 1) {
        cout << "Invalid position for the nth fibonacci number: " << nthFibonacci << endl;
        return 1;
    }

    if (nthFibonacci == 1)
        current = fib2;
    else if (nthFibonacci == 2)
        current = fib1;
    else
    {
        counter = 3;

        while (counter <= nthFibonacci)
        {
            current = fib1 + fib2;
            fib2 = fib1;
            fib1 = current;
            counter++;
        }
    }

    cout << "The Fibonacci number at position " << nthFibonacci << " is " << current << endl;
    return 0;
}