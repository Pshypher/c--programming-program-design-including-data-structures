//
// Created by Pshypher on 22/04/2026.
//
#include <iostream>
#include <cctype>

using namespace std;

const int NUMBER_OF_STUDENTS = 31;

int main()
{
    char str[NUMBER_OF_STUDENTS];

    cout << "Enter a phrase (max 30 characters): ";
    cin.getline(str, NUMBER_OF_STUDENTS);
    cout << endl;

    for (int i = 0; i < NUMBER_OF_STUDENTS; i++)
    {
        int pos = static_cast<int>(str[i]);
        if (!(static_cast<int>('a') <= pos && pos <= static_cast<int>('z') || static_cast<int>('A') <= pos && pos <= static_cast<int>('Z')))
            continue;
        str[i] = static_cast<char>(toupper(str[i]));
    }


    cout << str << endl;
}