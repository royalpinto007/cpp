// Given a positive integer 'n', find and return the minimum number of steps that 'n' has to take to get reduced to 1. You can perform any one of the following 3 steps:
// 1.) Subtract 1 from it. (n = n - ­1) ,
// 2.) If n is divisible by 2, divide by 2.( if n % 2 == 0, then n = n / 2 ) ,
// 3.) If n is divisible by 3, divide by 3. (if n % 3 == 0, then n = n / 3 ).  
  
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
  
int countStepsToOne(int n){

    int *ans = new int[n + 1];
    ans[0] = 0;
    ans[1] = 0;
  
    for (int i = 2; i <= n; i++)
    {
        int a = INT_MAX, b = INT_MAX, c = INT_MAX;
      
        if (i % 3 == 0)
            a = ans[i / 3];
        if (i % 2 == 0)
            b = ans[i / 2];
        c = ans[i - 1];
      
        if (a <= b && a <= c)
            ans[i] = 1 + a;
        else if (b <= a && b <= c)
            ans[i] = 1 + b;
        else
            ans[i] = 1 + c;
    }
    return ans[n];
}

// CN video solution
// #include <iostream>
// using namespace std;

// int minStepsHelper(int n, int *ans) {
// 	// Base case
// 	if(n <= 1) {
// 		return 0;
// 	}

// 	// Check if output already exists
// 	if(ans[n] != -1) {
// 		return ans[n];
// 	}

// 	// Calculate output
// 	int x = minStepsHelper(n - 1, ans);

// 	int y = INT_MAX, z = INT_MAX;
// 	if(n % 2 == 0) {
// 		y = minStepsHelper(n/2, ans);
// 	}

// 	if(n % 3 == 0) {
// 		z = minStepsHelper(n/3, ans);
// 	}

// 	int output = min(x, min(y, z)) + 1;

// 	// Save output for future use
// 	ans[n] = output;

// 	return output;

// }

// int misSteps_2(int n) {
// 	int *ans = new int[n+1];

// 	for(int i = 0; i <= n; i++) {
// 		ans[i] = -1;
// 	}

// 	return minStepsHelper(n, ans);
// }


// int minSteps(int n) {
// 	// Base case
// 	if(n <= 1) {
// 		return 0;
// 	}

// 	// Recursive call
// 	int x = minSteps(n - 1);

// 	int y = INT_MAX, z = INT_MAX;
// 	if(n % 2 == 0) {
// 		y = minSteps(n/2);
// 	}

// 	if(n % 3 == 0) {
// 		z = minSteps(n/3);
// 	}

// 	// Calculate final output
// 	int ans = min(x, min(y, z)) + 1;

// 	return ans;
// }

// int main() {
// 	int n;
// 	cin >> n;

// 	cout << minSteps(n) << endl;
// }

// CN Solution-
// int countStepsToOne(int n)
// {
//     int *minSteps = new int[n + 1];
//     minSteps[1] = 0;
//     for (int i = 2; i <= n; ++i)
//     {
//         int subtractOne = minSteps[i - 1];
//         int divideByTwo = INT_MAX;
//         int divideByThree = INT_MAX;
//         if (i % 2 == 0)
//         {
//             divideByTwo = minSteps[i / 2];
//         }
//         if (i % 3 == 0)
//         {
//             divideByThree = minSteps[i / 3];
//         }
//         minSteps[i] = 1 + min(subtractOne, min(divideByTwo, divideByThree));
//     }
//     int result = minSteps[n];
//     delete[] minSteps;
//     return result;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #include "solution.h"

// int main()
// {
// 	int n;
// 	cin >> n;
// 	cout << countStepsToOne(n);
// }
