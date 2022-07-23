/*
Sample Input 1 :
00001231
Sample Output 1 :
1231
  
Sample Input 2 :
12567
Sample Output 2 :
12567
*/ 
#include <bits/stdc++.h>
using namespace std;

//To find length of the string
int length(char input[])
{
	int len = 0;
	for(int i =0;input[i] != '\0';i++)
    {
		len++;
	}
	return len;
}

//Helper Function
int stringToNumber(char input[], int last)
{
	//Base Case
	if(last == 0)
    {
		return input[last] - '0';                     // example we need to print 1, it does 1-'0' = 1 (in ASCII though, have written wrong here just to understand)
	}
	//Recursive Call
	int smallAns = stringToNumber(input,last-1);       
	int a = input[last] - '0';
	return smallAns * 10 + a;
}

//Recursive Function
int stringToNumber(char input[])
{
	int len = length(input);
    // or, just do int len = strlen(input);
	return stringToNumber(input,len-1);
}

/*
#include <iostream>
using namespace std;

int main() 
{
    char input[50];
    cin >> input;
    cout << stringToNumber(input) << endl;
}
*/
