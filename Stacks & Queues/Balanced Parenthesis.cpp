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
