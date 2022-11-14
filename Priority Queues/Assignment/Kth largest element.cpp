// Given an array A of random integers and an integer k, find and return the kth largest element in the array.
// Note: Try to do this question in less than O(N * logN) time.
  
// Sample Input 1 :
// 6
// 9 4 8 7 11 3
// 2
// Sample Output 1 :
// 9
  
// Sample Input 2 :
// 8
// 2 6 10 11 13 4 1 20
// 4
// Sample Output 2 :
// 10

#include <queue>
int kthLargest(int *arr, int n, int k){
    
    priority_queue<int> pq;
    for (int i = 0; i < n; i++)
        pq.push(arr[i]);
    while (--k)
        pq.pop();
        
    return pq.top();
}

/*
#include <iostream>
#include <vector>
using namespace std;

#include "solution.h"

int main() {
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k;
    cin >> k;

    cout << kthLargest(arr, n, k);

    delete[] arr;
}
*/
