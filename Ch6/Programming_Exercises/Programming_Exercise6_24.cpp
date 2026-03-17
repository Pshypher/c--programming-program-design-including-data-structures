//
// Created by Pshypher on 14/03/2026.
//
#include <iostream>

using namespace std;

void getNumber(long long& num);
void classifyDigit(int num, int& oddCount, int& evenCount, int& zeroCount);
void printResult(int oddCount, int evenCount, int zeroCount, long long num);

int main()
{
    long long number;
    int oddCount = 0;
    int evenCount = 0;
    int zeroCount = 0;

    getNumber(number);

    long long copy = number;
    while (copy > 0)
    {
        int digit = copy % 10;
        classifyDigit(digit, oddCount, evenCount, zeroCount);
        copy = copy / 10;
    }

    printResult(oddCount, evenCount, zeroCount, number);

    return 0;
}

void getNumber(long long &num)
{
    cout << "Enter a very large integer (less than or equals 9223372036854775807): ";
    cin >> num;
    cout << endl;
}

void classifyDigit(int num, int& oddCount, int& evenCount, int& zeroCount)
{
    if (num % 2 == 0)
    {
        if (num == 0)
            zeroCount++;
        evenCount++;
    }
    else
        oddCount++;
}

void printResult(int oddCount, int evenCount, int zeroCount, long long num)
{
    cout << "There are " << oddCount << " odd numbers, " << zeroCount << " zeros and " << evenCount << " even numbers"
        << " in " << num << endl;
}
