// Check Number

// Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
// Do this recursively.
  
// Input Format :
// Line 1 : An Integer N i.e. size of array
// Line 2 : N integers which are elements of the array, separated by spaces
// Line 3 : Integer x

// Output Format :
// 'true' or 'false'

// Sample Input 1 :
// 3
// 9 8 10
// 8
// Sample Output 1 :
// true
  
// Sample Input 2 :
// 3
// 9 8 10
// 2
// Sample Output 2 :
// false

bool checkNumber(int input[], int size, int x)
{
    if (size == 0)
    {
        return false;
    }

    if (input[0] == x)
    {
        return true;
    }
    checkNumber(input + 1, size - 1, x);
}

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

    if (checkNumber(input, n, x))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
*/
