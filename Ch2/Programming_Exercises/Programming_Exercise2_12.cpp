//
// Created by FMY-979 on 25/12/2025.
//
#include <iostream>
using namespace std;

const int PER_MINUTE = 60;
const int PER_HOUR = 3600;

int main()
{
    int seconds;

    cout << "Enter the total amount in seconds elapsed: ";
    cin >> seconds;
    cout << endl;

    cout << seconds / PER_HOUR << ':';
    seconds = seconds % PER_HOUR;
    cout << seconds / PER_MINUTE << ':';
    cout << seconds % PER_MINUTE << endl;

    return 0;
}