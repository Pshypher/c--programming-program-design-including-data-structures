//*************************************************************
// Author: D.S. Malik
// Maintainer: Pshypher
//
// Program: Pig Latin Strings
// This program reads a string and outputs the pig latin form
// of the string.
//*************************************************************

#include <iostream>
#include <string>

using namespace std;

const string PUNCTUATIONS = ".,;:!?";

bool isVowel(char ch);
string rotate(string pStr);
string pigLatinString(string line);
string toPigLatin(string pStr);
/**
 *
 * @param pStr string to be converted to pig-latin
 * @param suffix set of characters that @param pStr could end up with
 * @return true if @param pStr ends with one of the characters in @param suffix, false otherwise
 */
bool endsWith(string pStr, string suffix);

int main()
{
    string sentence;

    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << endl;

    cout << "The pig Latin form of \"" << sentence << "\" is: \"" << pigLatinString(sentence) << "\"" << endl;

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

string pigLatinString(string line)
{
    string word = "";
    string pigLatinSentence = "";
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ')
        {
            pigLatinSentence += toPigLatin(word) + line[i];
            word = "";
        }
        else
            word = word + line[i];
    }

    if (!word.empty())
        pigLatinSentence += toPigLatin(word);

    return pigLatinSentence;
}

string toPigLatin(string pStr)
{
    string::size_type len;

    bool foundVowel;

    string::size_type counter;

    bool endsWithPunctuation = false;
    char suffix;
    if (endsWith(pStr, PUNCTUATIONS))
    {
        suffix = pStr[pStr.length() - 1];
        pStr = pStr.substr(0, pStr.length() - 1);
        endsWithPunctuation = true;
    }

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

    if (endsWithPunctuation)
        pStr = pStr + suffix;

    return pStr;
}

bool endsWith(string pStr, string suffix)
{
    string::size_type ind;

    ind = pStr.find_first_of(suffix);

    return ind != string::npos && ind == pStr.length() - 1;
}
