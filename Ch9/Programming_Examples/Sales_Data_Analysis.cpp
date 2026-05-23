//*************************************************************
// Author: D.S. Malik
//
// Program: Sales Data Analysis
// This program processes sales data for a company. For each
// salesperson, it outputs the ID, the total sales by each
// quarter, and the total sales for the year. It also outputs
// the salesperson’s ID generating the maximum sale for the
// year and the sales amount. The quarter generating the
// maximum sale and the sales amount is also output.
//*************************************************************
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

const int NO_OF_SALES_PERSON = 6;
const string PARENT_DIRECTORY = "../Ch9/Programming_Examples/";

struct salesPersonRec {
    string ID;      // salesperson's ID
    double saleByQuarter[4];    // array to store the total
                                // sales for each quarter
    double totalSale;   // salesperson's yearly sales amount
};

void initialize(ifstream& indata, salesPersonRec list[], int listSize);
void getData(ifstream& infile, salesPersonRec list[], int listSize);
void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[]);
void totalSaleByPerson(salesPersonRec list[], int listSize);
void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double saleByQuarter[]);
void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize);
void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]);

int main()
{
    // Step 1
    ifstream infile;    // input file stream variable
    ofstream outfile;   // output file stream variable
    string inputFile;   // variable to hold the input file name
    string outputFile;  // variable to hold the output file name

    double totalSaleByQuarter[4];   // array to hold the
                                    // sale by quarter
    salesPersonRec salesPersonList[NO_OF_SALES_PERSON]; // array to hold the salesperson's data

    cout << "Enter the salesPerson ID file name: ";
    cin >> inputFile;
    cout << endl;

    infile.open((PARENT_DIRECTORY + inputFile).c_str());

    if (!infile)
    {
        cout << "Cannot open the input file." << endl;
        return 1;
    }

    initialize(infile, salesPersonList, NO_OF_SALES_PERSON);

    infile.close();
    infile.clear();

    cout << "Enter the sales data file name: ";
    cin >> inputFile;
    cout << endl;

    infile.open((PARENT_DIRECTORY + inputFile).c_str());

    if (!infile)
    {
        cout << "Cannot open the input file." << endl;
        return 1;
    }

    cout << "Enter the output file name: ";
    cin >> outputFile;
    cout << endl;

    outfile.open((PARENT_DIRECTORY + outputFile).c_str());

    outfile << fixed << showpoint << setprecision(2);

    getData(infile, salesPersonList, NO_OF_SALES_PERSON);
    saleByQuarter(salesPersonList, NO_OF_SALES_PERSON, totalSaleByQuarter);
    totalSaleByPerson(salesPersonList, NO_OF_SALES_PERSON);

    printReport(outfile, salesPersonList, NO_OF_SALES_PERSON, totalSaleByQuarter);
    maxSaleByPerson(outfile, salesPersonList, NO_OF_SALES_PERSON);
    maxSaleByQuarter(outfile, totalSaleByQuarter);

    infile.close();
    outfile.close();

    return 0;
}

void initialize(ifstream& indata, salesPersonRec list[], int listSize)
{
    for (int index = 0; index < listSize; index++)
    {
        indata >> list[index].ID;   // get salesperson's ID

        for (int quarter = 0; quarter < 4; quarter++)
            list[index].saleByQuarter[quarter] = 0.0;

        list[index].totalSale = 0.0;
    }
}

void getData(ifstream& infile, salesPersonRec list[], int listSize)
{
    int index;
    int quarter;
    string sID;
    int month;
    double amount;

    infile >> sID;  // get salesperson's ID

    while (infile)
    {
        infile >> month >> amount;  // get the sale month and the sales amount

        for (index = 0; index < listSize; index++)
            if (sID == list[index].ID)
                break;

        quarter = (month - 1) / 3;

        if (index < listSize)
            list[index].saleByQuarter[quarter] += amount;
        else
            cout << "Invalid salesperson's ID." << endl;

        infile >> sID;
    }
}

void saleByQuarter(salesPersonRec list[], int listSize, double totalByQuarter[])
{
    for (int quarter = 0; quarter < 4; quarter ++)
        totalByQuarter[quarter] = 0.0;

    for (int quarter = 0; quarter < 4; quarter++)
        for (int index = 0; index < listSize; index++)
            totalByQuarter[quarter] = totalByQuarter[quarter] + list[index].saleByQuarter[quarter];
}

void totalSaleByPerson(salesPersonRec list[], int listSize)
{
    for (int index = 0; index < listSize; index++)
        for (int quarter = 0; quarter < 4; quarter++)
            list[index].totalSale += list[index].saleByQuarter[quarter];
}

void printReport(ofstream& outfile, salesPersonRec list[], int listSize, double saleByQuarter[])
{
    outfile << "-----------   Annual Sales Report -------------" << endl;
    outfile << endl;
    outfile << "   ID       QT1         QT2        QT3        QT4    Total" << endl;
    outfile << "_______________________________________________________________" << endl;

    for (int index = 0; index < listSize; index++)
    {
        outfile << list[index].ID << "    ";

        for (int quarter = 0; quarter < 4; quarter++)
            outfile << setw(10) << list[index].saleByQuarter[quarter];

        outfile << setw(10) << list[index].totalSale << endl;
    }

    outfile << "Total    ";

    for (int quarter = 0; quarter < 4; quarter++)
        outfile << setw(10) << saleByQuarter[quarter];

    outfile << endl << endl;
}

void maxSaleByPerson(ofstream& outData, salesPersonRec list[], int listSize)
{
    int maxIndex = 0;

    for (int index = 1; index < listSize; index++)
        if (list[maxIndex].totalSale < list[index].totalSale)
            maxIndex = index;

    outData << "Max Sale by SalesPerson: ID = " << list[maxIndex].ID << ", Amount = $" << list[maxIndex].totalSale
        << endl;
}

void maxSaleByQuarter(ofstream& outData, double saleByQuarter[])
{
    int maxIndex = 0;

    for (int quarter = 1; quarter < 4; quarter++)
        if (saleByQuarter[maxIndex] < saleByQuarter[quarter])
            maxIndex = quarter;

    outData << "Max Sale by Quarter: Quarter = " << maxIndex + 1 << ", Amount = $" << saleByQuarter[maxIndex] << endl;
}
