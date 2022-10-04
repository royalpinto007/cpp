/*
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. 
Return the index of x.
Return -1 if x is not present in the given array.

Note : If given array size is even, take first mid.
*/

int B(int a[],int s,int e, int i)
{
    if(s>e)
        return -1;
    
  int mid= (s+e)/2;
  if(a[mid]==i) return mid;
  if(a[mid]>i) return B(a,s,mid-1,i);
  if(a[mid]<i) return B(a,mid+1,e,i);
}

int binarySearch(int input[], int size, int element) 
{
    int start =0;
    int end= size -1;
     int ans =B(input ,start,end,element);
    return ans;
}

/*
#include <iostream>
using namespace std;

int main() 
{
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}
*/
