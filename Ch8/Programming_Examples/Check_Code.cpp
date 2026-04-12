//************************************************************
// Author: D.S. Malik
//
// Program: Check Code
// This program determines whether a code is transmitted
// correctly.
//************************************************************
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int MAX_CODE_SIZE = 250;

void readCode(ifstream& infile, int list[], int& length, bool& lenCodeOk);
void compareCode(ifstream& infile, ofstream& outfile, const int list[], int length);

int main()
{
    int codeArray[MAX_CODE_SIZE];   // array to store the secret code
    int codeLength;                 // variable to store the length of the secret code
    bool lengthCodeOk;              // variable to indicate if the length of the secret code is less than or equal to 250
    ifstream incode;                // input file stream variable
    ofstream outcode;               // output file stream variable

    char inputFile[51];             // variable to store the name of the input file
    char outputFile[51];            // variable to store the name of the output file

    cout << "Enter the input file name: ";
    cin >> inputFile;
    cout << endl;

    incode.open(inputFile);
    if (!incode)
    {
        cout << "Cannot open the input file." << endl;
        return 1;
    }

    cout << "Enter the output file name: ";
    cin >> outputFile;
    cout << endl;

    outcode.open(outputFile);

    readCode(incode, codeArray, codeLength, lengthCodeOk);

    if (lengthCodeOk)
        compareCode(incode, outcode, codeArray, codeLength);
    else
        cout << "Length of the secret code must be <= " << MAX_CODE_SIZE << endl;

    incode.close();
    outcode.close();

    return 0;
}

void readCode(ifstream &infile, int list[], int &length, bool &lenCodeOk)
{
    lenCodeOk = true;

    infile >> length; // get the length of the secret code

    if (length > MAX_CODE_SIZE)
    {
        lenCodeOk = false;
        return;
    }

    // Get the secret code.
    for (int count = 0; count < length; count++)
        infile >> list[count];
}

void compareCode(ifstream &infile, ofstream &outfile, const int list[], int length)
{
    int length2;
    int digit;
    bool codeOk;

    codeOk = true;

    infile >> length2;

    if (length != length2)
    {
        cout << "The original code and its copy are not of the same length." << endl;
        return;
    }

    outfile << "Code Digit     Code Digit Copy" << endl;

    for (int count = 0; count < length; count++)
    {
        infile >> digit;
        outfile << setw(5) << list[count] << setw(17) << digit;

        if (digit != list[count])
        {
            outfile << "  code digits are not the same" << endl;
            codeOk = false;
        }
        else
            outfile << endl;
    }

    if (codeOk)
        outfile << "Message transmitted OK." << endl;
    else
        outfile << "Error in transmission. Retransmit!!" << endl;
}
