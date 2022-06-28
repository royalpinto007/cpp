/*
Input-
1)The first line contains an Integer 't' which denotes the number of test cases or queries to be run. 
2)First line of each test case or query contains an integer 'N' representing the size of the array/list.
3)Second line contains 'N' single space separated integers representing the elements in the array/list.
4)Third line contains the value of X(integer to be searched in the given array/list.

Output-
Print the index at which X is present or -1, otherwise.

*/

#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int x)
{
    for(int i = 0 ; i < n ; i++) {
        if(x == arr[i])
        {
            return i;
        }
    }
    return -1;
}

/*
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int *arr = new int[n];
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}
		int val;
		cin >> val;
		cout << linearSearch(arr, n, val) << endl;
	}
	return 0;
}
*/
