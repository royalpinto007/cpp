#include <iostream>
using namespace std;

void findLargest(int **input, int nRows, int mCols)
{
    int maxSum = INT32_MIN, index = 0;
    int *arr = new int[mCols], flag = 0;

    for (int i = 0; i < nRows; i++)
    {
        int sum = 0;
        for (int j = 0; j < mCols; j++)
        {
            sum += input[i][j];
            arr[j] += input[i][j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            index = i;
        }
    }

    for (int i = 0; i < mCols; i++)
    {
        if (arr[i] > maxSum)
        {
            maxSum = arr[i];
            index = i;
            flag = 1;
        }
    }

    flag ? cout << "column " << index << " " << maxSum << endl : cout << "row " << index << " " << maxSum << endl;
}

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

        findLargest(input, row, col);
        cout << endl;
    }
}