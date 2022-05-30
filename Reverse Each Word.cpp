/*
Aadil has been provided with a sentence in the form of a string as a function parameter. 
The task is to implement a function so as to print the sentence such that each word in the sentence is reversed.

Example:
Input Sentence: "Hello, I am Aadil!"
The expected output will print, ",olleH I ma !lidaA".

Input Format:
The first and only line of input contains a string without any leading and trailing spaces. The input string represents the sentence given to Aadil.

Output Format:
The only line of output prints the sentence(string) such that each word in the sentence is reversed. 

Sample Input 1:
Welcome to Coding Ninjas

Sample Output 1:
emocleW ot gnidoC sajniN
*/
#include <iostream>
#include <cstring>
using namespace std;

void reverseEachWord(char input[])
{
    int start = 0;
    for (int i = 0; i <= strlen(input); i++)
    {
        if (input[i] == ' ' || input[i] == '\0')
        {
            int end = i - 1;
            while (start < end)
            {
                char temp = input[start];
                input[start] = input[end];
                input[end] = temp;
                start++;
                end--;
            }
            if (input[i] != '\0')
            {
                start = i + 1;
            }
        }
    }
}

int main() {
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}