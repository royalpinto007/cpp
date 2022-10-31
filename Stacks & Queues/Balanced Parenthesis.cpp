/*
For a given a string expression containing only round brackets or parentheses, check if they are balanced or not. Brackets are said to be balanced if the bracket which opens last, closes first.

Example:
Expression: (()())
Since all the opening brackets have their corresponding closing brackets, we say it is balanced and hence the output will be, 'true'.
You need to return a boolean value indicating whether the expression is balanced or not.

Note:
The input expression will not contain spaces in between.

Sample Input 1 :
(()()())
Sample Output 1 :
true

Sample Input 2 :
()()(()
Sample Output 2 :
false
*/

/*
Pseudo Code 

Function: checkBalanced(exp) {
Create a Stack s
For i=0 to i less than length of exp:

if(exp[i] = '(' or exp[i] = '{' or exp[i] = '[') :
push(exp[i]) on stack s

else if(exp[i] = ')' or exp[i] = '}' or exp[i] = ']') :
if(stack is empty) :
return false
ch = top of stack
Pop from stack

if(exp[i] = ')' and ch = '(') :
Do nothing and continue

else if(exp[i] = '}' and ch = '{') :
Do nothing and continue

else if(exp[i] = ']' and ch = '[') :
Do nothing and continue

else :
return false

if(stack is empty) :
return true
else :
return false
*/ 
#include <stack> 

bool isBalanced(string expression) { 
    stack<char> stk; 
    for (int i = 0; i < expression.length(); i++) { 
        if (expression[i] == '(') 
        { 
            stk.push(expression[i]); 
        } 
        else if (expression[i] == ')') { 
            if (stk.empty()) 
            { 
                return false; 
            } 
            char topChar = stk.top(); 
            stk.pop(); 
            if (expression[i] == ')' && topChar == '(') 
            { 
                continue; 
            } 
            else 
            { 
                return false; 
            } 
        } 
    } 
    return stk.empty(); 
}

/*
#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() 
{
    string input;
    cin >> input;
    cout << ((isBalanced(input)) ? "true" : "false");
}
*/
