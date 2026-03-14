//
// Created by Pshypher on 13/03/2026.
//

// This program reads a course score and prints the associated course grade.

#include <iostream>

using namespace std;

void getScore(int& score);
char calculateGrade(int score);

int main()
{
    int courseScore = 0;
    char grade;

    cout << "Line 8: Based on the course score, \n        this program computes the course grade." << endl;

    getScore(courseScore);
    grade = calculateGrade(courseScore);

    cout << "Line 21: The course grade is: " << grade << '.' << endl;

    return 0;
}

void getScore(int& score)
{
    cout << "Line 15: Enter course score: ";
    cin >> score;
    cout << endl << "Line 17: The course score is " << score << endl;
}

char calculateGrade(int courseScore)
{
    char grade;

    if (courseScore >= 90)
        grade = 'A';
    else if (courseScore >= 80)
        grade = 'B';
    else if (courseScore >= 70)
        grade = 'C';
    else if (courseScore >= 60)
        grade = 'D';
    else
        grade = 'F';

    return grade;
}