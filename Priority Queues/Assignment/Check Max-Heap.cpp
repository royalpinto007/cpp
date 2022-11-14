// Given an array of integers, check whether it represents max-heap or not. 
// Return true if the given array represents max-heap, else return false.
 
// Sample Input 1:
// 8
// 42 20 18 6 14 11 9 4
// Sample Output 1:
// true
  
bool isMaxHeap(int arr[], int n){
 
    for (int i = 0; i < n; i++)
    {
        int leftChildIndex = 2 * i + 1;
        int rightChildIndex = 2 * i + 2;
        if (leftChildIndex < n && rightChildIndex < n && (!(arr[leftChildIndex] < arr[i] && arr[rightChildIndex] < arr[i])))
            return false;
        else if (leftChildIndex < n && !(arr[leftChildIndex] < arr[i]))
            return false;
    }
    return true;
}

/*
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << (isMaxHeap(arr, n) ? "true\n" : "false\n");

    delete[] arr;
}
*/
