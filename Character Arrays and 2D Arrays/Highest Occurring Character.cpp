/*
For a given a string(str), find and return the highest occurring character.

Example:
Input String: "abcdeapapqarr"

Expected Output: 'a'

Since 'a' has appeared four times in the string which happens to be the highest frequency character, the answer would be 'a'.
If there are two characters in the input string with the same frequency, return the character which comes first.

Consider:
Assume all the characters in the given string to be in lowercase always.

Input Format:
The first and only line of input contains a string without any leading and trailing spaces.

Output Format:
The only line of output prints the updated string.

Note:
You are not required to print anything explicitly. It has already been taken care of.

Sample Input:
abdefgbabfba

Sample Output:
b
*/

#include <iostream>
#include <cstring>
using namespace std;

char highestOccurringChar(char input[])
{
    int arr[256] = {0}; // for storing the frequency of char of input array
    for (int i = 0; input[i] != '\0'; i++)
    {
        int a = input[i];
        arr[a]++;
    }

    int max = arr[0];
    int j = 0;
    for (int i = 0; i < 256; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            j = i;
        }
    }
    char res = j;
    return res;
}

/*
int main()
{
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}
*/
