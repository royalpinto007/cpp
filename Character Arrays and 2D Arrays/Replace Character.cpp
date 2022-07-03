/*

Given an input string S and two characters c1 and c2,
you need to replace every occurrence of character c1 with character c2 in the given string.

Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)

Output Format :
Updated string

*/

#include <iostream>
#include <cstring>
using namespace std;

void replaceCharacter(char input[], char c1, char c2)
{
    int count = 0;

    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    int start = 0;
    int end = count - 1;

    while (start <= end)
    {
        if (input[start] == c1)
        {

            input[start] = c2;
        }
        start++;
    }
}

/*
int main()
{
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}
*/
