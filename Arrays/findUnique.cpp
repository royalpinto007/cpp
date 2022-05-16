/*
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

Sample Input-
1
7
2 3 1 6 3 6 2

Output-
1
*/

#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    int unique = 0;
    for (int i = 0; i < size; i++)
    {
        bool found = false;

        for (int j = 0; j < size; j++)
        {

            if (i == j)
            {
                continue;
            }

            if (arr[i] == arr[j])
            {
                found = true;
            }
        }

        if (!found)
        {
            unique = arr[i];
            break;
        }
    }

    return unique;
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

        cout << findUnique(input, size) << endl;
    }

    return 0;
}
