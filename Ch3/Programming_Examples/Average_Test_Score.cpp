//************************************************************
// Author: Pshypher
//
// Program to calculate the average test score.
// Given a student's name and five test scores, this program
// calculates the average test score. The student's name, the
// five test scores, and the average test score are stored in
// the file testavg.out. The data is input from the file
// test.txt.
//************************************************************
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    ifstream inFile;    // input file stream variable
    ofstream outFile;   // output file stream variable

    double test1, test2, test3, test4, test5;
    double average;

    string firstName;
    string lastName;

    inFile.open("../Ch3/Programming_Examples/test.txt");
    outFile.open("../Ch3/Programming_Examples/testavg.out");

    outFile << fixed << showpoint;
    outFile << setprecision(2);

    cout << "Processing data" << endl;

    inFile >> firstName >> lastName;
    outFile << "Student name: " << firstName << " " << lastName << endl;

    inFile >> test1 >> test2 >> test3 >> test4 >> test5;
    outFile << "Test scores: " << setw(6) << test1 << setw(6) << test2 << setw(6) << test3
        << setw(6) << test4 << setw(6) << test5 << endl;

    average = (test1 + test2 + test3 + test4 + test5) / 5.0;

    outFile << "Average test score: " << setw(6) << average << endl;

    inFile.close();
    outFile.close();

    return 0;
}