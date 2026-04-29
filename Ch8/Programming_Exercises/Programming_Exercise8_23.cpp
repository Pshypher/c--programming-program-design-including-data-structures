//
// Created by Pshypher on 29/04/2026.
//
#include <iostream>
#include <ctime>

using namespace std;

const int ROW_SIZE = 3;
const int COL_SIZE = 3;

void setRandomNumbersOnGrid(int grid[][COL_SIZE], int rowSize, int colSize);
void setMagicNumber(int grid[][COL_SIZE], int& magicNumber, int rowSize, int colSize);
bool isMagicSquare(int grid[][COL_SIZE], int magicNumber, int rowSize, int colSize);

int main()
{
    int magicNumber;
    int grid[ROW_SIZE][COL_SIZE];
    int count = 0;

    srand(time(nullptr));

    int freq = 0;
    while (freq < 1000000)
    {
        setRandomNumbersOnGrid(grid, ROW_SIZE, COL_SIZE);
        setMagicNumber(grid, magicNumber, ROW_SIZE, COL_SIZE);
        if (isMagicSquare(grid, magicNumber, ROW_SIZE, COL_SIZE))
            count++;
        freq++;
    }

    cout << "We got " << count << " magic squares out of " << freq << " tries.";

    return 0;
}

void setRandomNumbersOnGrid(int grid[][COL_SIZE], int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
        for (int j = 0; j < colSize; j++)
        {
            int value = 1 + rand() % 9;
            grid[i][j] = value;
        }
}

void setMagicNumber(int grid[][COL_SIZE], int& magicNumber, int rowSize, int colSize)
{
    int total = 0;
    for (int i = 0; i < rowSize; i++)
        for (int j = 0; j < colSize; j++)
            total += grid[i][j];

    magicNumber = total / rowSize;
}

bool isMagicSquare(int grid[][COL_SIZE], int magicNumber, int rowSize, int colSize)
{
    for (int i = 0; i < rowSize; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < colSize; j++)
            rowSum += grid[i][j];
        if (rowSum != magicNumber)
            return false;
    }

    for (int j = 0; j < colSize; j++)
    {
        int colSum = 0;
        for (int i = 0; i < rowSize; i++)
            colSum += grid[i][j];
        if (colSum != magicNumber)
            return false;
    }

    int diagonalSum1 = 0;
    for (int i = 0; i < rowSize; i++)
        diagonalSum1 += grid[i][i];
    if (diagonalSum1 != magicNumber)
        return false;

    int diagonalSum2 = 0;
    for (int i = 0; i < rowSize; i++)
        diagonalSum2 += grid[i][rowSize - 1 - i];
    if (diagonalSum2 != magicNumber)
        return false;

    return true;
}