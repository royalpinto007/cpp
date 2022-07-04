/*
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.

Input Format :
String S

Output Format :
Updated string
*/

#include <iostream>
#include <cstring>
using namespace std;

void trimSpaces(char input[])
{
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        if (input[i] != ' ')
        {
            input[j] = input[i];
            j++;
        }
    }
    input[j] = '\0';
}

/*
int count=0;
{
for(int i=0; input[i]!='\0'; i++){
    count++;

}
cout<<count;
}

int j=0, k=count-1;
while(j<k){
    if(input[j]=='\0'){
        continue;
    }
}
*/

/*
int main()
{
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}
*/
