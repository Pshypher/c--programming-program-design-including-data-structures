//
// Created by Pshypher on 24/12/2025.
//
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    double studyHours;

    cout << "Enter student name and study hours split by a whitespace: ";
    cin >> name >> studyHours;
    cout << endl;

    cout << "Hello, " << name << "! on Saturday, you need to study " << studyHours << " hours for the exam." << endl;

    return 0;
}