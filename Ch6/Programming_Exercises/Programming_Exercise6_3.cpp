//
// Created by Pshypher on 08/03/2026.
//
#include <iostream>

using namespace std;

bool isVowel(char ch);

int main()
{
    char ch;
    int count = 0;

    cout << "Enter a sequence of characters(halt with a period): ";
    cin.get(ch);

    while (ch != '.')
    {
        if (isVowel(ch))
            count = count + 1;

        cin.get(ch);
    }

    cout << "The number of vowels is: " << count << endl;

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