// XOR with its own number is 0
    
// Example-
//     2 3 1 6 3 6 2
 
//     When we find XOR,
// 	   2^3^1^6^3^6^2
//     2^2^3^3^1^6^6
//     0^0^1^0
//     1
//     Unique Element is 1

int findUnique(int *arr, int n) 
{
    int res = 0;
	
    for(int i = 0; i < n; i++) 
    {
        res ^= arr[i];
    }

    return res;
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

        for (int i = 0; i < size; ++i) 
        {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }
    return 0;
}
*/
