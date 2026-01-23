//
// Created by Pshypher on 23/01/2026.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int numOfCookies;
    int numCookiesPerBox;
    int numBoxesPerContainer;

    cout << "Enter the total number of cookies: ";
    cin >> numOfCookies;
    cout << endl;

    cout << "Enter the number of cookies in a box: ";
    cin >> numCookiesPerBox;
    cout << endl;

    cout << "Enter the number of cookie boxes in a container: ";
    cin >> numBoxesPerContainer;
    cout << endl;

    int numOfBoxes = numOfCookies / numCookiesPerBox;
    int numCookiesWithoutBox = numOfCookies % numCookiesPerBox;
    int numOfContainers = numOfBoxes / numBoxesPerContainer;
    int numBoxesWithoutContainer = numOfBoxes % numBoxesPerContainer;

    string boxStr = (numOfBoxes > 1) ? "boxes" : "box";
    cout << numOfBoxes << ' ' << boxStr << " in total." << endl;

    if (numCookiesWithoutBox > 0) {
        string cookiesStr = (numCookiesWithoutBox > 1) ? "cookies" : "cookie";
        cout << numCookiesWithoutBox << ' ' << cookiesStr << " are left without a box." << endl;
    }

    cout << numOfContainers << " container(s) in total." << endl;

    if (numBoxesWithoutContainer > 0) {
        boxStr = (numBoxesWithoutContainer > 1) ? "boxes" : "box";
        cout << numBoxesWithoutContainer << ' ' << boxStr << " are left without container." << endl;
    }


    return 0;
}