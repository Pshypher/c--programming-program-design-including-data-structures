//
// Created by Pshypher on 28/04/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

const int PRIME_NUMBERS_SIZE = 1230;

void setTestParameter(int& m);
void setPrimeNumbers(int primes[], int length);
bool isPrime(int value);

int main()
{
    int primeNumbers[PRIME_NUMBERS_SIZE];
    int t;

    setTestParameter(t);
    if (t < 2 || t > 100000000)
    {
        cout << t << " is not between 2 and 100,000,000" << endl;
        return -1;
    }

    setPrimeNumbers(primeNumbers, PRIME_NUMBERS_SIZE);

    bool isPrime = true;
    for (int num : primeNumbers)
    {
        if (t == num)
            break;

        if (t % num == 0)
        {
            cout << num << " is a prime factor of " << t << endl;
            isPrime = false;
        }
    }
    cout << endl;

    if (isPrime)
        cout << t << " is a prime number." << endl;
    else
        cout << t  << " is not a prime number." << endl;

    return 0;
}

void setTestParameter(int &m)
{
    cout << "Enter a number between 2 and 100,000,000: ";
    cin >> m;
    cout << endl;
}

void setPrimeNumbers(int primes[], int length)
{
    int num = 2;
    int count = 0;
    while (count < length)
    {
        if (isPrime(num))
        {
            primes[count] = num;
            count++;
        }
        num++;
    }
}

bool isPrime(int value)
{
    int root = static_cast<int>(sqrt(value));
    for (int n = 2; n <= root; n++)
        if (value % n == 0)
            return false;

    return true;
}
