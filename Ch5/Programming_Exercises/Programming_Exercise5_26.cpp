//
// Created by Pshypher on 14/02/2026.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int const SENTINEL = -999;

int main()
{
    char ch;
    int ID;
    string name;

    ifstream inFile;

    inFile.open("../Ch5/Examples/Exp_5_25.txt");
    inFile >> ID;
    while (inFile)
    {
        inFile.get(ch);
        getline(inFile, name);

        int sum = 0;
        int num;
        inFile >> num;
        while (num != SENTINEL)
        {
            sum = sum + num;
            inFile >> num;
        }

        cout << "Name: " << name << ", Votes: " << sum << endl;
        inFile >> ID;
    }

    inFile.close();

    return 0;
}