// You are given an array of integers that contain numbers in random order.
// Write a program to find and return the number which occurs the maximum times in the given input.
// If two or more elements contend for the maximum frequency, return the element which occurs in the array first.

// Sample Input 1 :
// 13
// 2 12 2 11 12 2 1 2 2 11 12 2 6 
// Sample Output 1 :
// 2
  
// Sample Input 2 :
// 3
// 1 4 5
// Sample Output 2 :
// 1

#include <unordered_map>

int highestFrequency(int arr[], int n){
    
    unordered_map<int, int> m;
    int index = 0, max = 0;
    for (int i = n - 1; i >= 0; i--){

        if (m.count(arr[i]) == 0)
            m[arr[i]] = 1;
        
        else{

            m[arr[i]] += 1;
            if (max <= m[arr[i]])
            {
                max = m[arr[i]];
                index = i;
            }
        }
    }
    return arr[index];
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

    cout << highestFrequency(arr, n);

    delete[] arr;
}
*/
