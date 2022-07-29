int arrayRotateCheck(int *arr, int size) 
{
    // we will use binary search to solve this question
    int low = 0;
    int high = size - 1;
    
    while(low < high) 
    {
        int mid = low + ((high - low ) / 2);
        
        if(arr[mid] < arr[0]) 
        {
            high = mid;
        }
        else if (arr[mid] >= arr[0]) 
        {
            low = mid + 1;
        }
            
    }
    
    // sanity check
    if(arr[low] < arr[0])
    {
        return low;
    } else {
        return 0;
    }
}

/*
#include <iostream>
using namespace std;

#include "solution.h"

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
*/
