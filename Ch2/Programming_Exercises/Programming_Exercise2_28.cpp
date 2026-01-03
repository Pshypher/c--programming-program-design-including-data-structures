//
// Created by Pshypher on 27/12/2025.
//
#include <iostream>
using namespace std;

int main()
{
    double numberOfStudents;
    double caloriesPerStudent;
    double caloriesPerPoundOfNut;

    cout << "Enter the number of students: ";
    cin >> numberOfStudents;
    cout << endl;

    cout << "Enter the number of calories required per student: ";
    cin >> caloriesPerStudent;
    cout << endl;

    cout << "Enter the number of calories in each pound of nut: ";
    cin >> caloriesPerPoundOfNut;
    cout << endl;

    double totalCaloriesInNuts = 0.7 * numberOfStudents * caloriesPerStudent / 1.7;
    double amountOfNuts = totalCaloriesInNuts / caloriesPerPoundOfNut;

    // Since a mixture of equal amounts of nuts and dried fruit is used
    // the variable "amountOfNuts" is the same as the amount of dried fruits used.
    cout << amountOfNuts << " pounds each is used for both nuts and dried fruits." << endl;

    return 0;
}