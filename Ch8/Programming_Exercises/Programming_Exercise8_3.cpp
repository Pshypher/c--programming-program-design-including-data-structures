//
// Created by Pshypher on 22/04/2026.
//
#include <iostream>

using namespace std;

int lastLargestIndex(const int list[], int length);

const int ARRAY_LENGTH = 10;

int main()
{
    int list[] = {2, 56, 34, 25, 73, 46, 89, 10, -5, 16};
    int lastIndex = lastLargestIndex(list, ARRAY_LENGTH);
    cout << "The last largest element " << list[lastIndex] << " is at index: " << lastIndex << endl;
    return 0;
}

int lastLargestIndex(const int list[], int length)
{
    int lastIndex = 0;
    for (int i = 1; i < length; i++)
        if (list[i] >= list[lastIndex])
            lastIndex = i;

    return lastIndex;
}