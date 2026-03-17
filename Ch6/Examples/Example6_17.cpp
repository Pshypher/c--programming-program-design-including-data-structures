//Menu driven program.

#include <iostream>

using namespace std;

const double CONVERSION = 2.54;
const int INCHES_IN_FOOT = 12;
const int CENTIMETERS_IN_METER = 100;

void showChoices();
void feetAndInchesToMetersAndCent(int ft, int in, int& mt, int& cm);
void metersAndCentToFeetAndInches(int mt, int cm, int& ft, int& in);

int main()
{
    int feet, inches;
    int meters, centimeters;
    int choice;

    do
    {
        showChoices();
        cin >> choice;
        cout << endl;

        switch (choice)
        {
            case 1:
                cout << "Enter feet and inches: ";
                cin >> feet >> inches;
                cout << endl;
                feetAndInchesToMetersAndCent(feet, inches, meters, centimeters);
                cout << feet << " feet(foot), " << inches << " inch(es) = " << meters << " meter(s), " <<
                    centimeters << " centimeter(s)." << endl;
                break;
            case 2:
                cout << "Enter meters and centimeters: ";
                cin >> meters >> centimeters;
                cout << endl;
                metersAndCentToFeetAndInches(meters, centimeters, feet, inches);
                cout << meters << " meter(s), " << centimeters << " centimeter(s) = " <<
                    feet << " feet(foot), " << inches << " inch(es)." << endl;
                break;
            case 99:
                break;
            default:
                cout << "Invalid input." << endl;
        }
    }
    while (choice != 99);

    return 0;
}

void showChoices()
{
    cout << "Enter--" << endl;
    cout << "1: To convert from feet and inches to meters and centimeters." << endl;
    cout << "2: To convert from meters and centimeters to feet and inches." << endl;
    cout << "99: To quit the program." << endl;
}

void feetAndInchesToMetersAndCent(int ft, int in, int& mt, int& cm)
{
    int inches;

    inches = ft * INCHES_IN_FOOT + in;
    cm = static_cast<int>(inches * CONVERSION);
    mt = cm / CENTIMETERS_IN_METER;
    cm = cm % CENTIMETERS_IN_METER;
}

void metersAndCentToFeetAndInches(int mt, int cm, int& ft, int& in)
{
    int centimeters;

    centimeters = mt * CENTIMETERS_IN_METER + cm;
    in = static_cast<int>(centimeters / CONVERSION);
    ft = in / INCHES_IN_FOOT;
    in = in % INCHES_IN_FOOT;
}