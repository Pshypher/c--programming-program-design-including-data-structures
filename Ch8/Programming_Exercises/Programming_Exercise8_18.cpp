//
// Created by Pshypher on 27/04/2026.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ROW_SIZE = 4;
const int COL_SIZE = 4;

void initialize(int deck[][COL_SIZE], int rowSize, int colSize);
void setPosition(int card, int deck[][COL_SIZE], int rowSize, int colSize);
void startGame(int deck[][COL_SIZE], bool isVisible[][COL_SIZE], int rowSize, int colSize);
bool allVisible(bool isVisible[][COL_SIZE], int rowSize, int colSize);
void printDeck(int deck[][COL_SIZE], bool isVisible[][COL_SIZE], int rowSize, int colSize);

int main()
{
    int deck[ROW_SIZE][COL_SIZE];
    bool visible[ROW_SIZE][COL_SIZE] = {
        {false, false, false, false},
        {false, false, false, false},
        {false, false, false, false},
        {false, false, false, false}
    };

    srand(time(nullptr));
    initialize(deck, ROW_SIZE, COL_SIZE);
    startGame(deck, visible, ROW_SIZE, COL_SIZE);
    printDeck(deck, visible, ROW_SIZE, COL_SIZE);

    return 0;
}

void initialize(int deck[][COL_SIZE], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
        for (int j = 0; j < colSize; j++)
            deck[i][j] = 0;

    for (int card = 1; card <= (rowSize * colSize) / 2; card++)
    {
        setPosition(card, deck, rowSize, colSize);
        setPosition(card, deck, rowSize, colSize);
    }
}

void startGame(int deck[][COL_SIZE], bool isVisible[][COL_SIZE], int rowSize, int colSize)
{
    int card1, card2;
    int row1, col1;
    int row2, col2;

    while (!allVisible(isVisible, rowSize, colSize))
    {
        cout << "Enter an index between [1 - 16] for a pair of cards: ";
        cin >> card1 >> card2;
        row1 = (card1 - 1) / rowSize;
        col1 = (card1 - 1) % colSize;
        row2 = (card2 - 1) / rowSize;
        col2 = (card2 - 1) % colSize;

        if (isVisible[row1][col1])
        {
            cout << "You cannot select item at position " << card1 << " again." << endl;
            continue;
        }

        if (isVisible[row2][col2])
        {
            cout << "You cannot select item at position " << card2 << " again." << endl;
            continue;
        }

        isVisible[row1][col1] = true;
        isVisible[row2][col2] = true;
        if (deck[row1][col1] != deck[row2][col2])
        {
            printDeck(deck, isVisible, rowSize, colSize);
            isVisible[row1][col1] = false;
            isVisible[row2][col2] = false;
        }
    }
}

bool allVisible(bool isVisible[][4], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
        for (int j = 0; j < colSize; j++)
            if (!isVisible[i][j])
                return false;

    return true;
}

void setPosition(int card, int deck[][COL_SIZE], int rowSize, int colSize)
{
    int row = rand() % rowSize;
    int col = rand() % colSize;
    while (deck[row][col] != 0)
    {
        row = rand() % rowSize;
        col = rand() % colSize;
    }

    deck[row][col] = card;
}

void printDeck(int deck[][COL_SIZE], bool isVisible[][COL_SIZE], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (isVisible[i][j])
                cout << deck[i][j] << "  ";
            else
                cout << "*" << "  ";
        }
        cout << endl;
    }
}