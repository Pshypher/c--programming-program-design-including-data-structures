//
// Created by Pshypher on 07/03/2026.
//
#include <iostream>

using namespace std;

bool isVowel(char ch);

int main()
{
    cout << "isVowel(z): " << isVowel('z') << endl;
    cout << "isVowel(a): " << isVowel('a') << endl;
    cout << "isVowel(A): " << isVowel('A') << endl;
    cout << "isVowel(e): " << isVowel('e') << endl;
    cout << "isVowel(G): " << isVowel('G') << endl;
    cout << "isVowel(1): " << isVowel('1') << endl;

    return 0;
}

bool isVowel(char ch)
{
    ch = tolower(ch);
    bool isVowel = false;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        isVowel = true;

    return isVowel;
}

