// Given the distance traveled by an object at some n units
// of time, this program determines the average speed of the object
// at each n units interval of time.

#include <iostream>
#include <iomanip>

using namespace std;

const int SIZE = 7;

void getData(double distance[], int time[], int length);
void averageSpeedOverTimeInterval(const double distance[], const int time[], int length, double avgSpeed[]);
double maxAvgSpeed(const double avgSpeed[], int length);
double minAvgSpeed(const double avgSpeed[], int length);
void print(const double distance[], const int time[], int length, const double avgSpeed[]);


int main()
{
    double distanceTraveled[SIZE];
    int unitsOfTime[SIZE];
    double averageSpeed[SIZE - 1];

    cout << fixed << showpoint << setprecision(2);

    getData(distanceTraveled, unitsOfTime, SIZE);
    averageSpeedOverTimeInterval(distanceTraveled, unitsOfTime, SIZE, averageSpeed);
    print(distanceTraveled, unitsOfTime, SIZE, averageSpeed);

    cout << "Maximum average speed: " << maxAvgSpeed(averageSpeed, SIZE -  1) << endl;
    cout << "Minimum average speed: " << minAvgSpeed(averageSpeed, SIZE - 1) << endl;

    return 0;
}

void getData(double distance[], int time[], int length)
{
    cout << "Enter the total distance traveled after each units of time entered." << endl;
    for (int index = 0; index < length; index++)
    {
        cout << "Enter total distance traveled and the time it took: ";
        cin >> distance[index] >> time[index];
        cout << endl;
    }
}

void averageSpeedOverTimeInterval(const double distance[], const int time[], int length, double avgSpeed[])
{
    for (int index = 0; index < length - 1; index++)
        avgSpeed[index] = (distance[index + 1] - distance[index]) / (time[index + 1] - time[index]);
}

double maxAvgSpeed(const double avgSpeed[], int length)
{
    double max = avgSpeed[0];

    for (int index = 1; index < length; index++)
        if (avgSpeed[index] > max)
            max = avgSpeed[index];

    return max;
}

double minAvgSpeed(const double avgSpeed[], int length)
{
    double min = avgSpeed[0];

    for (int index = 1; index < length; index++)
        if (avgSpeed[index] < min)
            min = avgSpeed[index];

    return min;
}

void print(const double distance[], const int time[], int length, const double avgSpeed[])
{
    cout << setw(7) << "Time " << setw(20) << "Distance Traveled  " << setw(10)
        << "Average Speed / Time Interval" << endl;

    cout << setw(5) << 0 << setw(14) << distance[0] << setw(6) << " " << setw(10) << 0 << "  [0, 0] " << endl;

    for (int index = 1; index < length; index++)
        cout << setw(5) << time[index] << setw(14) << distance[index] << setw(6) << " " << setw(10)
            << avgSpeed[index - 1] << "  [" << time[index - 1] << ", " << time[index] << "]" << endl;
}