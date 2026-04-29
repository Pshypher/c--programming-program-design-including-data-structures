//
// Created by Pshypher on 26/04/2026.
//
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

const int NUM_HOURS_OVERTIME_THRESHOLD = 40;
const double PAY_RATE_OVERTIME = 1.5;

const int NUM_EMPLOYEES = 10;
const int ROW_SIZE = NUM_EMPLOYEES;
const int COL_SIZE = 3;

void readFile(ifstream& infile, string names[], double payslip[][COL_SIZE], int length);
double getWeeklyPay(double hours, double rate);
double getAverageWeeklyPay(double payslip[][COL_SIZE], int rowSize);
void printHighIncomeEarners(double average, string names[], double payslip[][COL_SIZE], int length);
void printEmployeeData(string names[], double payslip[][COL_SIZE], int length);

int main()
{
    double payslip[ROW_SIZE][COL_SIZE];
    string employees[NUM_EMPLOYEES];
    ifstream infile;

    infile.open("../Ch8/Programming_Exercises/employees.dat");

    readFile(infile, employees, payslip, NUM_EMPLOYEES);

    cout << fixed << showpoint << setprecision(2);
    for (int i = 0; i < ROW_SIZE; i++)
        payslip[i][2] = getWeeklyPay(payslip[i][0], payslip[i][1]);

    double average = getAverageWeeklyPay(payslip, ROW_SIZE);

    cout << endl;

    printHighIncomeEarners(average, employees, payslip, NUM_EMPLOYEES);

    cout << endl;

    printEmployeeData(employees, payslip, NUM_EMPLOYEES);

    infile.close();

    return 0;
}

void readFile(ifstream &infile, string names[], double payslip[][COL_SIZE], int length)
{
    for (int i = 0; i < length; i++)
    {
        infile >> names[i];
        infile >> payslip[i][0] >> payslip[i][1];
        payslip[i][2] = 0;
    }
}

double getWeeklyPay(double hours, double rate)
{
    double wages;
    if (hours > NUM_HOURS_OVERTIME_THRESHOLD)
       wages =  NUM_HOURS_OVERTIME_THRESHOLD * rate +
           (NUM_HOURS_OVERTIME_THRESHOLD - hours) * PAY_RATE_OVERTIME * rate;
    else
        wages = hours * rate;

    return wages;
}

double getAverageWeeklyPay(double payslip[][COL_SIZE], int rowSize)
{
    double total = 0;
    for (int i = 0; i < rowSize; i++)
        total += payslip[i][2];

    return total / rowSize;
}

void printHighIncomeEarners(double average, string names[], double payslip[][COL_SIZE], int length)
{
    cout << "These are the names of the employees earning at or above $" << average << endl;
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (payslip[i][2] >= average)
        {
            if (count > 0) cout << ", ";
            cout << names[i];
            count++;
        }
    }
    cout << endl;
}

void printEmployeeData(string names[], double payslip[][COL_SIZE], int length)
{
    cout << "Last Name      " << "  " << "Hours Worked" << "  " << setw(6) << " $/Hour" << "  "
        << " $/Week " <<  endl;
    for (int i = 0; i < length; i++)
        cout << left << setw(16) << names[i] << "       " << setw(6) << payslip[i][0] << "  " << setw(6) << right
            << payslip[i][1] << "  " << setw(8) << payslip[i][2] << endl;
}