/*
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. 
Write a program to return the list of all possible codes that can be generated from the given string.
Note : The order of codes are not important. And input string does not contain 0s.
*/

#include <bits/stdc++.h>
using namespace std;

void help(string input,string out,vector<string> &str)
{
    if(input.size()==0)
    {
        str.push_back(out);
        return;
    }
    char c1=(input[0]-48)+96;
    
    //Ignore the output coming from zero in a string
    if(input[0]=='0')
        return;
    
    help(input.substr(1),out+c1,str);
    
    if(input.size()>1)
    {
        int d=(input[0]-48)*10+(input[1]-48);
        if(d>26)
            return;
        char c2=96+d;
        help(input.substr(2),out+c2,str);
    }
    
}


int getCodes(string input, string output[10000])
{
   vector<string> str;
    string out="";
    help(input,out,str);
    
    for(int i=0;i<str.size();i++)
        output[i]=str[i];
    
    int x=str.size();
    
    return x;
}

/*
#include <iostream>
using namespace std;

int main()
{
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
*/
