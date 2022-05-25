/*
Input Format:
The first and only line of input contains a string without any leading and trailing spaces. 
All the characters in the string would be in lower case.

Output Format:
The only line of output prints either 'true' or 'false'.

Example-
Input- abcdcba
Output- true
*/
#include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        count++;
    }
    int start = 0;
    int end = count - 1;

    while (start <= end)
    {
        if (str[start] == str[end])
        {
            start++;
            end--;
            continue;
        }
        else
        {
            return 0;
        }
    }
    return true;
}

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << (checkPalindrome(str) ? "true" : "false");
}
