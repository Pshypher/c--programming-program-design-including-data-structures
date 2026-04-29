//
// Created by Pshypher on 26/04/2026.
//
#include <iostream>
#include <ctime>

using namespace std;

void initialize(int list[], int length);
void readLotteryNumbers(int list[], int length);
void generateLotteryNumbers(int list[], int length);
int sequentialSearch(int list[], int elem, int length);
void printResult(int lottery[], int matches[], int length, bool allSimilar);

const int LOTTERY_SIZE = 5;

int main()
{
    int lotteryNumbers[LOTTERY_SIZE];
    int guesses[LOTTERY_SIZE];
    int matches[LOTTERY_SIZE];

    initialize(matches, LOTTERY_SIZE);
    generateLotteryNumbers(lotteryNumbers, LOTTERY_SIZE);
    readLotteryNumbers(guesses, LOTTERY_SIZE);

    bool allSimilar = true;
    for (auto num : guesses)
    {
        int pos = sequentialSearch(lotteryNumbers, num, LOTTERY_SIZE);
        if (pos == -1)
            allSimilar = false;
        else
            matches[pos] = num;
    }

    printResult(lotteryNumbers, matches, LOTTERY_SIZE, allSimilar);

    return 0;
}

void initialize(int list[], int length)
{
    for (int i = 0; i < length; i++)
        list[i] = -1;
}

void readLotteryNumbers(int list[], int length)
{
    cout << "Enter " << length << " distinct numbers in the range 0-9: ";
    for (int i = 0; i < length; i++)
        cin >> list[i];
    cout << endl;
}

int sequentialSearch(int list[], int elem, int length)
{
    int index = -1;
    for (int i = 0; i < length; i++)
        if (list[i] == elem)
        {
            index = i;
            break;
        }

    return index;
}

void generateLotteryNumbers(int list[], int length)
{
    srand(time(0));

    int index = 0;
    while (index < length)
    {
        int num = rand() % 10;
        if (sequentialSearch(list, num, length) == -1)
        {
            list[index] = num;
            index++;
        }
    }
}

void printResult(int lottery[], int matches[], int length, bool allSimilar)
{
    if (allSimilar)
        cout << "User wins the game!!!";
    else
    {
        int count = 0;
        for (int i = 0; i < length; i++)
            if (matches[i] != -1)
                count++;

        cout << "User looses!!!." << endl;
        cout << "Numbers in the lottery are: ";
        for (int i = 0; i < length; i++)
        {
            if (i > 0)
                cout << ", ";
            cout << lottery[i];
        }

        cout << endl;
        cout << count << " out of " << LOTTERY_SIZE << " are correct; At positions: ";
        count = 0;
        for (int i = 0; i < LOTTERY_SIZE; i++)
            if (matches[i] != -1)
            {
                if (count > 0)
                    cout << ", ";
                cout << i;
                count++;
            }
        cout << endl;
    }
}
