/*
Given an integer array (of length n), find and print all the subsets of input array.
Subsets are of length varying from 0 to n, that contain elements of the array. 
But the order of elements should remain same as in the input array.
Note : The order of subsets are not important. Just print the subsets in different lines.
*/

// #include <bits/stdc++.h>
// using namespace std;
// void printSubsetsOfArray(int input[], int size)
// {
//     int count = pow(2, size);
//     // The outer for loop will run 2^n times to print all subset .
//     // Here variable i will act as a binary counter
//     for (int i = 0; i < count; i++) {
//         // The inner for loop will run n times , 
//         // As the maximum number of elements a set can have is n
//         // This loop will generate a subset
//         for (int j = 0; j < size; j++) {
//             // This if condition will check if jth bit in 
//             // binary representation of  i  is set or not
//             // if the value of (i & (1 << j)) is not 0 , 
//             // include arr[j] in the current subset
//             // otherwise exclude arr[j]
//             if ((i & (1 << j)) != 0)
//                 cout << input[j] << " ";
//         }
//         cout << "\n";
//     }
// }
void printSubsetsOfArray(int input[],int size, int output[],int outputSize)
{
    if(size == 0)
    {
        for(int i=0;i<outputSize;i++)
        {
            cout<<output[i]<<" ";
        }
        cout<<endl;
        return;
    }
    
    printSubsetsOfArray(input+1,size-1,output,outputSize);
    //assuming current elemnet is included in array
    int newoutput[20] = {};
    for(int i=0;i<outputSize;i++)
    {
        newoutput[i] = output[i];
    }
    newoutput[outputSize] = input[0];
    printSubsetsOfArray(input+1,size-1,newoutput,outputSize+1);
}

void printSubsetsOfArray(int input[], int size) 
{
    int ans[20] = {};
    printSubsetsOfArray(input,size,ans,0);
}

/*
#include <iostream>
using namespace std;

int main() 
{
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  
  printSubsetsOfArray(input, length);
}
*/
