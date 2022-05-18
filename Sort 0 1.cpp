/*
You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1.
Write a function to sort this array/list.
Think of a solution which scans the array/list only once and don't require use of an extra array/list.

Input Format-
The first line contains an Integer 't' which denotes the number of test cases or queries to be run.
Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers(all 0s and 1s) representing the elements in the array/list.

Output Format-
For each test case, print the sorted array/list elements in a row separated by a single space.
Output for every test case will be printed in a separate line.


Input-
1
7
0 1 1 0 1 0 1

Output-
0 0 0 1 1 1 1
*/

#include <iostream>
#include <algorithm>
using namespace std;

void sortZeroesAndOne(int *input, int size)
{
    int zeroIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (input[i] == 0)
        {
            swap(input[zeroIndex], input[i]);
            zeroIndex++;
        }
    }
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

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        sortZeroesAndOne(input, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        cout << endl;
        delete[] input;
    }

    return 0;
}