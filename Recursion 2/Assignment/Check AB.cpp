/*
Suppose you have a string, S, made up of only 'a's and 'b's. 
Write a recursive function that checks if the string was generated using the following rules:
  a. The string begins with an 'a'
  b. Each 'a' is followed by nothing or an 'a' or "bb"
  c. Each "bb" is followed by nothing or an 'a'
If all the rules are followed by the given string, return true otherwise return false.
*/

bool solve(char input[]) 
{
    if(input[0]=='\0')
        return true; 
    
    bool so;
   
    if(input[0]=='a'&&(input[1]=='\0'||input[1]=='a'))
        so=solve(input+1);
    else if(input[0]=='a'&&(input[1]=='b'&&input[2]=='b'))
        so=solve(input+1);
    else if(input[0]=='b'&&input[1]=='b'&&(input[2]=='\0'||input[2]=='a'))
        so= solve(input+2);
    else
        return false;
    
    return so;
}

bool checkAB(char input[]) 
{
    if(input[0]=='\0')
        return true; 
    else if (input[0] != 'a')
        return false;
    return solve(input);
}

/*
#include <iostream>
using namespace std;

int main() 
{
    char input[100];
    bool ans;
    cin >> input;
    ans=checkAB(input);
    if(ans)
        cout<< "true" << endl;
    else
        cout<< "false" << endl;
}
*/
