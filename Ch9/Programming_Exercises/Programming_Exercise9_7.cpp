//
// Created by Pshypher on 11/05/2026.
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const int NUMBER_OF_PLAYERS = 10;
const string PARENT_DIRECTORY = "../Ch9/Programming_Exercises/";

struct footballPlayer {
    string playerFName;
    string playerLName;
    string playerPosition;
    int numberOfTouchdowns;
    int numberOfCatches;
    int numberOfPassingYards;
    int numberOfReceivingYards;
    int numberOfRushingYards;
};

void getInputFile(string& filename, ifstream& infile);
void getOutputFile(ofstream& outfile);
void getData(ifstream& infile, footballPlayer players[], int length);
void playerUpdatePrompt(int& pos, int& num, const footballPlayer players[], int length);
void update(int structFieldNo, int pos, footballPlayer players[]);
string getPromptSuffix(int structFieldNo);
void getFieldInput(int structfieldNo, string& inputStr, int& inputInt);
void update(int structFieldNo, int value, int pos, footballPlayer players[]);
void update(int structFieldNo, string value, int pos, footballPlayer players[]);
int find(const string& name, const footballPlayer players[], int length);
void printPlayerRecords(ofstream& outData, const footballPlayer players[], int length);

int main()
{
    footballPlayer playerRecords[NUMBER_OF_PLAYERS];

    string filename;
    ifstream infile;
    ofstream outfile;

    int position;
    int structFieldNumber;

    int feedbackLoop;


    getInputFile(filename, infile);
    if (!infile)
    {
        cout << filename << " does not exist." << endl;
        return 1;
    }

    cout << "Would you like to make changes to player records: (0 or 1)? ";
    cin >> feedbackLoop;
    cout << endl;
    while (feedbackLoop)
    {
        getData(infile, playerRecords, NUMBER_OF_PLAYERS);
        playerUpdatePrompt(position, structFieldNumber, playerRecords, NUMBER_OF_PLAYERS);
        update(structFieldNumber, position, playerRecords);

        cout << "Would you like to make further changes to player records: (0 or 1)? ";
        cin >> feedbackLoop;
        cout << endl;
    }

    getOutputFile(outfile);
    printPlayerRecords(outfile, playerRecords, NUMBER_OF_PLAYERS);

    infile.close();
    outfile.close();

    return 0;
}

void getInputFile(string &filename, ifstream &infile)
{
    cout << "Enter file name to fetch player records: ";
    cin >> filename;
    cout << endl;

    infile.open(filename.c_str());
}

void getOutputFile(ofstream &outfile)
{
    string filename;

    cout << "Enter file name to save updated player records: ";
    cin >> filename;
    cout << endl;

    outfile.open(filename.c_str());
}

void getData(ifstream &infile, footballPlayer players[], int length)
{
    int index = 0;

    infile >> players[index].playerFName;
    while (infile && index < length)
    {
        infile >> players[index].playerLName;
        infile >> players[index].playerPosition;
        infile >> players[index].numberOfTouchdowns;
        infile >> players[index].numberOfCatches;
        infile >> players[index].numberOfPassingYards;
        infile >> players[index].numberOfReceivingYards;
        infile >> players[index].numberOfRushingYards;

        index++;

        infile >> players[index].playerFName;
    }
}

void playerUpdatePrompt(int& pos, int& num, const footballPlayer players[], int length)
{
    char dismiss;
    cin.get(dismiss);

    string fName;
    string lName;
    cout << "What is the full name of the player whose record is to be updated? ";
    cin >> fName >> lName;
    cout << endl;

    string name = fName.append(" ").append(lName);
    pos = find(name, players, length);
    if (pos == -1)
    {
        cout << "Football player: " << name << " not found" << endl;
        return;
    }

    cout << "1. Change Player First Name;" << endl;
    cout << "2. Change Player Last Name;" << endl;
    cout << "3. Change Player Position;" << endl;
    cout << "4. Update Number of Touchdowns;" << endl;
    cout << "5. Update Number of Catches;" << endl;
    cout << "6. Update Number of Passing Yards;" << endl;
    cout << "7. Update Number of Receiving Yards;" << endl;
    cout << "8. Update Number of Rushing Yards;" << endl;
    cout << "Select a number for the preferred field you would like to update[1-8]: " << endl;
    cin >> num;
    cout << endl;
}

void update(int structFieldNo, int pos, footballPlayer players[])
{
    string valueStr;
    int valueInt = -1;

    string suffix = getPromptSuffix(structFieldNo);
    cout << "Enter " << suffix << ": ";
    getFieldInput(structFieldNo, valueStr, valueInt);

    if (valueInt != -1)
        update(structFieldNo, valueInt, pos, players);
    else
        update(structFieldNo, valueStr, pos, players);
}

string getPromptSuffix(int structfieldNo)
{
    string str;
    switch (structfieldNo)
    {
        case 1:
            str = "First Name";
            break;
        case 2:
            str = "Last Name";
            break;
        case 3:
            str = "Player Position";
            break;
        case 4:
            str  = "Number of Touchdowns";
            break;
        case 5:
            str = "Number of Catches";
            break;
        case 6:
            str = "Number of Passing Yards";
            break;
        case 7:
            str = "Number of Receiving Yards";
            break;
        default:
            str = "Number of Rushing Yards";
    }

    return str;
}

void getFieldInput(int structfieldNo, string& inputStr, int& inputInt)
{
    switch (structfieldNo)
    {
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            cin >> inputInt;
            break;
        default:
            cin >> inputStr;
    }
}

void update(int structFieldNo, int value, int pos, footballPlayer players[])
{
    switch (structFieldNo)
    {
        case 4:
            players[pos].numberOfTouchdowns = value;
            break;
        case 5:
            players[pos].numberOfCatches = value;
            break;
        case 6:
            players[pos].numberOfPassingYards = value;
            break;
        case 7:
            players[pos].numberOfReceivingYards = value;
            break;
        case 8:
            players[pos].numberOfRushingYards = value;
            break;
        default:
            return;
    }
}

void update(int structFieldNo, string value, int pos, footballPlayer players[])
{
    switch (structFieldNo)
    {
        case 1:
            players[pos].playerFName = value;
            break;
        case 2:
            players[pos].playerLName = value;
            break;
        case 3:
            players[pos].playerPosition = value;
            break;
        default:
            return;
    }
}

int find(const string &name, const footballPlayer players[], int length)
{
    int index = name.find(" ");
    string firstName = name.substr(0, index);
    string lastName = name.substr(index + 1, name.size());

    index = -1;
    for (int i = 0; i < length; i++)
    {
        if (players[i].playerFName == firstName && players[i].playerLName == lastName)
        {
            index = i;
            break;
        }

    }

    return index;
}

void printPlayerRecords(ofstream &outData, const footballPlayer players[], int length)
{
    for (int i = 0; i < length; i++)
    {
        outData << players[i].playerFName << " " << players[i].playerLName << " " << players[i].playerPosition
            << " " << players[i].numberOfTouchdowns << " " << players[i].numberOfCatches << " "
            << players[i].numberOfPassingYards << " " << players[i].numberOfReceivingYards << " "
            << players[i].numberOfRushingYards << endl;
    }
    cout << endl;
}


