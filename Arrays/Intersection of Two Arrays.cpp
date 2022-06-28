/*
Input format :
The first line contains an Integer 't' which denotes the number of test cases or queries to be run. Then the test cases follow.
First line of each test case or query contains an integer 'N' representing the size of the first array/list.
Second line contains 'N' single space separated integers representing the elements of the first the array/list.
Third line contains an integer 'M' representing the size of the second array/list.
Fourth line contains 'M' single space separated integers representing the elements of the second array/list.

Output format :
For each test case, print the intersection elements in a row, separated by a single space.
Output for every test case will be printed in a separate line.

Input-
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10

Output-
2 4 3
10
*/

#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;


void intersection(int *input1, int *input2, int size1, int size2)
{
    for(int i=0; i<size1; i++){
        for(int j=0; j<size2; j++){
            
            if(input1[i]==input2[j]){
                cout<<input1[i]<<" ";
                input2[j]= INT_MIN;
                break;
            }
            
        }
        
    }
}

/*
int main()
{
	int t;
	cin >> t;
	while (t--)
	{

		int size1, size2;

		cin >> size1;
		int *input1 = new int[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}
*/
