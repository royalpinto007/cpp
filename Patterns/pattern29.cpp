/*
    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/

#include <iostream>
using namespace std;

int main()
{
    int i, j, k, n;
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        int val = n - i + 1;
        for (j = 1; j <= n - i + 1; j++)
        {
            cout << j;
        }
        for (j = 2; j < 2 * i; j++)
        {
            cout << "*";
        }
        for (k = 1; k <= n - i + 1; k++)
        {
            cout << val;
            val = val - 1;
        }
        cout << endl;
    }
}
