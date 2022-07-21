/*
Sample Input 1 :
racecar
Sample Output 1:
true
  
Sample Input 2 :
ninja
Sample Output 2:
false
*/
  
#include <bits/stdc++.h>
using namespace std;

bool isPalRec(char input[], int s, int e)
{
    if (s == e)
        return true;

    if (input[s] != input[e])  // small work is done first here, for example- abdbc (here if first and last element are only not equal, then there is no use of calling function again right?
        return false;

    if (s < e + 1)
        return isPalRec(input, s + 1, e - 1);         // we call bdb part from above example, because initially we compare first and last character

    return true;
}

bool checkPalindrome(char input[])
{
    int n = strlen(input);
    if (n == 0)
        return true;

    return isPalRec(input, 0, n - 1);
}

/*
#include <iostream>
using namespace std;

int main()
{
    char input[50];
    cin >> input;

    if (checkPalindrome(input))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
*/
