//
// Created by Pshypher on 22/04/2026.
//
#include <iostream>

using namespace std;

const int LENGTH = 50;

int main()
{
    double alpha[LENGTH];

    int half = LENGTH / 2;
    for (int i = 0; i < half; i++)
    {
        alpha[i] = i * i;
        alpha[i + half] = 3 * (i + half);
    }

    for (int i = 1; i <= LENGTH; i++)
    {
        cout << alpha[i - 1] << " ";
        if (i % 10 == 0)
            cout << endl;
    }


    return 0;
}