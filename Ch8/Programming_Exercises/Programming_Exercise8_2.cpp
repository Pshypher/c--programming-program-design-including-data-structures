//
// Created by Pshypher on 22/04/2026.
//

#include <iostream>

using namespace std;

int smallestIndex(const int list[], int length);

const int LENGTH = 10;

int main()
{
    int list[] = {2, 56, 34, 25, 73, 46, 89, 10, -5, 16};
    int minIndex = smallestIndex(list, LENGTH);
    cout << "The smallest element " << list[minIndex] << " is at index: " << minIndex << endl;
    return 0;
}

int smallestIndex(const int list[], int length)
{
    int minIndex = 0;
    for (int i = 1; i < length; i++)
        if (list[i] < list[minIndex])
            minIndex = i;

    return minIndex;
}