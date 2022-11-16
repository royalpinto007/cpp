// Given an array consisting of positive and negative integers, find the length of the longest subarray whose sum is zero.

// Sample Input 1:
// 10 
// 95 -97 -387 -435 -5 -70 897 127 23 284
// Sample Output 1:
// 5
// Explanation:
// The five elements that form the longest subarray that sum up to zero are: -387, -435, -5, -70, 897 

#include <bits/stdc++.h>
int lengthOfLongestSubsetWithZeroSum(int *arr, int n){
    
    unordered_map<int, int> m;
    int length = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] == 0 && length == 0)
            length = 1;
        
        if (sum == 0)
            length = i + 1;
        
        if (m.count(sum) > 0)
            length = max(length, i - m[sum]);
        else
            m[sum] = i;
    }
    return length;
}

/*
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int size;
    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << lengthOfLongestSubsetWithZeroSum(arr, size);

    delete[] arr;
}
*/
