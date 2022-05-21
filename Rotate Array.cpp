/*
You have been given a random integer array/list(ARR) of size N.
Write a function that rotates the given array/list by D elements(towards the left).

Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run.
Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the array/list.
Second line contains 'N' single space separated integers representing the elements in the array/list.
Third line contains the value of 'D' by which the array/list needs to be rotated.

Output Format :
For each test case, print the rotated array/list in a row separated by a single space.
Output for every test case will be printed in a separate line.
*/

#include <iostream>
using namespace std;

void rotate(int *a, int d, int n)
{
    int temp[100000];
    int i = d;
    for (int j = 0; j < d; j++)
    {
        temp[j] = a[j];
    }
    while (i < n)
    {
        a[i - d] = a[i];
        i++;
    }
    for (int j = 0, k = n - d; j < d && k < n; k++, j++)
    {
        a[k] = temp[j];
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

        int d;
        cin >> d;

        rotate(input, d, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}