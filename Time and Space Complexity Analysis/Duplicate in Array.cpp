int findDuplicate(int *arr, int n) 
{
	  // we know range of integers is from 0 to n- 2
    int xor1 = 0;
    for(int i = 0 ; i <= n - 2; i++) 
    {
        xor1 ^= i;
    }
    
    int xor2 = 0;
    for(int i = 0 ; i < n; i++) 
    {
        xor2 ^= arr[i];
    }
    
    return xor1 ^ xor2;
}

/*
#include <iostream>
using namespace std;

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

		cout << findDuplicate(input, size) << endl;
	}

	return 0;
}
*/
