// Given an array of length N and an integer x, you need to find and return the last index of integer x present in the array. 
// Return -1 if it is not present in the array.
// Last index means - if x is present multiple times in the array, return the index at which x comes last in the array.
// You should start traversing your array from 0, not from (N - 1).
// Do this recursively. Indexing in the array starts from 0.

// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// last index or -1

// Sample Input :
// 4
// 9 8 10 8
// 8

// Sample Output :
// 3

// Simple approach of solving from the end
// int lastIndex(int input[], int size, int x)
// {
//     if (size == 0)
//     {
//         return -1;
//     }

//     else if (input[size] == x)
//     {
//         return size;
//     }
//     else
//     {
//         return lastIndex(input, size - 1, x);
//     }
// }

// approach to solve it from the front
int lastIndex(int input[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    int smallAns = lastIndex(input + 1, size - 1, x);
    // understand this properly
    if (smallAns != -1)
    {
        return smallAns + 1;
    }
    if (input[0] == x)
    {
        return 0;
    }
    else
    {
        return -1;
    }
}

/* 
Time Complexity : O(n)
Space Complexity : O(n)
where n is size of input array 
*/

/*
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }

    int x;
    cin >> x;
    cout << lastIndex(input, n, x) << endl;
}
*/
