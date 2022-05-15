/*

You have been given an empty array(ARR) and its size N.
The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.

*/
#include <iostream>
using namespace std;

void arrange(int *arr, int n)
{
    int left = 0, right = n - 1;

    for (int i = 1; i <= n; i++)
    {

        if ((i) % 2 == 0)
        {
            arr[right--] = i;
        }
        else
        {
            arr[left++] = i;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *arr = new int[n];
        arrange(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete[] arr;
    }
}