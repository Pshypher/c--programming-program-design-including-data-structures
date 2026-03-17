//
// Created by Pshypher on 17/03/2026.
//
// Program: Second degree polynomial factorization

#include <iostream>
#include <cmath>

using namespace std;

void factorization(int a, int b, int c, int& s1, int& t1, int& u1, int& v1, bool& isFactorable);
int gcd(int a, int b);

int main()
{
    int coeffOfXSquare;
    int coeffOfX;
    int constantTerm;
    int s;
    int t;
    int u;
    int v;
    bool isPolynomialFactorable;

    cout << "Enter the coefficient of x^2: ";
    cin >> coeffOfXSquare;
    cout << endl;

    cout << "Enter the coefficient of x: ";
    cin >> coeffOfX;
    cout << endl;

    cout << "Enter the constant term: ";
    cin >> constantTerm;
    cout << endl;

    factorization(coeffOfXSquare, coeffOfX, constantTerm, s, t, u, v, isPolynomialFactorable);

    if (isPolynomialFactorable)
    {
        if (coeffOfXSquare == 1)
            cout << "x^2";
        else if (coeffOfXSquare < 1)
            cout << coeffOfXSquare << "x^2";

        if (coeffOfX > 0)
            cout << " + " << coeffOfX << "x";
        else if (coeffOfX < 0)
            cout << " - " << abs(coeffOfX) << "x";

        if (constantTerm > 0)
            cout << " + " << constantTerm;
        else if (constantTerm < 0)
            cout << " - " << abs(constantTerm);

        cout << " = (";
        if (abs(s) != 1)
            cout << s << 'x';
        else
            cout << 'x';

        if (u > 0)
            cout << " - " << u ;
        else if (u < 0)
            cout << " + " << abs(u);

        cout << ")(";

        if (abs(t) != 1)
            cout << t << 'x';
        else
            cout << 'x';

        if (v > 0)
            cout << " - " << v << ")" << endl;
        else if (v < 0)
            cout << " + " << abs(v) << ")" << endl;
    }
    else
        cout << "The polynomial is not factorable." << endl;

    return 0;
}

void factorization(int a, int b, int c, int& s1, int& t1, int &u1, int &v1, bool& isFactorable)
{
    double discriminant;
    int temp;

    isFactorable = true;

    discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
        isFactorable = false;
    else
    {
        temp = static_cast<int>(sqrt(discriminant));

        if (temp * temp != discriminant)
            isFactorable = false;
        else
        {
            int gcd1 = gcd(-b + temp, 2 * a);
            int gcd2 = gcd(-b - temp, 2 * a);
            if (abs(gcd1) == 1|| abs(gcd2) == 1)
                isFactorable = false;
            else
            {
                u1 = (-b + temp) / gcd1;    // numerator
                s1 = 2 * a / gcd1;          // denominator

                v1 = (-b - temp) / gcd2;    // numerator
                t1 = 2 * a / gcd2;          // denominator
            }

            // multiply one of the roots by -1 if a is less than 0
            if (a < 0)
            {
                if (abs(s1) > 1)
                {
                    s1 = -s1;
                    u1 = -u1;
                }
                else
                {
                    t1 = -t1;
                    v1 = -v1;
                }
            }
        }
    }
}

int gcd(int a, int b)
{
    while (b != 0)
    {
        int temp = a;
        a = b;
        b = temp % b;
    }

    return a;
}
