//
// Created by Pshypher on 24/03/2026.
//
#include <iostream>
#include <cassert>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

enum userSelection {YES, NO};

int getRandomNumber();
userSelection toUserSelection(char ch);
int doubleNumber(int num);
int expN(int num);
int reverseDigits(int num);
int sumDigits(int num);
int expByLastDigit(int num);
bool isPrime(int num);
void postOp(int& num);

int main()
{
    char ch;
    int value = getRandomNumber();

    cout << "The 2-digit random number generated is " << value << endl;

    cout << "Would you like to double " << value << " (y|n)? " ;
    cin >> ch;
    if (toUserSelection(ch) == YES)
        value = doubleNumber(value);
    postOp(value);

    cout << "Would you like to raise " << value << " to the power of 2, 3, or 4 (y|n)? ";
    cin >> ch;
    if (toUserSelection(ch) == YES)
        value = expN(value);
    postOp(value);

    cout << "Would you like to sum the digits of " << value << " (y|n)? ";
    cin >> ch;
    if (toUserSelection(ch) == YES)
        value = sumDigits(value);
    postOp(value);

    cout << "Using \"" << value << "\" would you like to raise " << value / 10 << " to the power of " << value % 10
        << " (y|n)? ";
    cin >> ch;
    if (toUserSelection(ch) == YES)
        value = expByLastDigit(value);
    postOp(value);

    cout << "value = " << value << endl;

    return 0;
}

/**
 * Generates a two-digit random number between 10 and 100 (exclusive)
 * @return An integer within the range [10, 100)
 */
int getRandomNumber()
{
    srand(time(nullptr));
    int number = rand() % 90 + 10;
    return number;
}

userSelection toUserSelection(char ch)
{
    if (ch == 'Y' || ch == 'y')
        return YES;
    else
        return NO;
}

int doubleNumber(int num)
{
    return 2 * num;
}

int expN(int num)
{
    int exponent;
    cout << "Choose an exponent, 2,3 or 4: ";
    cin >> exponent;
    cout << endl;

    assert(exponent >= 2 && exponent <= 4);

    return static_cast<int>(pow(num, exponent));
}

int reverseDigits(int num)
{
    int reverse = 0;

    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    return reverse;
}

int sumDigits(int num)
{
    int sum = 0;
    while (num > 0)
    {
        sum = sum + num % 10;
        num = num / 10;
    }

    return sum;
}

int expByLastDigit(int num)
{
    int value;
    if (num < 100 || (num > 100 && num < 1000 && num % 10 <= 4))
        value = static_cast<int>(pow(num / 10, num % 10));
    else
        value = num;

    return value;
}

bool isPrime(int num)
{
    int divisor = 2;
    int x = static_cast<int>(sqrt(num));
    while (divisor <= x)
    {
        if (num % divisor == 0)
            return false;
        divisor++;
    }
    return true;
}

void postOp(int &num)
{
    num = num < 10 ? num + 10 : num;
    if (isPrime(num))
        cout << num << " is a prime number.\n" << endl;
}
