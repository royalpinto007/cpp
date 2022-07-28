/*
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

Input-
10
Output-
5 11 14 17 23 26 29 35 38 41

*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int y = 1, i = 1;

    while (i <= n)
    {
        int Y = 3 * y + 2;
        if (Y % 4 != 0)
        {
            cout << Y << " ";
            i++;
        }
        y++;
    }
}
