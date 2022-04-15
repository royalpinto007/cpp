/* 

Given a binary number as an integer N, convert it into decimal and print.

Input-
1100

Output-
12

*/

#include<iostream>
using namespace std;
int main ()
{
    int num, rem, temp, dec = 0, b = 1;
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        dec = dec + (rem * b);
        b *= 2;
        num /= 10;
    }
    cout << dec;
    return 0;
}