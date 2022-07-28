/* 
Write a program that asks the user for a number N and a choice C.
And then give them the possibility to choose between computing the sum
and computing the product of all integers in the range 1 to N (both inclusive).

1, then print the sum
2, then print the product
Any other number, then print '-1' (without the quotes)

Input-
10 
1

Output-
55
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int r;
    cin >> n >> r;

    int sum = 0;
    int product = 1;

    if (r == 1)
    {
        for (int i = 0; i <= n; i++)
        {
            sum = sum + i;
        }
        cout << sum;
    }

    else if (r == 2)
    {
        for (int j = 1; j <= n; j++)
        {
            product = product * j;
        }
        cout << product;
    }
    else
    {
        cout << "-1";
    }
}
