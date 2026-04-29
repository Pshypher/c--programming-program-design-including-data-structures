//
// Created by Pshypher on 24/04/2026.
//
#include <iostream>

using namespace std;

const int ARRAY_LENGTH = 50;

int find(int list[], int value, int n, int startIndex = 0);

int main()
{
    int list[ARRAY_LENGTH];

    cout << "Enter " << ARRAY_LENGTH << " numbers: ";
    for (int i = 0; i < ARRAY_LENGTH; i++)
        cin >> list[i];
    cout << endl;

    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        int sum = list[i];
        for (int j = 0; j < ARRAY_LENGTH; j++)
        {
            if (i == j || sum < list[j])
                continue;

            int op1 = list[j];
            int op2 = sum - op1;
            int nextIndex = j + 1;
            if (nextIndex < ARRAY_LENGTH && find(list, op2, ARRAY_LENGTH, nextIndex) != - 1)
                cout << op1 << " + " << op2 << " = " << sum << endl;
        }
    }

    return 0;
}

int find(int list[], int value, int n, int startIndex)
{
    int index = -1;
    for (int i = startIndex; i < n; i++)
        if (list[i] == value)
            index = i;

    return index;
}