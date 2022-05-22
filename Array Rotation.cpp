/*
You have been given an integer array/list(ARR) of size N.
It has been sorted(in increasing order) and then rotated by some number 'K' in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.

Output Format :
For each test case, print the value of 'K' or the index from which which the array/list has been rotated.
Output for every test case will be printed in a separate line.
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int arrayRotateCheck(int *input, int size)
{
    int minVal = INT_MAX;
    int minIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] < minVal)
        {
            minVal = input[i];
            minIndex = i;
        }
    }

    return minIndex;
}

/*
int arrayRotateCheck(int *input, int size) {
    for(int i = 0; i < size - 1; ++i)
    {
        if(input[i] > input[i + 1])
        {
            return i + 1;
        }
    }
    return 0;
}

*/

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

        cout << arrayRotateCheck(input, size) << endl;
        delete[] input;
    }

    return 0;
}