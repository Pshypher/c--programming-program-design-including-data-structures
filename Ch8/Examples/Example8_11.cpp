// Two-dimensional arrays as parameters to functions.

#include <iostream>
#include <iomanip>

using namespace std;

const int NUMBER_OF_ROWS = 6;
const int NUMBER_OF_COLUMNS = 5;

void printMatrix(int matrix[][NUMBER_OF_COLUMNS], int noOfRows);
void sumRows(int matrix[][NUMBER_OF_COLUMNS], int noOfRows);
void largestInRows(int matrix[][NUMBER_OF_COLUMNS], int noOfRows);

int main()
{
    int board[NUMBER_OF_ROWS][NUMBER_OF_COLUMNS] = {
        {17, 8, 24, 10, 28},
        {9, 20, 16, 55, 90},
        {25, 45, 35, 8, 78},
        {5, 0, 96, 45, 38},
        {76, 30, 8, 14, 28},
        {9, 60, 55, 62, 10}
    };
    printMatrix(board, NUMBER_OF_ROWS);
    cout << endl;
    sumRows(board, NUMBER_OF_ROWS);
    cout << endl;
    largestInRows(board, NUMBER_OF_ROWS);

    return 0;
}

void printMatrix(int matrix[][NUMBER_OF_COLUMNS], int noOfRows)
{
    for (int row = 0; row < noOfRows; row++)
    {
        for (int col = 0; col < NUMBER_OF_COLUMNS; col++)
            cout << setw(5) << matrix[row][col] << " ";

        cout << endl;
    }
}

void sumRows(int matrix[][NUMBER_OF_COLUMNS], int noOfRows)
{
    int sum;
    // Sum for each individual row
    for (int row = 0; row < noOfRows; row++)
    {
        sum = 0;
        for (int col = 0; col < NUMBER_OF_COLUMNS; col++)
            sum = sum + matrix[row][col];
        cout << "Sum of row " << (row + 1) << " = " << sum << endl;
    }
}

void largestInRows(int matrix[][NUMBER_OF_COLUMNS], int noOfRows)
{
    int largest;

    // Largest element in each row
    for (int row = 0; row < noOfRows; row++)
    {
        largest = matrix[row][0];   // Assume that the first element
                                    // of the row is the largest.
        for (int col = 1; col < NUMBER_OF_COLUMNS; col++)
            if (largest < matrix[row][col])
                largest = matrix[row][col];

        cout << "The largest element of row " << (row + 1) << " = " << largest << endl;
    }
}
