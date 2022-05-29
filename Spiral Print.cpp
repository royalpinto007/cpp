/*

For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. 
That is, you need to print in the order followed for every iteration:
a. First row(left to right)
b. Last column(top to bottom)
c. Last row(right to left)
d. First column(bottom to top)

Mind that every element will be printed only once.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
Then the test cases follow.
First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space. 
They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.
Second line onwards, the next 'N' lines or rows represent the ith row values.
Each of the ith row constitutes 'M' column values separated by a single space.

Output format :
For each test case, print the elements of the two-dimensional array/list in the spiral form in a single line, separated by a single space.
Output for every test case will be printed in a seperate line.
*/

#include <iostream>
using namespace std;

void spiralPrint(int **input, int nRows, int mCols)
{
    if (nRows == 0 || mCols == 0)
    {
        return;
    }
    int i, rowStart = 0, colStart = 0;
    int numElements = nRows * mCols, count = 0;
    while (count < numElements)
    {
        for (i = colStart; count < numElements && i < mCols; ++i)
        {
            cout << input[rowStart][i] << " ";
            count++;
        }
        rowStart++;
        for (i = rowStart; count < numElements && i < nRows; ++i)
        {
            cout << input[i][mCols - 1] << " ";
            count++;
        }
        mCols--;
        for (i = mCols - 1; count < numElements && i >= colStart; --i)
        {
            cout << input[nRows - 1][i] << " ";
            count++;
        }
        nRows--;
        for (i = nRows - 1; count < numElements && i >= rowStart; --i)
        {
            cout << input[i][colStart] << " ";
            count++;
        }
        colStart++;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int row, col;
        cin >> row >> col;
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}