//
// Created by Pshypher on 14/02/2026.
//
#include <iostream>
#include <fstream>

using namespace std;

const int SENTINEL = -999;

int main()
{
    ifstream inFile;

    inFile.open("../Ch5/Examples/Exp_5_23.txt");

    for (int i = 1; i <= 5; i++)
    {
        int num, sum = 0;
        inFile >> num;
        while (num != SENTINEL)
        {
            sum = sum + num;
            inFile >> num;
        }

        cout << "Line " << i << ": Sum = " << sum << endl;
    }

    inFile.close();

    return 0;
}