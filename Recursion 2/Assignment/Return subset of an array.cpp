/*
Given an integer array (of length n), find and return all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. 
But the order of elements should remain same as in the input array.

Note : The order of subsets are not important.
*/

int subset(int input[], int n, int output[][20]) 
{
    if(n<=0) 
 	{
      output[0][0]=0;
      return 1;
  	}

  	int smallOutput = subset(input+1,n-1,output);
  	for(int i=0;i<smallOutput;i++) 
    {
    	int col = output[i][0] +1;
     	output[i+smallOutput][0] = col;
        output[i+smallOutput][1] = input[0];
      	
        for(int j=2; j<col+1;j++) 
        {
        	output[i+smallOutput][j] = output[i][j-1];
        }
  }
  return 2*smallOutput;
}

/*
#include <iostream>
using namespace std;

int main() 
{
  int input[20],length, output[35000][20];
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  
  int size = subset(input, length, output);

  for(int i = 0; i < size; i++) 
  { 
	  for(int j = 1; j <= output[i][0]; j++) 
    { 
		    cout << output[i][j] << " ";
    }
    cout << endl;
  }
}
*/
