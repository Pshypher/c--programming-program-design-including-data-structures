//
// Created by Pshypher on 24/04/2026.
//
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int NUMBER_OF_STUDENTS = 10;
const int NUMBER_OF_COURSES = 5;

void readScores(ifstream& infile, string names[], int scores[][NUMBER_OF_COURSES], int rowSize, int colSize);
void setGrade(const int scores[][NUMBER_OF_COURSES], int rowSize, int colSize, char grades[], double& avg);
char getGrade(double score);
void printResult(const string names[], const char grades[], int length, double avg);

int main()
{
    string studentNames[NUMBER_OF_STUDENTS];
    int testScores[NUMBER_OF_STUDENTS][NUMBER_OF_COURSES];
    char grades[NUMBER_OF_STUDENTS];
    ifstream infile;
    double totalAverage;

    infile.open("../Ch8/Programming_Exercises/test_scores.dat");
    readScores(infile, studentNames, testScores, NUMBER_OF_STUDENTS, NUMBER_OF_COURSES);
    setGrade(testScores, NUMBER_OF_STUDENTS, NUMBER_OF_COURSES, grades, totalAverage);
    double classAvg = totalAverage / 10;
    printResult(studentNames, grades, NUMBER_OF_STUDENTS, classAvg);

    infile.close();

    return 0;
}

void readScores(ifstream& infile, string names[], int scores[][NUMBER_OF_COURSES], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        infile >> names[i];
        for (int j = 0; j < colSize; j++)
            infile >> scores[i][j];
    }
}

void setGrade(const int scores[][NUMBER_OF_COURSES], int rowSize, int colSize, char grades[], double& avg)
{
    for (int i = 0; i < rowSize; i++)
    {
        int sum = 0;
        for (int j = 0; j < colSize; j++)
            sum += scores[i][j];
        double res = sum * 1.0 / colSize;
        avg += res;
        grades[i] = getGrade(res);
    }
}

char getGrade(double score)
{
    char grade;
    if (score >= 90)
        grade = 'A';
    else if (score >= 80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';
    else
        grade = 'F';

    return grade;
}

void printResult(const string names[], const char grades[], int length, double avg)
{
    cout << fixed << showpoint << setprecision(2);

    for (int i = 0; i < length; i++)
        cout << names[i] << "'s grade is " << grades[i] << endl;
    cout << endl;

    cout << "The class average is " << avg;
}
