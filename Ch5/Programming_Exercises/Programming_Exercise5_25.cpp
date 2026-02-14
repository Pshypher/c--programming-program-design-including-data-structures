//
// Created by Pshypher on 14/02/2026.
//
#include <iostream>
#include <fstream>

using namespace std;

const int SENTINEL = -999;

int main()
{
    int num;
    ifstream inFile;

    inFile.open("../Ch5/Examples/Exp_5_23.txt");
    inFile >> num;
    int count = 0;
    while (inFile)
    {
        int sum = 0;
        while (num != SENTINEL)
        {
            sum = sum + num;
            inFile >> num;
        }

        count = count + 1;
        cout << "Line " << count << ": Sum = " << sum << endl;
        inFile >> num;
    }

    inFile.close();

    return 0;
}