/* For a given string(str), remove all the consecutive duplicate characters.

Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.
All the characters in the string would be in lower case.

Output Format:
The only line of output prints the updated string.

Note:
You are not required to print anything. It has already been taken care of.
*/
#include <iostream>
#include <cstring>
using namespace std;

void removeConsecutiveDuplicates(char a[])
{
    // Write your code here
    int i = 0, j, s = strlen(a);
    while (i < s)
    {
        j = i + 1;
        if (a[i] != a[j])
        {
            i++;
        }
        else
        {
            j = i;
            while (j < s)
            {
                a[j] = a[j + 1];
                j++;
            }
            s--;
        }
    }
}

int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}