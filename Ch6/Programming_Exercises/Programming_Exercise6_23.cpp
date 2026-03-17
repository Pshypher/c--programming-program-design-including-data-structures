//
// Created by Pshypher on 14/03/2026.
//
#include <iostream>
#include <string>

using namespace std;

void numberOfLowercaseVowels(char ch, int& a, int& e, int& i, int& o, int& u);

int main()
{
    string line;
    int count_a = 0;
    int count_e = 0;
    int count_i = 0;
    int count_o = 0;
    int count_u = 0;

    cout << "Enter a phrase, clause or sentence: ";
    getline(cin, line);
    cout << endl;

    for (int i = 0; i < line.length(); i++)
    {
        char ch = line[i];
        numberOfLowercaseVowels(ch, count_a, count_e, count_i, count_o, count_u);
    }

    cout << "frequency of a = " << count_a << endl;
    cout << "frequency of e = " << count_e << endl;
    cout << "frequency of i = " << count_i << endl;
    cout << "frequency of o = " << count_o << endl;
    cout << "frequency of u = " << count_u << endl;

    return 0;
}

void numberOfLowercaseVowels(char ch, int& a, int& e, int& i, int& o, int& u)
{
    switch (ch)
    {
        case 'a':
            a++;
            break;
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'u':
            u++;
            break;
        default:
            break;
    }
}
