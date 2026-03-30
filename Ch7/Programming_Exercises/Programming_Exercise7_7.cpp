//
// Created by Pshypher on 25/03/2026.
//
#include <iostream>
#include <cassert>
#include <string>

using namespace std;

enum operationType {ADD, SUBTRACT, MULTIPLY, DIVIDE, NOOP};

void menu(string& op, int& a, int& b, int& c, int& d);
operationType toOperation(string& opStr);
void addFractions(int a, int b, int c, int d, int& e, int& f);
void subtractFractions(int a, int b, int c, int d, int& e, int& f);
void multiplyFractions(int a, int b, int c, int d, int& e, int& f);
void divideFractions(int a, int b, int c, int d, int& e, int& f);
int max(int a, int b);
int min(int a, int b);
int gcd(int a, int b);

int main()
{
    string op;
    int a, b, c, d, e, f;
    menu(op, a, b, c, d);
    switch (toOperation(op))
    {
        case ADD:
            addFractions(a, b, c, d, e, f);
            break;
        case SUBTRACT:
            subtractFractions(a, b, c, d, e, f);
            break;
        case MULTIPLY:
            multiplyFractions(a, b, c, d, e, f);
            break;
        case DIVIDE:
            divideFractions(a, b, c, d, e, f);
            break;
        default:
            cout << "Invalid operation '" << op << "'" << endl;
            return 1;
    }

    cout << a << '/' << b << " " << ((op == "/") ? "\u00F7" : op) << " " << c << '/' << d << " = " << e << '/' << f
        << endl;

    return 0;
}

void menu(string& op, int& a, int& b, int& c, int& d)
{
    cout << "This program was created to help perform basic arithmetic operations on fractions." << endl;
    cout << "You enter the symbol of the operation you want to perform followed by four integers operands,\n";
    cout << "which are the numerator and denominator of each of the fractions." << endl;
    cout << "+. for addition" << endl;
    cout << "-. for subtraction" << endl;
    cout << "*. for multiplication" << endl;
    cout << "/. for division" << endl;
    cout << "Enter the operator followed by four operands: ";
    cin >> op >> a >> b >> c >> d;

    assert(op == "+" || op == "-" || op == "*" || op == "/");
    assert(b != 0 && d != 0);
}

operationType toOperation(string& opStr)
{
    if (opStr == "+")
        return ADD;
    else if (opStr == "-")
        return SUBTRACT;
    else if (opStr == "*")
        return MULTIPLY;
    else if (opStr == "/")
        return DIVIDE;
    else
        return NOOP;
}

void addFractions(int a, int b, int c, int d, int &e, int &f)
{
    a = a * d;
    c = c * b;
    e = a + c;
    f = b * d;

    int x = gcd(max(e, f), min(e, f));
    e /= x;
    f /= x;
}

void subtractFractions(int a, int b, int c, int d, int &e, int &f)
{
    a = a * d;
    c = c * b;
    e = a - c;
    f = b * d;

    int x = gcd(max(e, f), min(e, f));
    e /= x;
    f /= x;
}

void multiplyFractions(int a, int b, int c, int d, int &e, int &f)
{
    e = a * c;
    f = b * d;

    int x = gcd(max(e, f), min(e, f));
    e /= x;
    f /= x;
}

void divideFractions(int a, int b, int c, int d, int &e, int &f)
{
    e = a * d;
    f = b * c;

    int x = gcd(max(e, f), min(e, f));
    e /= x;
    f /= x;
}

int max(int a, int b)
{
    int value = a > b ? a : b;
    return value;
}

int min(int a, int b)
{
    int value = a < b ? a : b;
    return value;
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}
