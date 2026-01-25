//
// Created by Pshypher on 25/01/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char category;
    char dimension;
    double diagonal;

    double length;
    double width;
    double area;

    cout << fixed << showpoint << setprecision(2);

    cout << "Enter the category of the TV (t|T for Traditional, l|L for LCD): ";
    cin >> category;
    cout << endl;

    cout << "Enter the diagonal of the TV(in inches): ";
    cin >> diagonal;
    cout << endl;

    cout << "Enter the dimension of the TV you would like to compute(l|L for screen length, w|W for screen width, " <<
            "a|A for screen area): ";
    cin >> dimension;
    cout << endl;

    switch (category) {
        case 't':
        case 'T':
            length = diagonal * 4.0 / 7.0;
            width = length * 3.0 / 4.0;
            area = length * width;
            break;
        case 'l':
        case 'L':
            length = diagonal * 16.0 / 25.0;
            width = length * 9.0 / 16.0;
            area = length * width;
            break;
        default:
            cout << "No such category " << category << " exists." << endl;
            return 1;
    }

    switch (dimension) {
        case 'l':
        case 'L':
            cout << "The length is: " << length << " inches." << endl;
            break;
        case 'w':
        case 'W':
            cout << "The width is: " << width << " inches." << endl;
            break;
        case 'a':
        case 'A':
            cout << "The area is: " << area << " square inch." << endl;
            break;
        default:
            cout << "No such dimension " << dimension << " exists." << endl;
            return 1;
    }

    return 0;

}