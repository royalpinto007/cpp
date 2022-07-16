// Sum of Array

/*
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces

Sample Input 1 :
3
9 8 9
  
Sample Output 1 :
26
*/

/*  Time Complexity : O(n)
    Space Complexity : O(n)
    where n is size of input array
*/

int sum(int input[], int n)
{
    if (n == 0)
    {
        return 0;
    }
    return input[0] + sum(input + 1, n - 1);
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

    cout << sum(input, n) << endl;
}
*/
