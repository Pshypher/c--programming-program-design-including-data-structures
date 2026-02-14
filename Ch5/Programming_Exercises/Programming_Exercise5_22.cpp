//
// Created by Pshypher on 14/02/2026.
//
#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}