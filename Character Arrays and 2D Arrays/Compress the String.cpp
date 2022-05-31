/*
Write a program to do basic string compression.
For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.

Example:
If a string has 'x' repeated 5 times, replace this "xxxxx" with "x5".
The string is compressed only when the repeated character count is more than 1.

Note:
Consecutive count of every character in the input string is less than or equal to 9.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
The output contains the string after compression printed in single line.

Note:
You are not required to print anything. It has already been taken care of. Just implement the given function.

Sample Input:
aaabbccdsa

Sample Output:
a3b2c2dsa
*/
#include <iostream>
#include <cstring>
#include <string>
#include <bits/stdc++.h>
using namespace std;

string getCompressedString(string &input)
{
    string ans = "";
    int n = input.length();
    if (n == 0)
        return ans;

    for (int i = 0; i < n; i++)
    {
        int count = 1;
        while (i < n - 1 && input[i] == input[i + 1])
        {
            count++; // 1
            i++;     //
        }
        if (count == 1)
        {
            ans += input[i]; // "a"
        }
        else
        {
            ans += input[i];
            ans += to_string(count);
        }
    }
    return ans;
}

int main()
{
    int size = 1e6;
    string str;
    getline(cin, str);
    str = getCompressedString(str);
    cout << str << endl;
}
