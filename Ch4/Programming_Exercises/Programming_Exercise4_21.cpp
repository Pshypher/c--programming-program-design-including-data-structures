//
// Created by Pshypher on 25/01/2026.
//
#include <iostream>
#include <iomanip>
# include <cmath>

using namespace std;

int main() {

    double x1;
    double y1;
    double x2;
    double y2;

    double slope;
    double yIntercept;

    cout << fixed << showpoint << setprecision(1);

    cout << "Enter the values of the two points on the x-y coordinate plane (x1, y1, x2, y2): ";
    cin >> x1 >> y1 >> x2 >> y2;
    cout << endl;

    if (x1 != x2) {
        slope = (y2 - y1) / (x2 - x1);
        yIntercept = -slope * x1 + y1;
        cout << "The equation of the line l is y = " << slope << "x ";
        char sign = yIntercept >= 0 ? '+' : '-';
        cout << sign << " " << fabs(yIntercept) << endl;
        if (slope > 0)
            cout << "The slope of the line is increasing" << endl;
        else if (slope < 0)
            cout << "The slope of the line is decreasing" << endl;
        else
            cout << "The line is horizontal" << endl;
    } else {
        cout << "The equation of the line l is x = " << x1 << endl;
        cout << "The line is vertical" << endl;
    }

    return 0;
}