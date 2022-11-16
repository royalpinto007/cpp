// You are given an array of integers and a target K. You have to find the count of subsets of the given array that sum up to K.
// Note:
// 1. Subset can have duplicate values.
// 2. Empty subset is a valid subset and has sum equal to zero.

// Sample Input 1:
// 1
// 5 6
// 2 4 4 3 1
// Sample Output 1:
// 3
// Explanation:
// Following are the three subsets, that sum upto K=6:
// 1. [2, 4], Element 4 in this subset is the one at index 1
// 2. [2, 4], Element 4 in this subset is the one at index 2
// 3. [2, 3, 1]  

// Sample Input 2:
// 2
// 8 8
// 1 4 1 3 1 1 2 3 
// 8 2
// 4 1 4 4 2 4 1 1
// Sample Output 2:
// 30
// 4

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll subsetSum(ll arr[], ll n, ll i, ll sum, ll count)
{
    if (i == n)
    {
        if (sum == 0)
            count++;
        return count;
    }
    count = subsetSum(arr, n, i + 1, sum - arr[i], count);
    count = subsetSum(arr, n, i + 1, sum, count);
    return count;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll arr[n];
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        if (n == 0)
            cout << ""
                 << "\n";
        else
            cout << subsetSum(arr, n, 0, k, 0) << "\n";
    }
    return 0;
}
