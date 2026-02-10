//
// Created by Pshypher on 10/02/2026.
//
#include <iostream>

using namespace std;

int main()
{
    char ch;
    int sum = 0;

    cout << "Enter a number: ";
    cin.get(ch);

    while ('0' <= ch && ch <= '9' || ch == '-')
    {
        if (ch == '-')
        {
            cin.get(ch);
            continue;
        }

        int digit = static_cast<int>(ch) - static_cast<int>('0');
        sum = sum + digit;
        cout << digit << " ";
        cin.get(ch);
    }

    cout << endl;
    cout << "sum = " << sum;

    return 0;
}