//
// Created by Pshypher on 29/04/2026.
//
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

const int SIZE = 20;

void generateRandomNumbers(int grid[][SIZE], int size);
bool isMaxPeak(const int grid[][SIZE], int row, int col, int size);
bool isMinPeak(const int grid[][SIZE], int row, int col, int size);
void printBoard(const int grid[][SIZE], int size);
void printMinMaxPeak(const int grid[][SIZE], int size);

int main()
{
    int board[SIZE][SIZE];

    srand(time(nullptr));

    generateRandomNumbers(board, SIZE);
    printBoard(board, SIZE);
    cout << endl;
    printMinMaxPeak(board, SIZE);

    return 0;
}

void generateRandomNumbers(int grid[][SIZE], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            grid[i][j] = 1 + rand() % 20;
}

bool isMaxPeak(const int grid[][SIZE], int row, int col, int size)
{
    for (int i = row - 1; i <= row + 1; i++)
        for (int j = col - 1; j <= col + 1; j++)
        {
            if (i < 0 || i >= size || j < 0 || j >= size || i == row && j == col)
                continue;

            if (grid[i][j] > grid[row][col])
                return false;
        }

    return true;
}

bool isMinPeak(const int grid[][SIZE], int row, int col, int size)
{
    for (int i = row - 1; i <= row + 1; i++)
        for (int j = col - 1; j <= col + 1; j++)
        {
            if (i < 0 || i >= size || j < 0 || j >= size || i == row && j == col)
                continue;

            if (grid[i][j] < grid[row][col])
                return false;
        }

    return true;
}

void printBoard(const int grid[][SIZE], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            cout << right << setw(2) << grid[i][j] << "  ";
        cout << endl;
    }
    cout << endl;
}

void printMinMaxPeak(const int grid[][SIZE], int size)
{
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            if (isMinPeak(grid, i, j, size))
                cout << grid[i][j] << " is a minimum peak at [" << i << "][" << j << "]." << endl;

            if (isMaxPeak(grid, i, j, size))
                cout << grid[i][j] << " is a maximum peak at [" << i << "][" << j << "]." << endl;
        }

    cout << endl;
}
