//
// Created by Pshypher on 12/02/2026.
//
#include <iostream>
#include <cassert>

using namespace std;

int main()
{
    int firstNum, secondNum;

    cout << "Enter two integers: ";
    cin >> firstNum >> secondNum;
    cout << endl;

    assert(firstNum < secondNum);

    int sumOfEvenNumbers = 0, sumOfSquaresOfOddNumbers = 0;
    int number = firstNum;
    do
    {
        if (number % 2 == 1) {
            cout << number << " ";
            sumOfSquaresOfOddNumbers = sumOfSquaresOfOddNumbers + number * number;
        }
        else
            sumOfEvenNumbers = sumOfEvenNumbers + number;

        number = number + 1;
    }
    while (number <= secondNum);

    cout << endl;
    cout << "Sum of all even numbers [" << firstNum << "-" << secondNum << "] = " << sumOfEvenNumbers << endl;
    cout << "Sum of squares of all odd numbers [" << firstNum << "-" << secondNum << "] = "
        << sumOfSquaresOfOddNumbers << endl;

    number = 1;
    do
    {
        cout << "square(" << number << ") = " << number * number << endl;
        number = number + 1;
    }
    while (number <= 10);

    char letter = 'A';
    do
    {
        cout << letter;
        letter = static_cast<char>(static_cast<int>(letter) + 1);
    }
    while ('A' <= letter && letter <= 'Z');
    cout << endl;

    return 0;
}