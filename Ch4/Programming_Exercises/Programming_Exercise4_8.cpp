//
// Created by Pshypher on 23/01/2026.
//
#include <iostream>

using namespace std;

int main()
{
    int x, y;
    char op;


    cout << "Enter two integers separated by an operator (x op y)" << endl;
    cout << "op is one of the following: +, -, *, /, %: ";
    cin >> x >> op >> y;
    cout << endl;

    switch (op) {
        case '+':
            cout << x << " + " << y << " = " << x + y << endl;
            break;
        case '-':
            cout << x << " - " << y << " = " << x - y << endl;
            break;
        case '*':
            cout << x << " * " << y << " = " << x * y << endl;
            break;
        case '/':
            if (y == 0)
                cout << "Cannot perform division with a zero denominator." << endl;
            else
                cout << x << " / " << y << " = " << x / y << endl;
            break;
        case '%':
            if (y == 0)
                cout << "Cannot find the modulo of " << x <<  " with a zero denominator." << endl;
            else
                cout << x << " % " << y << " = " << x % y << endl;
            break;
        default:
            cout << op << " not one of (+, -, *, /, %)." << endl;
    }

    return 0;
}