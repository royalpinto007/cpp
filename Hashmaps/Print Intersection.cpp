// You have been given two integer arrays/lists (ARR1 and ARR2) of size N and M, respectively. 
// You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular value or to put it in other words, when there is a common value that exists in both the arrays/lists.

// Note :
// Input arrays/lists can contain duplicate elements.

// The intersection elements printed would be in the order they appear in the second array/list (ARR2).

// Sample Input 1 :
// 6
// 2 6 8 5 4 3
// 4
// 2 3 4 7 
// Sample Output 1 :
// 2
// 3 
// 4
  
// Sample Input 2 :
// 4
// 2 6 1 2
// 5
// 1 2 3 4 2
// Sample Output 2 :
// 1 
// 2 
// 2

#include <unordered_map>
void printIntersection(int arr1[], int arr2[], int n, int m){
    
    unordered_map<int, int> mp;
    if (n > m)
    {
        for (int i = 0; i < m; i++)
            mp[arr2[i]]++;
        for (int i = 0; i < n; i++)
        {
            if (mp.count(arr1[i]) == 1 && mp[arr1[i]] > 0)
            {
                cout << arr1[i] << endl;
                mp[arr1[i]]--;
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
            mp[arr1[i]]++;
        for (int i = 0; i < m; i++)
        {
            if (mp.count(arr2[i]) == 1 && mp[arr2[i]] > 0)
            {
                cout << arr2[i] << endl;
                mp[arr2[i]]--;
            }
        }
    }
}

/*
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;

    int* arr1 = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;

    int* arr2 = new int[m];

    for (int i = 0; i < m; ++i) {
        cin >> arr2[i];
    }

    printIntersection(arr1, arr2, n, m);

    delete[] arr1;
    delete[] arr2;
}
*/
