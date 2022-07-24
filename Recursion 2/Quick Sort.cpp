/*
Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)
  
Output format :
Array elements in increasing order (separated by space)

Sample Input 1 :
6 
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8
*/

/*
	To apply the method explained in the hint video, we have to add two more parameters in the function call. 
  This can be done by calling a helper function from given function. 
  The helper function can have three parameters: array, start index, end index.  
	
	Skeleton code to achieve this:
	#include <iostream>
	using namespace std;
	
	void quickSort(int input[], int start, int end)
	{
    		// your code goes here 
	}
	void quickSort(int input[], int size)
	{
    		quickSort(input, 0, size - 1);
	}
		
*/

int Partition(int a[],int l,int u)
{
    int pivot=a[u];
    int pIndex=l;
    
    for(int i=l;i<u;i++)
    {
        if(pivot>a[i])
        {
            int temp=a[pIndex];
            a[pIndex]=a[i];
            a[i]=temp;
            pIndex++;
        }
    }
    int temp=a[pIndex];
    a[pIndex]=a[u];
    a[u]=temp;
    return pIndex;
}


void qS(int a[],int l,int u)
{
    if(l<u)
    {
        int pIndex=Partition(a,l,u);
        qS(a,l,pIndex-1);
        qS(a,pIndex+1,u);
    }
}


void quickSort(int input[], int size) 
{
    qS(input,0,size-1);

}

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) 
    {
        cin >> input[i];
    }
    
    quickSort(input, n);
    for(int i = 0; i < n; i++) 
    {
        cout << input[i] << " ";
    }
  
    delete [] input;
}
*/
