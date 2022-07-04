/*
For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order, i.e,
print the first column top to bottom, next column bottom to top and so on.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run.
Then the test cases follow.
First line of each test case or query contains two integer values, 'N' and 'M', separated by a single space.
They represent the 'rows' and 'columns' respectively, for the two-dimensional array/list.
Second line onwards, the next 'N' lines or rows represent the ith row values.
Each of the ith row constitutes 'M' column values separated by a single space.

Output format :
For each test case, print the elements of the two-dimensional array/list in the sine wave order in a single line, separated by a single space.
Output for every test case will be printed in a seperate line.

*/
#include <iostream>
using namespace std;

void wavePrint(int **input, int nRows, int mCols)
{
    for (int i = 0; i < mCols; i++)
    {
        int j = i % 2 == 0 ? 0 : nRows - 1;
        while (i % 2 == 0 ? j < nRows : j >= 0)
        {
            cout << input[j][i] << " ";
            i % 2 == 0 ? j++ : j--;
        }
    }
}

/*
void wavePrint(int **input, int nRows, int mCols)
{
    if (nRows == 0)
    {
        return;
    }
    for (int j = 0; j < mCols; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = 0; i < nRows; i++)
            {
                cout << input[i][j] << " ";
            }
        }
        else
        {
            for (int i = nRows - 1; i >= 0; i--)
            {
                cout << input[i][j] << " ";
            }
        }
    }
}
*/

/*
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int row, col;
        cin >> row >> col;
        int **input = new int *[row];
        for (int i = 0; i < row; i++)
        {
            input[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> input[i][j];
            }
        }
        wavePrint(input, row, col);
        cout << endl;
    }
}
*/
