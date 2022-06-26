/*
Given a string S (that can contain multiple words), you need to find the word which has minimum length

Note : If multiple words are of same length, then answer will be first minimum length word in the string.
Words are seperated by single space only.

Input Format :
String S

Output Format :
Minimum length word
*/
#include <cstring>
#include <iostream>
using namespace std;

void minLengthWord(char input[], char output[])
{
    int len = strlen(input);
    int si = 0, ei = 0;
    int min_length = len, min_start_index = 0;
    while (ei <= len)
    {
        if (ei < len && input[ei] != ' ')
            ei++;

        else
        {

            int curr_length = ei - si;

            if (curr_length < min_length)
            {
                min_length = curr_length;
                min_start_index = si;
            }

            ei++;
            si = ei;
        }
    }
    for (int i = 0; i < min_length; i++)
    {
        output[i] = input[min_start_index++];
    }
}
/*
#include <climits>
#include <cstring>

void minLengthWord(char input[], char output[])
{
    int minStart = -1;
    int minLength = INT_MAX;
    int currentStart = 0;
    int i = 0;
    int len = strlen(input);

    for (; i < len; i++)
    {
        if (input[i] == ' ')
        {
            int currentWordLength = i - currentStart;
            if (currentWordLength < minLength)
            {
                minStart = currentStart;
                minLength = currentWordLength;
            }
            currentStart = i + 1;
        }
    }
    if (minStart == -1)
    {
        for (int i = 0; i <= len; i++)
        {
            output[i] = input[i];
        }
    }
    else
    {
        int currentWordLength = i - currentStart;
        if (currentWordLength < minLength)
        {
            minStart = currentStart;
            minLength = currentWordLength;
        }
        int j = 0;
        for (int i = minStart; i < minStart + minLength; i++)
        {
            output[j++] = input[i];
        }
        output[j] = '\0';
    }
}
*/
int main()
{
    char ch[10000], output[10000];
    cin.getline(ch, 10000);
    minLengthWord(ch, output);
    cout << output << endl;
}
