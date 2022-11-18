// Given an NxM matrix that contains only 0s and 1s, find out the size of the maximum square sub-matrix with all 0s. 
// You need to return the size of the square matrix with all 0s.
  
// Sample Input 1:
// 3 3
// 1 1 0
// 1 1 1
// 1 1 1
// Sample Output 1:
// 1

// Sample Input 2:
// 4 4
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0
// 0 0 0 0
// Sample Output 2:
// 4

int findMaxSquareWithAllZeros(int **arr, int row, int col){
    
    int **dp = new int *[row];
    for (int i = 0; i < row; i++)
    {
        dp[i] = new int[col];
        for (int j = 0; j < col; j++)
            dp[i][j] = 0;
    }

    int ans = 0;
    for (int i = 0; i < row; i++)
    {
        dp[i][0] = (arr[i][0]) ? 0 : 1;
        ans = max(ans, dp[i][0]);
    }
    for (int i = 0; i < col; i++)
    {
        dp[0][i] = (arr[0][i]) ? 0 : 1;
        ans = max(ans, dp[0][i]);
    }

    for (int i = 1; i < row; i++)
    {
        for (int j = 1; j < col; j++)
        {
            if (arr[i][j] == 1)
                dp[i][j] = 0;
            else
                dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
            ans = max(ans, dp[i][j]);
        }
    }
    return ans;
}

/*
#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
	int **arr, n, m, i, j;
	cin >> n >> m;
	arr = new int *[n];
	
	for (i = 0; i < n; i++)
	{
		arr[i] = new int[m];
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}

	cout << findMaxSquareWithAllZeros(arr, n, m) << endl;

	delete[] arr;

	return 0;
}
*/
