//*************************************************************
// Author: D.S. Malik
//
// Program: Line and Letter Count
// This programs reads a text, outputs the text as is, and also
// prints the number of lines and the number of times each
// letter appears in the text. An uppercase letter and a
// lowercase letter are treated as being the same; that is,
// they are tallied together.
//*************************************************************
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void initialize(int &lc, int list[]);

void copyText(ifstream &intext, ofstream &outtext, char &ch, int list[]);

void characterCount(char ch, int list[]);

void writeTotal(ofstream &outtext, int lc, int list[]);

int main()
{
    int lineCount;
    int letterCount[26];
    char ch;
    ifstream infile;
    ofstream outfile;

    infile.open("textin.txt");

    if (!infile)
    {
        cout << "Cannot open the input file." << endl;
        return 1;
    }

    outfile.open("textout.out");

    initialize(lineCount, letterCount);

    infile.get(ch);

    while (infile)
    {
        copyText(infile, outfile, ch, letterCount);
        lineCount++;
        infile.get(ch);
    }

    writeTotal(outfile, lineCount, letterCount);

    infile.close();
    outfile.close();

    return 0;
}

void initialize(int &lc, int list[])
{
    lc = 0;

    for (int j = 0; j < 26; j++)
        list[j] = 0;
}

void copyText(ifstream &intext, ofstream &outtext, char &ch, int list[])
{
    while (intext && ch != '\n') // process the entire line
    {
        outtext << ch; // output the character

        characterCount(ch, list); // call the function character count
        intext.get(ch);
    }
    outtext << ch; // output the newline character
}

void characterCount(char ch, int list[])
{
    int index;

    ch = toupper(ch);

    index = static_cast<int>(ch) - static_cast<int>('A');

    if (0 <= index && index < 26)
        list[index]++;
}

void writeTotal(ofstream &outtext, int lc, int list[])
{
    outtext << endl;
    outtext << "The number of lines = " << lc << endl;

    for (int index = 0; index < 26; index++)
        outtext << static_cast<char>(static_cast<int>('A') + index) << " count = " << list[index] << endl;
}
