//
// Created by Pshypher on 23/04/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

void readData(string names[], int votes[], int candidates, int& index, int& total);
void getPercentVotes(double percentages[], int votes[], int candidates, int total);
void printResults(string names[], int votes[], double percentages[], int candidates, int index);

const int MAX_CANDIDATES = 5;

int main()
{
    string lastNames[MAX_CANDIDATES];
    int candidateVotes[MAX_CANDIDATES];
    double percentages[MAX_CANDIDATES];

    int maxIndex;
    int totalVotes;

    readData(lastNames, candidateVotes, MAX_CANDIDATES, maxIndex, totalVotes);
    getPercentVotes(percentages, candidateVotes, MAX_CANDIDATES, totalVotes);
    printResults(lastNames, candidateVotes, percentages, MAX_CANDIDATES, maxIndex);
    return 0;
}

void readData(string names[], int votes[], int candidates, int& index, int& total)
{
    index = 0;
    total = 0;
    for (int  i = 0; i < candidates; i++)
    {
        cout << "Enter candidate name and number of votes: ";
        cin >> names[i] >> votes[i];

        total += votes[i];
        if (votes[i] > votes[index])
            index = i;
    }
}

void getPercentVotes(double percentages[], int votes[], int candidates, int total)
{
    for (int i = 0; i < candidates; i++)
        percentages[i] = votes[i] * 1.0 / total * 100;
}

void printResults(string names[], int votes[], double percentages[], int candidates, int index)
{
    cout << fixed << showpoint << setprecision(2);

    cout << "Candidate" << "        " << "Votes Received" << "        " << "% of Total Votes" << endl;
    cout << endl;
    for (int i = 0; i < candidates; i++)
        cout << left << setw(15) << names[i] << "        " << setw(10) << votes[i] << "           "
            << percentages[i] << endl;
    cout << endl;
    cout << "The winner of the Election is " << names[index] << "." << endl;
}