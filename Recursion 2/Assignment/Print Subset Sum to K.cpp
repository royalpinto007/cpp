/*
Given an array A and an integer K, print all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array.
But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print them in different lines.
*/

#include <iostream>
#include <vector>
using namespace std;

void help(int input[], int size, int k ,vector<int> ans)
{
    if(size==0)
    {
        if(k==0)
        {
            for(int i: ans)
                cout<<i<<" ";
            cout<<endl;
        }
        
        return;
    }
    help(input+1,size-1,k,ans);		//not including

    ans.push_back(input[0]);
    
    help(input+1,size-1,k-input[0],ans);	// including
                                 
    return;
}

void printSubsetSumToK(int input[], int size, int k) 
{
    vector<int > ans;

    help(input,size,k,ans);    
}

/*
#include <iostream>
using namespace std;

int main() 
{
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  
  printSubsetSumToK(input, length,k);
}
*/
