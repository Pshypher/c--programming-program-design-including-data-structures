//
// Created by Pshypher on 27/12/2025.
//
#include <iostream>
using namespace std;

int main()
{
    double perimeter;
    double frameWidth;

    cout << "Enter the length of the wire: ";
    cin >> perimeter;
    cout << endl;

    frameWidth = perimeter / 5;
    cout << "Frame width: " << frameWidth << ", frame length: " << 1.5  * frameWidth << endl;

    return 0;
}