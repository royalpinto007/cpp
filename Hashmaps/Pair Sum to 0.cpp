// Given a random integer array A of size N. Find and print the count of pair of elements in the array which sum up to 0.
// Note: Array A can contain duplicate elements as well.

// Sample Input 1:
// 5
// 2 1 -2 2 3
// Sample Output 1:
// 2

#include <unordered_map>
int pairSum(int *input, int n){
   
    unordered_map<int, int> m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (m.count(input[i]) == 0)
            m[input[i]] = 1;
        else
            m[input[i]] += 1;
        
        if (m.count(-input[i]))
        {
            count = count + m[-input[i]];
            if (input[i] == 0)
                count--;
        }
    }
    return count;
}

/*
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << pairSum(arr, n);

    delete[] arr;
}
*/
