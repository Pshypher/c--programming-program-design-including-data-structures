//
// Created by Pshypher on 24/03/2026.
//
#include <iostream>

using namespace std;

void removeVowels(string& str);
bool isVowel(char ch);

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << endl;

    cout << "After removing all vowels from \"" << str;
    removeVowels(str);
    cout << "\" we're left with \"" << str << "\"." << endl;
    return 0;
}

void removeVowels(string &str)
{
    int index = 0;
    while (index < str.length())
    {
        if (isVowel(str[index]))
            str = str.substr(0, index) + str.substr(index + 1, str.length() - index - 1);
        else
            index++;
    }
}

bool isVowel(char ch)
{
    switch (static_cast<char>(tolower(ch)))
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            return true;
        default:
            return false;
    }
}
