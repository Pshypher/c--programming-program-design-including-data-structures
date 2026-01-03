//
// Created by Pshypher on 25/12/2025.
//
#include <iostream>
using namespace std;

const double K = 1000000000.0 / 1073741824.0;

int main()
{
    double size;

    cout << "Enter the size(GB) of the hard drive: ";
    cin >> size;
    cout << endl;

    cout << size * K << " GB is the actual size of the hard disk drive." << endl;

    return 0;
}