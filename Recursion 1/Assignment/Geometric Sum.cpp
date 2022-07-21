/*
Given k, find the geometric sum i.e.
1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
*/

#include <bits/stdc++.h>
double geometricSum(int k)
{
    if (k == 0)
        return 1;

    double ans = 1 / (double)pow(2, k) + geometricSum(k - 1);
    return ans;
}

/*
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int k;
    cin >> k;
    cout << fixed << setprecision(5);
    cout << geometricSum(k) << endl;
}
*/
