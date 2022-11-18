// A thief is robbing a store and can carry a maximal weight of W into his knapsack. 
// There are N items and ith item weighs wi and is of value vi. 
// Considering the constraints of maximum weight that knapsack can carry, you have to find and return the maximum value that thief can generate by stealing items.

// Note
// Space complexity should be O(W).

// Sample Input 1 :
// 4
// 1 2 4 5
// 5 4 8 6
// 5
// Sample Output 1 :
// 13

int knapsack(int *weights, int *values, int n, int maxWeight){
    
    int **output = new int *[n + 1];
    for (int i = 0; i <= n; i++)
        output[i] = new int[maxWeight + 1];

    for (int i = 0; i <= n; i++)
        output[i][0] = 0;

    for (int i = 0; i <= maxWeight; i++)
        output[0][i] = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= maxWeight; j++)
        {
            if (j < weights[n - i])
                output[i][j] = output[i - 1][j];
            else
                output[i][j] = max(output[i - 1][j - weights[n - i]] + values[n - i], output[i - 1][j]);
        }
    }
    return output[n][maxWeight];
}

/*
#include <cstring>
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;
    int* wt = new int[n];
    int* val = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> wt[i];
    }

    for (int j = 0; j < n; j++) {
        cin >> val[j];
    }

    int w;
    cin >> w;

    cout << knapsack(wt, val, n, w) << "\n";

    delete[] wt;
    delete[] val;
}
*/
