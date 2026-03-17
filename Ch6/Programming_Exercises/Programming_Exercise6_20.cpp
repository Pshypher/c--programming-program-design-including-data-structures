//*************************************************************
// Author: D.S. Malik
// Maintainer: Pshypher
//
// Program: Classify Numbers
// This program reads 20 numbers and outputs the number of
// zeros, odd, and even numbers.
//*************************************************************

#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int N = 20;

// Function prototypes
void initialize(int& zeroCount, int& oddCount, int& evenCount, int& sum, int& count);
void createInputFile(string filename, ifstream& inputFile);
void createOutputFile(string filename, ofstream& outputFile);
void getNumber(int& num, ifstream& inputFile);
void setNumber(int& num, int& count, int& sum, ofstream& outputFile);
void classifyNumber(int num, int& zeroCount, int& oddCount, int& evenCount);
void printResults(int zeroCount, int oddCount, int evenCount, int sum, double avg, ofstream& outputFile);
void closeFileStreams(ifstream& inputFile, ofstream& outputFile);

int main()
{
    // Variable declaration
    int counter;
    int number;
    int zeros;
    int odds;
    int evens;
    int sum;
    ifstream infile;
    ofstream outfile;

    initialize(zeros, odds, evens, sum, counter);
    createInputFile("numbers.txt", infile);
    createOutputFile("numbers.out", outfile);

    getNumber(number, infile);
    while (infile)
    {
        setNumber(number, counter, sum, outfile);
        classifyNumber(number, zeros, odds, evens);
        getNumber(number, infile);
    }

    double average = sum * 1.0 / counter;
    printResults(zeros, odds, evens, sum, average, outfile);

    closeFileStreams(infile, outfile);

    return 0;
}

void initialize(int& zeroCount, int& oddCount, int& evenCount, int& sum, int& count)
{
    zeroCount = 0;
    oddCount = 0;
    evenCount = 0;
    sum = 0;
    count = 0;
}

void createInputFile(string filename, ifstream& inputFile)
{
    inputFile.open("../Ch6/Programming_Exercises/" + filename);
}

void createOutputFile(string filename, ofstream& outputFile)
{
    outputFile.open("../Ch6/Programming_Exercises/" + filename);
}

void getNumber(int& num, ifstream& inputFile)
{
    inputFile >> num;
}

void setNumber(int& num, int& count, int& sum, ofstream& outputFile)
{
    outputFile << num << ' ';
    sum = sum + num;
    count++;
    if (count % 10 == 0)
        outputFile << endl;
}

void classifyNumber(int num, int& zeroCount, int& oddCount, int& evenCount)
{
    switch (num % 2)
    {
        case 0:
            evenCount++;
            if (num == 0)
                zeroCount++;
            break;
        case 1:
        case -1:
            oddCount++;
    }
}

void printResults(int zeroCount, int oddCount, int evenCount, int sum, double avg, ofstream& outputFile)
{
    outputFile << "There are " << evenCount << " evens, " << "which includes " << zeroCount << " zeros" << endl;
    outputFile << "The number of odd numbers is: " << oddCount << endl;

    outputFile << "The sum of the numbers is: " << sum << endl;
    outputFile << "The average of the numbers is: " << avg << endl;
}

void closeFileStreams(ifstream& inputFile, ofstream& outputFile)
{
    inputFile.close();
    outputFile.close();
}
