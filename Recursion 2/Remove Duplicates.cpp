void removeConsecutiveDuplicates(char *input) 
{

   if(input[0]=='\0')
        return;
    
    if(input[0]==input[1])
    {
        int i=1;
        for(;input[i]!='\0';i++)
        {
            input[i-1]=input[i];
        }
        input[i-1]=input[i];		// for shifting null
        removeConsecutiveDuplicates(input);
    }
    removeConsecutiveDuplicates(input+1);
}

/*
void remove(char *input, int newIndex, int index) 
{ 
	  if (input[index] == '\0') 
		{ 
		  input[newIndex] = input[index - 1]; 
		  input[newIndex + 1] = '\0'; 
		  return; 
		} 

	  if (input[index] == input[index - 1]) 
		{ 
		  remove(input, newIndex, index + 1); 
		  return; 
		} 

	  else 
		{ 
		  input[newIndex] = input[index - 1]; 
		} 
	
	remove(input, newIndex + 1, index + 1); 
} 

void removeConsecutiveDuplicates(char *input) 
		{ 
		  remove(input, 0, 1); 
		}    
*/

/*
#include <iostream>
using namespace std;

int main() 
{
    char s[100000];
    cin >> s;
    removeConsecutiveDuplicates(s);
    cout << s << endl;
}
*/
