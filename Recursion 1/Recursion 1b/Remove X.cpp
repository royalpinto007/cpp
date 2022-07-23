#include <bits/stdc++.h>
using namespace std;
 
void removeX(char input[]) 
{
    if(input[0]=='\0')
        return;
    if(input[0]!='x')
    {
        removeX(input+1);
    }
    else
    {
        int i=1;
        for(;input[i]!='\0';i++)
        {
            input[i-1]=input[i];
        }
        input[i-1]=input[i];
        removeX(input);
    }
}

#include <iostream>
using namespace std;

int main() 
{
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}
