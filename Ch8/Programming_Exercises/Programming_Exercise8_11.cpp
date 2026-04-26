//
// Created by Pshypher on 24/04/2026.
//
#include <iostream>

using namespace std;

void readDigits(string str, int digits[]);
void initialize(int digits[], int length);
void sum(const int op1[], const int op2[], int res[], int lengthOperand, int& lengthSum);
void printSum(const int op1[], const int op2[], const int res[], int lengthOperand, int lengthSum);

const int LENGTH_DIGITS = 20;

int main()
{
    int operandOne[LENGTH_DIGITS];
    int operandTwo[LENGTH_DIGITS];
    int total[LENGTH_DIGITS + 1];
    int totalLength;
    string str;

    cout << "Enter first number(exactly 20 digits): ";
    cin >> str;
    readDigits(str, operandOne);

    cout << "Enter second number(exactly 20 digits): ";
    cin >> str;
    readDigits(str, operandTwo);

    initialize(total, LENGTH_DIGITS + 1);
    sum(operandOne, operandTwo, total, LENGTH_DIGITS, totalLength);

    printSum(operandOne, operandTwo, total, LENGTH_DIGITS, totalLength);

    return 0;
}

void readDigits(string str, int digits[])
{
    for (int i = 0; i < LENGTH_DIGITS; i++)
        digits[i] = str[str.length() - 1 - i] - '0';
}

void initialize(int digits[], int length)
{
    for (int i = 0; i < length; i++)
        digits[i] = 0;
}

void sum(const int op1[], const int op2[], int res[], int lengthOperand, int& lengthSum)
{
    int lastIndex = 0;
    for (int i = 0; i < lengthOperand; i++)
    {
        int result = op1[i] + op2[i];
        if (result >= 10)
        {
            res[i] = res[i] + result % 10;
            res[i + 1] = res[i + 1] + result / 10;
            lastIndex = i + 1;
        } else {
            res[i] = res[i] + result;
            lastIndex = i;
        }
    }
    lengthSum = lastIndex + 1;
}

void printSum(const int op1[], const int op2[], const int res[], int lengthOperand, int lengthSum)
{
    for (int i = lengthOperand - 1; i >= 0; i--)
        cout << op1[i];
    cout << " + ";
    for (int i = lengthOperand - 1; i >= 0; i--)
        cout << op2[i];
    cout << " = ";
    for (int i = lengthSum - 1; i >= 0; i--)
        cout << res[i];
}