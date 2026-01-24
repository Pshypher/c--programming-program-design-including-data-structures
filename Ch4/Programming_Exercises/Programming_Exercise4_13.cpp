//
// Created by Pshypher on 23/01/2026.
//
#include <iostream>

using namespace std;

int main()
{

    double length, width;
    cout << "Enter the length and width (in inches): ";
    cin >> length >> width;
    cout << endl;

    double top, bottom, left, right;
    cout << "Enter the size of the top, bottom, left and right margins (in inches): ";
    cin >> top >> bottom >> left >> right;
    cout << endl;

    double pointSize;
    cout << "Enter the point size of a character: ";
    cin >> pointSize;
    cout << endl;

    char spacing;
    cout << "Enter s|d for single or double line spacing respectively:  ";
    cin >> spacing;
    cout << endl;

    // Deduct the top, bottom, left and right margin from the length and width of the paper
    length -= top + bottom;
    width -= left + right;

    // Convert the width of the paper from inches to points and calculate the number of characters on a line
    int numOfCharacterInLine = static_cast<int>(width * 72 / pointSize);

    // Calculate the total number of lines using the character's point size
    int totalNumOfLines = static_cast<int>(length *  72 / pointSize);

    int numPrintableLines;
    switch (spacing) {
        case 's':
            if (totalNumOfLines % 2 == 0)
                numPrintableLines = totalNumOfLines / 2;
            else
                numPrintableLines = totalNumOfLines / 2 + 1;
            break;
        case 'd':
            if (totalNumOfLines % 3 == 0)
                numPrintableLines = totalNumOfLines / 3;
            else
                numPrintableLines = totalNumOfLines / 3 + 1;
            break;
        default:
            cout << spacing << " is unrecognized." << endl;
            return 1;
    }

    cout << "Number of characters in a line is: " << numOfCharacterInLine << endl;
    cout << "Number of lines with printable characters is: " << numPrintableLines << endl;

    return 0;
}