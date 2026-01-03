//
// Created by Pshypher on 24/12/2025.
//
#include <iostream>
using namespace std;

int main()
{
    double score1;
    double score2;
    double score3;
    double score4;
    double score5;
    double average;

    cout << "Enter five test scores(decimals) separated by whitespaces: ";
    cin >> score1 >> score2 >> score3 >> score4 >> score5;
    cout << endl;

    cout << "score1 = " << score1 << ", score2 = " << score2 << ", score3 = " << score3 << ", score4 = " << score4
        << ", score5 = " << score5 << endl;
    average = (score1 + score2 + score3 + score4 + score5) / 5;
    cout << "average = " << average;
}