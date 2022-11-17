// Given a positive integer 'n', find and return the minimum number of steps that 'n' has to take to get reduced to 1. You can perform any one of the following 3 steps:
// 1.) Subtract 1 from it. (n = n - ­1) ,
// 2.) If its divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
// 3.) If its divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).  
// Write brute-force recursive solution for this.
    
// Sample Input 1 :
// 4
// Sample Output 1 :
// 2 
// Explanation of Sample Output 1 :
// For n = 4
// Step 1 :  n = 4 / 2  = 2
// Step 2 : n = 2 / 2  =  1 
    
// Sample Input 2 :
// 7
// Sample Output 2 :
// 3
// Explanation of Sample Output 2 :
// For n = 7
// Step 1 :  n = 7 ­- 1 = 6
// Step 2 : n = 6  / 3 = 2 
// Step 3 : n = 2 / 2 = 1  
    
#include <climits>

int countMinStepsToOne(int n)
{
    if (n == 1)
    {
        return 0;
    }

    int subtractOne = countMinStepsToOne(n - 1);
    int divideByTwo = INT_MAX;
    int divideByThree = INT_MAX;
    if (n % 2 == 0)
    {
        divideByTwo = countMinStepsToOne(n / 2);
    }

    if (n % 3 == 0)
    {
        divideByThree = countMinStepsToOne(n / 3);
    }
    
    return 1 + min(subtractOne, min(divideByTwo, divideByThree));
}

/*
int countMinStepsToOne(int n)
{
    // Write your code here
    if (n == 1 || n == 0)
        return 0;
    int a = INT_MAX, b = INT_MAX, c = INT_MAX;
    
    if (n % 3 == 0)
        a = countMinStepsToOne(n / 3);
    if (n % 2 == 0)
        b = countMinStepsToOne(n / 2);
    
    c = countMinStepsToOne(n - 1);
    int ans = min(a, min(b, c)) + 1;
    return ans;
}
*/

// #include <bits/stdc++.h>
// using namespace std;
// #include "solution.h"

// int main()
// {
// 	int n;
// 	cin >> n;
// 	cout << countMinStepsToOne(n);
// }
