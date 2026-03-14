//
// Created by Pshypher on 14/03/2026.
//
#include <iostream>
#include <string>

using namespace std;

int numberOfLowercaseVowels(string& str);

int main()
{
    string line;
    cout << "Enter a phrase, clause or sentence: ";
    getline(cin, line);
    cout << endl;

    int count = numberOfLowercaseVowels(line);
    cout << "Number of lowercase vowels: " << count << endl;

    return 0;
}

int numberOfLowercaseVowels(string &str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }

    return count;
}
