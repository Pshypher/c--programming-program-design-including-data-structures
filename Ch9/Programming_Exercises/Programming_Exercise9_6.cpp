//
// Created by Pshypher on 10/05/2026.
//
#include <cctype>
#include <cstring>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

const int NUMBER_OF_ALPHABETS = 26;
const string PARENT_DIRECTORY = "../Ch9/Programming_Exercises/";

struct alphabetFrequency {
    char alphabet;
    int frequency;
    double percentage;
};

void openInputFile(ifstream& inData);
void openOutputFile(ofstream& outData);
void initialize(char start, alphabetFrequency letters[], int length);
void count(ifstream& inData, alphabetFrequency upper[], alphabetFrequency lower[], int length, long& total);
void calculatePercentage(alphabetFrequency letters[], int length, long total);
void printResult(ofstream& outData, alphabetFrequency upper[], alphabetFrequency lower[], int length);

int main()
{
    ifstream infile;
    ofstream outfile;

    alphabetFrequency lowercaseLetters[NUMBER_OF_ALPHABETS];
    alphabetFrequency uppercaseLetters[NUMBER_OF_ALPHABETS];
    long total;

    openInputFile(infile);
    if (!infile)
    {
        cout << "No such file or directory." << endl;
        return 1;
    }

    openOutputFile(outfile);

    initialize('a', lowercaseLetters, NUMBER_OF_ALPHABETS);
    initialize('A', uppercaseLetters, NUMBER_OF_ALPHABETS);

    count(infile, uppercaseLetters, lowercaseLetters, NUMBER_OF_ALPHABETS, total);

    outfile << fixed << showpoint << setprecision(2);
    printResult(outfile, uppercaseLetters, lowercaseLetters, NUMBER_OF_ALPHABETS);

    infile.close();
    outfile.close();

    return 0;
}

void openInputFile(ifstream &inData)
{
    string filename;

    cout << "Enter the name of the source of the text: ";
    cin >> filename;
    cout << endl;

    inData.open((PARENT_DIRECTORY + filename).c_str());
}

void openOutputFile(ofstream &outData)
{
    string filename;

    cout << "Enter the name of the output file: ";
    cin >> filename;
    cout << endl;

    outData.open((PARENT_DIRECTORY + filename).c_str());
}

void initialize(char start, alphabetFrequency letters[], int length)
{
    for (int i = 0; i < length; i++)
    {
        letters[i].alphabet = static_cast<char>(start + i);
        letters[i].frequency = 0;
    }
}

void count(ifstream &inData, alphabetFrequency upper[], alphabetFrequency lower[], int length, long& total)
{
    string word;
    inData >> word;
    while (inData)
    {
        unsigned long long len = strlen(word.c_str());
        for (int i = 0; i < len; i++)
        {
            if (isalpha(word[i]))
            {
                if (isupper(word[i]))
                    upper[word[i] - 'A'].frequency++;
                else
                    lower[word[i] - 'a'].frequency++;
                total++;
            }
        }
        inData >> word;
    }

    calculatePercentage(upper, length, total);
    calculatePercentage(lower, length, total);
}

void calculatePercentage(alphabetFrequency letters[], int length, long total)
{
    for (int i = 0; i < length; i++)
        letters[i].percentage = 100.0 * letters[i].frequency / total;
}

void printResult(ofstream& outData, alphabetFrequency upper[], alphabetFrequency lower[], int length)
{
    int sumUpper = 0;
    int sumLower = 0;

    outData << " Letter " << "  " << " Count " << "  " << " Percentage " << endl;
    outData << "------------------------------" << endl;
    for (int i = 0; i < length; i++)
    {
        sumUpper += upper[i].frequency;
        sumLower += lower[i].frequency;

        outData << left;

        if (upper[i].frequency > 0)
            outData << "    " << setw(4) << upper[i].alphabet << "  " << right << setw(6)
                << upper[i].frequency << "  " << setw(8) << upper[i].percentage << '%' << endl;

        outData << left;

        if (lower[i].frequency > 0)
            outData << "    " << setw(4) << lower[i].alphabet << "  " << right << setw(6)
                << lower[i].frequency << "  " << setw(8) << lower[i].percentage << '%' << endl;
    }

    outData << endl << endl;

    outData << "Total number of lowercase letters: " << sumLower << endl;
    outData << "Total number of uppercase letters: " << sumUpper << endl;
}