//*************************************************************
// Author: D.S. Malik
//
// Program: Pig Latin Strings
// This program reads a string and outputs the pig latin form
// of the string.
//*************************************************************

#include <iostream>
#include <string>

using namespace std;

bool isVowel(char ch);
string rotate(string pStr);
string toPigLatin(string pStr);

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;
    cout << endl;

    cout << "The pig Latin form of " << str << " is: " << toPigLatin(str) << endl;

    return 0;
}

bool isVowel(char ch)
{
    ch = static_cast<char>(toupper(ch));
    switch (ch)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case'Y':
            return true;
        default:
            return false;
    }
}

string rotate(string pStr)
{
    string::size_type len = pStr.length();

    string rStr;

    rStr = pStr.substr(1, len - 1) + pStr[0];

    return rStr;
}

string toPigLatin(string pStr)
{
    string::size_type len;

    bool foundVowel;

    string::size_type counter;

    if (isVowel(pStr[0]))
        pStr = pStr + "-way";
    else
    {
        pStr = pStr + '-';
        pStr = rotate((pStr));

        len = pStr.length();
        foundVowel = false;

        for (counter = 1; counter < len - 1; counter++)
            if (isVowel(pStr[0]))
            {
                foundVowel = true;
                break;
            }
            else
                pStr = rotate(pStr);

        if (!foundVowel)
            pStr = pStr.substr(1, len) + "-way";
        else
            pStr = pStr + "ay";
    }

    return pStr;
}