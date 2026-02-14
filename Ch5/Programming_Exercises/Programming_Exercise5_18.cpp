//
// Maintained by Pshypher on 14/02/2026.
//
// Program: Sentinel-Controlled Loop
// This program computes and outputs the total number of boxes of
// cookies sold, the total revenue, and the average number of
// boxes sold by each volunteer.

#include <fstream>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inFile;

    inFile.open("../Ch5/Programming_Exercises/Ch5_cookie_Data.txt");

    string name;
    int numOfVolunteers;
    int numOfBoxesSold;
    int totalNumOfBoxesSold;
    double costOfOneBox;

    cout << fixed << showpoint << setprecision(2);

    cout << "Reads each volunteer's name and the number of boxes " << endl
        << "         sold by each volunteer, from Ch5_cookie_Data.txt: " << endl;

    totalNumOfBoxesSold = 0;
    numOfVolunteers = 0;

    inFile >> costOfOneBox;

    while (!inFile.eof())
    {
        inFile >> name;
        inFile >> numOfBoxesSold;
        totalNumOfBoxesSold = totalNumOfBoxesSold + numOfBoxesSold;
        numOfVolunteers++;
    }

    inFile.close();

    cout << endl;

    cout << "The total number of boxes sold: " << totalNumOfBoxesSold << endl;

    cout << "The total money made by selling cookies: $" << totalNumOfBoxesSold * costOfOneBox << endl;

    if (numOfVolunteers != 0)
        cout << "The average number of boxes sold by each volunteer: "
            << totalNumOfBoxesSold / numOfVolunteers << endl;
    else
        cout << "No input." << endl;

    return 0;
}