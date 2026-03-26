//
// Created by Pshypher on 25/03/2026.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void alterName(string& names);

int main()
{
    ifstream infile;
    ofstream outfile;

    infile.open("../../Ch7/Programming_Exercises/names.txt");
    outfile.open("../../Ch7/Programming_Exercises/namesOut.dat");

    cout << "Processing..." << endl;

    string fullname;
    getline(infile, fullname);
    while (infile)
    {
        alterName(fullname);
        outfile << fullname << endl;
        getline(infile, fullname);
    }

    infile.close();
    outfile.close();

    return 0;
}

void alterName(string& names)
{
    string lastName;

    string::size_type pos = names.find(',');
    lastName = names.substr(0, pos);

    string::size_type len = names.length() - pos - 2;
    names = names.substr(pos + 2, len) + ' ' + lastName;
}
