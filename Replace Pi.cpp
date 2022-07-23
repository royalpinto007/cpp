/*
Sample Input 1 :
xpix
Sample Output :
x3.14x
*/

#include <bits/stdc++.h>
using namespace std;

void replacePiHelper(char input[], int start)
{
    // Base condition
    // if the string is empty
    // or of length one
    if (input[start] == '\0' || input[start + 1] == '\0') 
    {
        return;
    }
 
    // Getting the answer from
    // recursion for the smaller
    // problem
    replacePiHelper(input, start + 1);
 
    // Small calculation part
    // if the first character is 'p'
    // and the first character of the part
    // passed to recursion is 'i' then replace
    // "pi" with "3.14"
    if (input[start] == 'p' && input[start + 1] == 'i') 
    {
        // Shifting the characters to
        // right side to put 3.14 in
        // the character array
        for (int i = strlen(input); i >= start + 2; i--)
        {
            input[i + 2] = input[i];
        }
 
        // Replacing with "3.14"
        input[start] = '3';
        input[start + 1] = '.';
        input[start + 2] = '1';
        input[start + 3] = '4';
    }
}
 
// Function to replace pi with 3.14
void replacePi(char input[])
{
    replacePiHelper(input, 0);
}

/*
#include<cstring>
void replacePi(char input[]) 
{
    if(strlen(input)==0) return;
    
    if(input[0]=='p' and input[1]=='i')
    {
        
        for(int i=strlen(input);i>=0;i--)
        {
            input[i+2]=input[i];
        }
        
        input[0]='3';
        input[1]='.';
        input[2]='1';
        input[3]='4';
    }

    replacePi(input+1);
    return;
}
*/

/*
#include <iostream>
using namespace std;

int main() 
{
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}
*/
