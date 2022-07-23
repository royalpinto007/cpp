#include <bits/stdc++.h>
using namespace std;

void pairStar(char input[]) 
{
    int len = strlen(input);

    if(input[0] == '\0')
    {
        return ;
    }
    if(input[0] == input[1])
    {
        for(int i = len; i >= 2; i--)
        { 
           input[i] = input[i-1];
        }
     
        input[2] = input[1];
        input[1] = '*';
        input[len+1]='\0';
    }
    pairStar(input+1);
    
}
/*
#include<cstring>
void pairStar(char input[]) 
{
    if(strlen(input)==0) return;
    
  while(input[0]==input[1])
    {
        
        for(int i=strlen(input);i>=1;i--)
        {
            input[i+1]=input[i];
        }
        
        input[1]='*';
    }
    
    pairStar(input+1);
    return;
}
*/

/*
#include <iostream>
using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}
*/
