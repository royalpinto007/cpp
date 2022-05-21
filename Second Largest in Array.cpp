/*
You have been given a random integer array/list(ARR) of size N.
You are required to find and return the second largest element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31
(It is the smallest value for the range of Integer)

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
The first line of each test case or query contains an integer 'N' representing the size of the array/list.
The second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each tes
Output for every test case will be printed in a separate line.
*/

#include <climits>
#include <iostream>
using namespace std;

int findSecondLargest(int *input, int n)
{
    if (n <= 1)
        return INT_MIN;
    int max = input[0];
    for (int i = 1; i < n; i++)
    {
        if (max < input[i])
            max = input[i];
    }
    int x = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (input[i] < max && x < input[i])
        {
            x = input[i];
        }
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }

        cout << findSecondLargest(input, size) << endl;

        delete[] input;
    }

    return 0;
}