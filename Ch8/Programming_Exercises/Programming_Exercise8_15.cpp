//
// Created by Pshypher on 26/04/2026.
//
#include <iostream>

using namespace std;

void selectionSort(int list[], int length);
int getSmallestIndex(const int list[], int startIndex, int length);
void swap(int list[], int i, int j);
int find(int list[], int value, int startIndex, int endIndex);

const int ARRAY_LENGTH = 50;

int main()
{
    int list[ARRAY_LENGTH];

    cout << "Enter " << ARRAY_LENGTH << " numbers: ";
    for (int i = 0; i < ARRAY_LENGTH; i++)
        cin >> list[i];
    cout << endl;

    selectionSort(list, ARRAY_LENGTH);

    for (int i = 2; i < ARRAY_LENGTH; i++)
    {
        int sum = list[i];
        for (int j = 0; j < i; j++)
        {
            int op1 = list[j];
            int op2 = sum - op1;
            if (find(list, op2, j + 1, i) != - 1)
                cout << op1 << " + " << op2 << " = " << sum << endl;
        }
    }

    return 0;
}

void selectionSort(int list[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int minIndex = getSmallestIndex(list, i, length);
        swap(list, i, minIndex);
    }
}

int getSmallestIndex(const int list[], int startIndex, int length)
{
    int minIndex = startIndex;
    for (int i = startIndex + 1; i < length; i++)
        if (list[minIndex] > list[i])
            minIndex = i;

    return minIndex;
}

void swap(int list[], int i, int j)
{
    int temp = list[i];
    list[i] = list[j];
    list[j] = temp;
}

int find(int list[], int value, int startIndex, int endIndex)
{
    int index = -1;
    for (int i = startIndex; i <= endIndex; i++)
        if (list[i] == value)
            index = i;

    return index;
}
