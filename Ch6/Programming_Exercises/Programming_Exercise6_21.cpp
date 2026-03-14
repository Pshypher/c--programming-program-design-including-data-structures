//
// Created by Pshypher on 14/03/2026.
//
#include <iostream>

using namespace std;

void getDate(int& month, int& day, int& year);
bool isLeapYear(int year);
int calculateDayInYear(int month, int day, int year);

int main()
{
    int month;
    int day;
    int year;

    getDate(month, day, year);
    int numberOfDays = calculateDayInYear(month, day, year);
    cout << month << '-' << day << '-' << year << " day of the year corresponds to: " << numberOfDays << endl;

    return 0;
}

void getDate(int &month, int &day, int &year)
{
    char discard;
    cout << "Enter the date (mm-dd-yyyy): ";
    cin >> month;
    cin.get(discard);
    cin >> day;
    cin.get(discard);
    cin >> year;
    cout << endl;
}

bool isLeapYear(int year)
{
    return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}

int calculateDayInYear(int month, int day, int year)
{
    int days = 0;
    for (int m = 1; m < month; ++m)
    {
        switch (m)
        {
            case 4:
            case 6:
            case 9:
            case 11:
                days += 30;
                break;
            case 2:
                if (isLeapYear(year))
                    days += 29;
                else
                    days += 28;
                break;
            default:
                days += 31;
        }
    }

    return day + days;
}
