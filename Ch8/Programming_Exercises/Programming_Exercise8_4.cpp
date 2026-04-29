//
// Created by Pshypher on 22/04/2026.
//
#include <iostream>
#include <fstream>

using namespace std;

const int ARRAY_LENGTH = 8;

int main()
{
    char dismiss;
    int score;
    int lastIndex;
    ifstream infile;

    string intervals[ARRAY_LENGTH] = {"0-24", "25-49", "50-74", "75-99", "100-124","125-149", "150-174", "175-200"};
    int count[ARRAY_LENGTH] = {0, 0, 0, 0, 0, 0, 0, 0};

    infile.open("../Ch8/Programming_Exercises/scores.dat");

    lastIndex = ARRAY_LENGTH - 1;
    infile >> score;
    while (infile)
    {
        int index = score / 25;
        if (index >= ARRAY_LENGTH)
            index = lastIndex;

        count[index]++;
        infile.get(dismiss);
        infile >> score;
    }

    for (int i = 0; i < ARRAY_LENGTH; i++)
        cout << count[i] << " students have scores in the range of " << intervals[i] << endl;

    infile.close();

    return 0;
}
