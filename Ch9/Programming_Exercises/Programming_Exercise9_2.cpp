//
// Created by Pshypher on 07/05/2026.
//
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

struct studentType {
    string studentFName;
    string studentLName;
    int testScore;
    char grade;
};

const string PARENT_DIRECTORY = "../Ch9/Programming_Exercises/";
const int NUMBER_OF_STUDENTS = 20;

void getInputFileName(string& file);
void getOutputFileName(string& file);
void getStudentsData(ifstream& inData, studentType list[], int length);
char getStudentGrade(int score);
void writeStudentData(ofstream& outfile, studentType list[], int length);
void writeHighestTestScore(ofstream& outfile, studentType list[], int length);

int main()
{
    ifstream infile;
    ofstream outfile;
    string filename;
    studentType students[NUMBER_OF_STUDENTS];

    getInputFileName(filename);
    infile.open((PARENT_DIRECTORY + filename).c_str());

    if (!infile)
    {
        cout << "File " <<  PARENT_DIRECTORY + filename << " does not exists." << endl;
        return 1;
    }

    getStudentsData(infile, students, NUMBER_OF_STUDENTS);

    getOutputFileName(filename);
    outfile.open((PARENT_DIRECTORY + filename).c_str());
    writeStudentData(outfile, students, NUMBER_OF_STUDENTS);

    writeHighestTestScore(outfile, students, NUMBER_OF_STUDENTS);

    return 0;
}

void getInputFileName(string& file)
{
    cout << "Enter the students file name: ";
    cin >> file;
    cout << endl;
}

void getOutputFileName(string& file)
{
    cout << "Enter the name of the destination file: ";
    cin >> file;
    cout << endl;
}

void getStudentsData(ifstream& inData, studentType list[], int length)
{
    int index = 0;
    inData >> list[index].studentFName;

    while (inData)
    {
        inData >> list[index].studentLName;
        inData >> list[index].testScore;
        list[index].grade = getStudentGrade(list[index].testScore);
        index++;

        inData >> list[index].studentFName;
    }
}

char getStudentGrade(int score)
{
    char result;
    if (score >= 90)
        result = 'A';
    else if (score >= 80)
        result = 'B';
    else if (score >= 70)
        result = 'C';
    else if (score >= 60)
        result = 'D';
    else
        result = 'F';

    return result;
}

void writeStudentData(ofstream& outfile, studentType list[], int length)
{
    outfile << "Full Name              Test Score  Grade   " << endl;
    outfile << "-------------------------------------------" << endl;
    for (int i = 0; i < length; i++)
    {
        string fullNames = list[i].studentLName + ", " + list[i].studentFName;
        outfile << left << setw(21) << fullNames << "     " << setw(5) << list[i].testScore << "  "
            << right << setw(3) << list[i].grade << endl;
    }

    outfile << endl << endl;
}

void writeHighestTestScore(ofstream& outfile, studentType list[], int length)
{
    int maxIndex = 0;

    for (int i = 1; i < length; i++)
    {
        if (list[maxIndex].testScore < list[i].testScore)
            maxIndex = i;
    }

    outfile << "Student with the highest test score: "
        << list[maxIndex].studentLName + ", " + list[maxIndex].studentFName << endl;
    outfile << "Highest test score: " << list[maxIndex].testScore;
    outfile << endl;
}
