//
// Created by Pshypher on 07/05/2026.
//
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct computerType {
    string manufacturer;
    string modelType;
    string processorType;
    int RAMSize;
    int hardDriveSize;
    int year;
    double price;
};

int main()
{
    computerType computer;

    cout << "This program gets the data regarding a computer and outputs those details to standard output." << endl;
    cout << "---------------------------------------------------------------------------------------------" << endl;

    cout << "Enter the name of manufacturer: ";
    getline(cin, computer.manufacturer);
    cout << endl;

    cout << "Enter the type of the computer's model: ";
    getline(cin, computer.modelType);
    cout << endl;

    cout << "Enter the type of processor: ";
    getline(cin, computer.processorType);
    cout << endl;

    cout << "What is it's RAM size in GB? ";
    cin >> computer.RAMSize;
    cout << endl;

    cout << "What is the size of it's hard drive in GB? ";
    cin >> computer.hardDriveSize;
    cout << endl;

    cout << "What year was it manufactured? ";
    cin >> computer.year;
    cout << endl;

    cout << "What's the cost? ";
    cin >> computer.price;
    cout << endl;

    cout << fixed << showpoint << setprecision(2);

    cout << "Manufacturer: " << computer.manufacturer << endl;
    cout  << "Model: " << computer.modelType << endl;
    cout << "Processor: " << computer.processorType << endl;
    cout << "RAM: " << computer.RAMSize << " GB" << endl;
    cout << "Hard Drive Capacity: " << computer.hardDriveSize << " GB" << endl;
    cout << "Year of Manufacture: " << computer.year << endl;
    cout << "Price: $" << computer.price << endl;

    cout << endl;

    return 0;
}
