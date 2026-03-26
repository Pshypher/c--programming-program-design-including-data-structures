//
// Created by Pshypher on 26/03/2026.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;

    cout << "Enter a string of characters: ";
    getline(cin, str);
    cout << endl;

    int sum = 0;
    for (char c : str)
        sum += static_cast<unsigned char>(c);

    cout << "The sum of the collating sequence of \"" << str << "\" is " <<  sum << endl;

    return 0;
}