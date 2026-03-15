//
// Created by Pshypher on 15/03/2026.
//
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

void displayPromptOptions();
void getTime(int& hour, int& minutes);
void getTime(int& hour, int& minutes, string& meridiem);
void toStandardTime(int& hour, string& meridiem);
void toMilitaryTime(int& hour, string meridiem);
void displayTime(int hour, int minutes);
void displayTime(int hour, int minutes, string meridiem);

int main()
{
    int choice;
    int hour;
    int minutes;
    string meridiem;

    displayPromptOptions();

    cin >> choice;
    switch (choice)
    {
        case 1:
            getTime(hour, minutes);
            toStandardTime(hour, meridiem);
            displayTime(hour, minutes, meridiem);
            break;
        case 2:
            getTime(hour, minutes, meridiem);
            toMilitaryTime(hour, meridiem);
            displayTime(hour, minutes);
            break;
        default:
            cout << "Invalid choice. Please enter 1 or 2.\n";
            return 1;
    }

    return 0;
}

void displayPromptOptions()
{
    cout << "Program to convert time between 12-hour and 24-hour clock formats." << endl;
    cout << "1. To convert a 24-hour clock to a 12-hour clock format.\n";
    cout << "2. To convert a 12-hour clock to a 24-hour clock format.\n";
    cout << "Enter your choice: ";
}

void getTime(int &hour, int &minutes)
{
    char discard;
    cout << "Please enter the time in the following 24-hour format: HH:MM\n";
    cin >> hour;
    cin.get(discard);
    cin >> minutes;
    cout << endl;
}

void getTime(int &hour, int &minutes, string &meridiem)
{
    char discard;
    cout << "Please enter the time in the following format: HH:MM AM/PM\n";
    cin >> hour;
    cin.get(discard);
    cin >> minutes;
    cin >> meridiem;
    cout << endl;
}

void toStandardTime(int& hour, string& meridiem)
{
    if (hour >= 12)
        meridiem = "PM";
    else
        meridiem = "AM";

    hour = hour % 12;
    if (hour % 12 == 0)
        hour =  12;
}

void toMilitaryTime(int &hour, string meridiem)
{
    if (meridiem == "PM" || (hour == 12 && meridiem == "AM"))
        hour += 12;

    if (hour == 24)
        hour = 0;
}

void displayTime(int hour, int minutes)
{
    cout << "Military time is " << setfill('0') << setw(2) << hour << ":" << setw(2) << minutes << endl;
}

void displayTime(int hour, int minutes, string meridiem)
{
    cout << "Standard time is " << setfill('0') << setw(2) << hour << ":" << setw(2) << minutes << " "
        << meridiem << endl;
}

