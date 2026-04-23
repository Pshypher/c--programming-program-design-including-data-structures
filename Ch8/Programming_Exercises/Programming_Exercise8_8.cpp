//
// Created by Pshypher on 23/04/2026.
//
#include <iostream>

using namespace std;

const int ARRAY_SIZE = 20;
const int NUM_ROWS = 10;
const int NUM_COLS = 4;

void inputArray(int array[], int length);
void doubleArray(int arrayDest[], const int arraySrc[], int length);
void copyAlphaBeta(int alpha[], int beta[], int dest[][NUM_COLS], int length);
void printArray(int array[], int length);
void printMatrix(int matrix[][NUM_COLS], int rows, int cols);

int main()
{
    int alpha[20];
    int beta[20];
    int matrix[NUM_ROWS][NUM_COLS];

    inputArray(alpha, ARRAY_SIZE);
    doubleArray(beta, alpha, ARRAY_SIZE);
    copyAlphaBeta(alpha, beta, matrix, NUM_ROWS * NUM_COLS);
    printArray(beta, ARRAY_SIZE);
    printMatrix(matrix, NUM_ROWS, NUM_COLS);

    return 0;
}

void inputArray(int array[], int length)
{
    cout << "Enter " << length << " numbers separated by a space: ";
    for (int i = 0; i < length; i++)
        cin >> array[i];
    cout << endl;
}

void doubleArray(int arrayDest[], const int arraySrc[], int length)
{
    for (int i = 0; i < length; i++)
        arrayDest[i] = arraySrc[i] * 2;
}

void copyAlphaBeta(int alpha[], int beta[], int dest[][NUM_COLS], int length)
{
    int index;
    for (index = 0; index < length / 2; index++)
        dest[index / NUM_COLS][index % NUM_COLS] = alpha[index];

    for (;index < length; index++)
        dest[index / NUM_COLS][index % NUM_COLS] = beta[index - length / 2];
}


void printArray(int array[], int length)
{
    cout << endl;
    for (int i = 1; i <= length; i++)
    {
        cout << array[i - 1] << " ";
        if (i % 15 == 0)
            cout << endl;
    }
    cout << endl;
}

void printMatrix(int matrix[][NUM_COLS], int rows, int cols)
{
    cout << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    cout << endl;
}
