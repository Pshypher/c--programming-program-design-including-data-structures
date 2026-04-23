//
// Created by Pshypher on 23/04/2026.
//
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int NUMBER_OF_STUDENTS = 1;
const int NUMBER_OF_QUESTIONS = 21;

void readAnswer(ifstream &infile, char answer[]);
void readStudentAnswers(int index, ifstream &infile, string ids[], char responses[][NUMBER_OF_QUESTIONS]);
void getScore(double scores[], const char answer[], const char responses[][NUMBER_OF_QUESTIONS], int numStudents);
void getGrades(double scores[], char studentGrades[], int numStudents);
void printGrades(const string ids[], const char responses[][NUMBER_OF_QUESTIONS], const double scores[],
                 const char grades[], int numStudents);

int main()
{
    string studentId[NUMBER_OF_STUDENTS];
    char studentAnswers[NUMBER_OF_STUDENTS][NUMBER_OF_QUESTIONS];
    double scores[NUMBER_OF_STUDENTS];
    char grades[NUMBER_OF_STUDENTS];
    char answers[NUMBER_OF_QUESTIONS];

    ifstream infile;
    infile.open("../Ch8/Programming_Exercises/student_test_answers.dat");
    readAnswer(infile, answers);
    readStudentAnswers(0, infile, studentId, studentAnswers);
    getScore(scores, answers, studentAnswers, NUMBER_OF_STUDENTS);
    getGrades(scores, grades, NUMBER_OF_STUDENTS);
    printGrades(studentId, studentAnswers, scores, grades, NUMBER_OF_STUDENTS);

    infile.close();

    return 0;
}

void readAnswer(ifstream &infile, char answer[])
{
    infile >> answer;
}

void readStudentAnswers(int index, ifstream &infile, string ids[], char responses[][NUMBER_OF_QUESTIONS])
{
    char dismiss;

    infile >> ids[index];
    while (infile)
    {
        infile.get(dismiss);
        infile.getline(responses[index], 100);
        if (infile.eof())
            break;
        infile >> ids[index];
    }
}

void getScore(double scores[], const char answer[], const char responses[][NUMBER_OF_QUESTIONS], int numStudents)
{
    for (int i = 0; i < numStudents; i++)
    {
        int totalScore = 0;
        for (int j = 0; j < NUMBER_OF_QUESTIONS; j++)
            if (answer[j] == responses[i][j])
                totalScore += 2;
            else if (responses[i][j] == ' ')
                continue;
            else
                totalScore--;

        totalScore = totalScore > 0 ? totalScore : 0;
        scores[i] = totalScore * 1.0 / (NUMBER_OF_QUESTIONS * 2.0) * 100;
    }
}

void getGrades(double scores[], char studentGrades[], int numStudents)
{
    for (int i = 0; i < numStudents; i++)
    {
        double score = scores[i];
        if (score >= 90)
            studentGrades[i] = 'A';
        else if (score >= 80)
            studentGrades[i] = 'B';
        else if (score >= 70)
            studentGrades[i] = 'C';
        else if (score >= 60)
            studentGrades[i] = 'D';
        else
            studentGrades[i] = 'F';
    }
}

void printGrades(const string ids[], const char responses[][NUMBER_OF_QUESTIONS], const double scores[],
                 const char grades[], int numStudents)
{
    cout << "Student ID" << "        " << "Answers" << "         " << setw(6) << "Score" << "  " << "Grade" << endl;
    for (int i = 0; i < numStudents; i++)
        cout << left << setw(12) << ids[i] << responses[i] << "  " << setw(6) << right << scores[i] << "    "
            << left << grades[i] << endl;
}
