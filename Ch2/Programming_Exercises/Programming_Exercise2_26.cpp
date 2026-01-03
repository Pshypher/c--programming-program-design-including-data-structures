//
// Created by Pshypher on 27/12/2025.
//
#include <iostream>
using namespace std;

const int SURFACE_AREA_VOLUME_RATIO = 120;

int main()
{
    double doorLength;
    double doorWidth;
    double windowLength;
    double windowWidth;
    double bookShelfLength;
    double bookShelfWidth;
    double roomLength;
    double roomWidth;
    double roomHeight;

    cout << "Enter the length and width of the door separated by a whitespace: ";
    cin >> doorLength >> doorWidth;
    cout << endl;

    cout << "Enter the length and width of each window separated by a whitespace: ";
    cin >> windowLength >> windowWidth;
    cout << endl;

    cout << "Enter the length and width of the book shelf separated by a whitespace: ";
    cin >> bookShelfLength >> bookShelfWidth;
    cout << endl;

    cout << "Enter the length, width and height of the room, each separated by a whitespace: ";
    cin >> roomLength >> roomWidth >> roomHeight;
    cout << endl;

    double totalSurfaceArea = 2 * roomHeight * (roomLength + roomWidth);
    totalSurfaceArea -= doorLength * doorWidth;
    totalSurfaceArea -= 2 * windowLength * windowWidth;
    totalSurfaceArea -= bookShelfLength * bookShelfWidth;

    cout << totalSurfaceArea / SURFACE_AREA_VOLUME_RATIO << " gallon(s) is needed to paint the walls of the room."
        << endl;

    return 0;
}