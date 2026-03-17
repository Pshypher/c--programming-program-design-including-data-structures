//
// Created by Pshypher on 08/03/2026.
//
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

bool isPrime(int num);
int addPrime(int num, int& sum);
bool isTwinPrime(int x, int y);

int main()
{
    int m, n;
    int sum = 0;
    int numOfTwinPrimes = 0;

    cout << "Enter two positive numbers less than 1,000,000,000: ";
    cin >> m >> n;

    assert(m < 1000000000 && n < 1000000000);
    assert(m >= 0 && n >= 0);
    assert(m < n);

    for (int i = m; i <= n; i++)
    {
        if (isPrime(i))
        {
            addPrime(i, sum);
            if (isTwinPrime(i, i + 2))
            {
                if (numOfTwinPrimes > 0)
                    cout << ", (";
                else
                    cout << '(' ;

                cout << i << ',' << i + 2 << ')';
                numOfTwinPrimes = numOfTwinPrimes + 1;
            }
        }
    }

    cout << endl;

    cout << "sum of prime numbers: " << sum << endl;
    cout << "number of twin primes: " << numOfTwinPrimes << endl;

    return 0;
}

bool isPrime(int num)
{
    if (num < 2)
        return false;

    int root = static_cast<int>(sqrt(num));

    int x = 2;
    while (x <= root)
    {
        if (num % x == 0)
            return false;

        x++;
    }

    return true;
}

int addPrime(int num, int& sum)
{
    sum = sum + num;
}

bool isTwinPrime(int x, int y)
{
    return abs(x - y) == 2 && isPrime(y);
}