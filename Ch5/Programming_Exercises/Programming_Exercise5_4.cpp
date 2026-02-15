//
// Created by Pshypher on 11/02/2026.
//
#include <iostream>
#include <string>

using namespace std;

const int DIGITS = 7;

int main() {

    char response;

    cout << "Would you like to enter a telephone number? (y|Y): ";
    cin >> response;
    cout << endl;

    while (response == 'y' || response == 'Y')
    {
        // Translates a single alphabet to a telephone digit
        char letter;
        int digit, num;
        int count = 0;

        cout << "Enter a stream of letters: ";
        while (count < DIGITS) {
            cin >> letter;
            if ('A' <= letter && letter <= 'Z')
                num = static_cast<int>(letter) - static_cast<int>('A');
            else if ('a' <= letter && letter <= 'z')
                num = static_cast<int>(letter) - static_cast<int>('a');
            else
                continue;

            digit = num / 3 + 2;
            if (num % 3 == 0 && num / 3 == 6  || num / 3 == 7)
                digit = digit - 1;
            else if (digit > 9)
                digit = 9;

            cout << digit;
            count++;

            if (count == 3)
                cout << '-';
        }
        cout << endl;

        string str;
        getline(cin, str);

        cout << "Would you like to enter another telephone number? (y|Y): ";
        cin >> response;
        cout << endl;
    }

    return 0;
}