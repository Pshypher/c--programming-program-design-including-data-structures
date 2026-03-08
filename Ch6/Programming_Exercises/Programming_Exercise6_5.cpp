//
// Created by Pshypher on 08/03/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

bool isWhiteSpace(char ch);
bool func(double num1, double num2, double num3);

int main()
{

    cout << "isWhiteSpace(' '): " << isWhiteSpace(' ') << endl;
    cout << "isWhitespace('t'): " << isWhiteSpace('t') << endl;
    cout << "isWhitespace('^'): " << isWhiteSpace('^') << endl;
    cout << "isWhitespace('\\t'): " << isWhiteSpace('\t') << endl;
    cout << "isWhitespace('*'): " << isWhiteSpace('*') << endl;
    cout << "isWhitespace('\\n'): " << isWhiteSpace('\n') << endl;

    cout << endl;

    cout << "func(8.342, 2.893, 16.5930): " << func(8.342, 2.893, 16.5930) << endl;
    cout << "func(5.056, 5.0043, 25.24945): " << func(5.056, 5.0043, 25.24945) << endl;
    cout << "func(238.3434, 8.2329, 2434.2312): " << func(238.3434, 8.2329, 2434.2312) << endl;

    return 0;
}

bool isWhiteSpace(char ch)
{
    return ch == ' ' || ch == '\n' || ch == '\t';
}

bool func(double num1, double num2, double num3)
{
    return floor(num1 * num2) == floor(num3);
}

