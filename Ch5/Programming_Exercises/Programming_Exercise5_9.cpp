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
    int number;
    for (number = firstNum; number <= secondNum; number++)
    {
        if (number % 2 == 1) {
            cout << number << " ";
            sumOfSquaresOfOddNumbers = sumOfSquaresOfOddNumbers + number * number;
        }
        else
            sumOfEvenNumbers = sumOfEvenNumbers + number;
    }
    cout << endl;
    cout << "Sum of all even numbers [" << firstNum << "-" << secondNum << "] = " << sumOfEvenNumbers << endl;
    cout << "Sum of squares of all odd numbers [" << firstNum << "-" << secondNum << "] = "
        << sumOfSquaresOfOddNumbers << endl;


    for (number = 1; number <= 10; number++)
    {
        cout << "square(" << number << ") = " << number * number << endl;
    }


    for (char letter = 'A'; 'A' <= letter && letter <= 'Z'; letter = static_cast<char>(static_cast<int>(letter) + 1))
        cout << letter;
    cout << endl;

    return 0;
}